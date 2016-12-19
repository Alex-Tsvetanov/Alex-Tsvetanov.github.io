#include<iostream>
using namespace std;
int main() {
int n1,n2,k;
char a,b;
cin>>n1>>a>>n2>>b>>k;
if(a=='A'){

    if(n1>k){
        cout<<k;
    }

    if(n1<k){
        cout<<n1;
    }

    if(n1==k){
        cout<<n1;
    }

}
if(b=='A'){

    if(n1>k){
    cout<<"0";
  }

    if(n1<=k){
    cout<<k-n1;
  }

}
return 0;
}









