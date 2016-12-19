#include<iostream>
using namespace std;
int main(){
char x,y;
long long n1,n2,k;
cin>>n1>>x>>n2>>y>>k;
if(x=='B'){
    if(n1>k){
        cout<<"0";
    }else{
    cout<<k-n1;
}
}
if(y=='B'){
    if(n1<k){
        cout<<n1;
    }else{
        cout<<k;
    }

}
return 0;
}
