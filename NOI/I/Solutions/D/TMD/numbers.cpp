#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long m,n,i,a,br=0;
	cin>>m>>n;
	for(i=m;i<=n;i++){
		a=sqrt(i);
		if(a*(a+1)==i){
			break;
		}
	}
	for(i=a;i*(i+1)<=n;i++){
		br++;
	}
	cout<<br<<endl;
	return 0;
}
