#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

long fib(long n, long f1, long f2)
{
	if(n == 2)
	{
		return f2;
	}
	else if(n==1)
	{
		return f1;
	}

	return (fib(n-1,f1,f2) + fib(n-2,f1,f2))%10000;
}

string itoa(int n, int p)
{
	string digits("0123456789ABCDEF");
	string r;

	while(n)
	{
		r.insert(r.begin(), digits[abs(n % p)]);
		n /= p;
	}

	return r;
}

int main()
{
	int n;
	int p;
	string s;
	string i1;
	string i2;
	cin >> p >> s >> i1 >> i2;
	if(s.size() > 3)
	{
		s = s.substr(s.size() - 4, string::npos);
	}

	n = atoi(s.c_str());
	string str = itoa(fib(n % 300, strtol(i1.c_str(), NULL, p), strtol(i2.c_str(), NULL, p)), p);
	cout << str[str.size() - 2] << endl;
}
