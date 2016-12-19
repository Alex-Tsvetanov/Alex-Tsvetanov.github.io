#include<iostream>
using namespace std;
int main(){
    long long vuvedeno1,vuvedeno2,otA,otB,k,vzetiOtA;
    char vid1,vid2;
    cin>>vuvedeno1>>vid1>>vuvedeno2>>vid2>>k;
    if(vid1=='A'){
        otA=vuvedeno1;
        otB=vuvedeno2;
        if(k>otA){
            cout<<otA;
        }else{
            cout<<k;
        }
    }
    if(vid1=='B'){
        otB=vuvedeno1;
        otA=vuvedeno2;
        if(k>otB){
            cout<<k-otB;
        }else{
            cout<<"0";
        }
    }
    cout<<endl;
return 0;
}
