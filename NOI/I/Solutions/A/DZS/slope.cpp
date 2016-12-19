#include<iostream>
#include<cmath>
using namespace std;
double r[100];
int rbr=0;
class P
{
private :
	int x[4];
public :
	double nk;
	P();
	P(int, int, int, int);
	double nak();
};
P::P()
{
	for(int i=0; i<4; i++)
	{
		cin>>x[i];
	}
	int c=0;
	nk=nak();
	cout<<"nk = "<<nk;
	for(int i=0; i<rbr; i++)
	{
		if(nk==r[i]) c++;
	}
	if(c==0)
	{
		r[rbr]=nk;
		rbr++;
	}
}
P::P(int a, int b, int c, int d)
{
	x[0]=a;
	x[1]=b;
	x[2]=c;
	x[3]=d;
}
double P::nak()
{
	if(x[1]==x[3]) return 1;
	if(x[0]==x[2]) return 0;
	return (x[3]-x[1])/sqrt(pow((x[2]-x[0]), 2)+pow(x[3]-x[1], 2));
}
int main()
{
	int n, br=0;
	cin>>n;
	P a[n];
	cout<<rbr;
	return 0;
}
