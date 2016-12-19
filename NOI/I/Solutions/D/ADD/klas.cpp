#include<iostream>
using namespace std;
int main (){
int N,M,ruk=0,zdr=0,gzdr=0,hora;
cin>>N>>M;
for(int i=N;i--;i>0){
    ruk=ruk+i;
}
cout<<ruk<<" ";
zdr=M*N*2+M*(M-1)+ruk*2;
cout<<zdr;
return 0;
}
