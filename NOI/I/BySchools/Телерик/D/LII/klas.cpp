#include<iostream>
using namespace std;
int mane() {
    long long M,N;
cin>>M;
 cin>>N;
        if(M*M-1==N*N+2){
  M=M*M-1;
  N=N*N+2;
        }
        cout<<M<<" "<<N;
return 0;
}
