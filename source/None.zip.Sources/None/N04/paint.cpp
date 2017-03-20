#include <iostream>
using namespace std;
int main()
{
	int tableX,tableY;
	int N;
	int X[11001],Y[11001],W[11001],H[11001],X1[11001],Y1[11001];
	int T;
	int pointX[11001],pointY[11001];
	int i,j,S; 
	
	cin>>tableX>>tableY;
	cin>>N;
	for (i=0;i<N;i++) cin>>X[i]>>Y[i]>>W[i]>>H[i];
	cin>>T;
	for (i=0;i<T;i++) cin>>pointX[i]>>pointY[i];
	
	for (i=0;i<N;i++) {
		X1[i]=X[i]+W[i];
		Y1[i]=Y[i]+H[i];
	}
	for (i=0;i<T-1;i++){
		if (pointX[i]>X[i] && pointY[i]>Y[i] || pointX[i]<X1[i] && pointY[i]<Y1[i]) S=W[i]*H[i];
		cout<<S<<endl;
		S=S+1;
		}
		cout<<tableX*tableY;
}

