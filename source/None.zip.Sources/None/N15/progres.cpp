#include<iostream>
using namespace std;
long long findF[100100];
long long mod=123456789012345;
long long res;
int main(){
findF[1]=1;
for(int i=2;i<100100;i++){
    findF[i]=(findF[i-1]%mod)*i;
}
int a[1024];
int N=0;

cin>>N;
for(int i=0;i<N;i++){
    cin>>a[i];
}
cout<<findF[N-(N-N%2)/2]<<endl;
    return 0;
}
/**
6
1 9 1 9 2 3
*/
