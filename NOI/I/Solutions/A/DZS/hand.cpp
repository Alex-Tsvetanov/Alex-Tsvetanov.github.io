#include<iostream>
using namespace std;
struct sl
{
	int rk;
	int brx;
	int brn;
};
int mx=0, mn=200000;
int main()
{
	int N;
	cin>>N;
	sl x[N];
	for(int i=0; i<N; i++)
	{
		cin>>x[i].rk;
		x[i].brx=x[i].rk;
		x[i].brn=x[i].rk;
	}
int br1=0;
int br2=0;
for(int j=N-1; j>=0; j--)
	{
		if(mn>x[j].rk+br1) mn=x[j].rk+br1;
		if(x[j].rk==j) br1++;
		if(mx<x[j].rk+br2) mx=x[j].rk+br2;
		if(x[j].rk>0) br2++;
	}
	cout<<mx<<endl;
	cout<<mn;
	return 0;
}
