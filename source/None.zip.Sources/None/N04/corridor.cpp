#include <iostream>
using namespace std;
int main()
{
	int w,h;
	int N;
	int x[110],y[110];
	int i,j,br=0;
	cin>>w>>h;
	int s=w*h;
	cin>>N;
	for (i=0;i<N;i++) cin>>x[i]>>y[i];
	
	int M[110][110];
	for (i=0;i<h;i++)
	for (j=0;j<w;j++)
		M[i][j]==0;
	
	for (i=0;i<h;i++)
	for (j=0;j<w;j++) {
		if (j<x[i]) M[i][j]=1;
	}
		
		for (i=0;i<=h;i++)
	for (j=0;j<=w;j++)
	{
		if (M[i][j]==1) br++;
	}
	cout<<s-br-4;
}
