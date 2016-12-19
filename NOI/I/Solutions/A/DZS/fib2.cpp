#include<iostream>
using namespace std;
int main()
{
	int sy, n;
	cin>>sy>>n;
		long int a[n];
	cin>>a[0]>>a[1];
	for(int i=2; i<n; i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	if(a[n-1]>=sy)cout<<(a[n-1]/sy)%sy;
	else cout<<a[n-1];
	return 0;
}
