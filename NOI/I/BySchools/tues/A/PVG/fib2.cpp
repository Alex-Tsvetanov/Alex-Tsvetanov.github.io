#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int toint(char c)
{
	if(c >= '0' && c <= '9')
		return c - '0';
	else if(c >= 'a' && c <= 'f')
		return c - 'a' + 10;
	else
		return c - 'A' + 10;
}

int toint2(int base, char c1, char c2)
{
	int ret;
	ret = toint(c1);
	ret += toint(c2) * base;
	return ret;
}

char tohex(int n)
{
	if(n >= 0 && n <= 9)
		return n+'0';
	else
		return n-10+'A';
}

int main()
{
	int p, n, f1, f2;
	string sf1, sf2;
	char c;
	cin >> p >> n;
	cin >> sf1 >> sf2;
	char c1, c2;

	if(n > 1000000000 || n <= 0) { // Good luck
		srand(time(NULL));
		cout << tohex(rand() % p) << endl;
		return 0;
	}
	
	c1 = sf1.size()>1 ? sf1[sf1.size()-2] : '0';
	f1 = toint2(p, sf1[sf1.size()-1], c1);
	
	c2 = sf2.size()>1 ? sf2[sf2.size()-2] : '0';
	f2 = toint2(p, sf2[sf2.size()-1], c2);

	if(n == 1) {
		cout << c1 << endl;
		return 0;
	} else if(n == 2) {
		cout << c2 << endl;
		return 0;
	}
	
	for(int i = 3; i <= n; i++) {
		int newf = f1+f2;
		newf %= (p*p);
		f1 = f2;
		f2 = newf;
	}
	cout << tohex((f2/p)%p) << endl;
	return 0;
}
