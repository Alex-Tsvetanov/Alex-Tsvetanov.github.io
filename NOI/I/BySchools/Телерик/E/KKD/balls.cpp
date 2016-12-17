#include<iostream>
using namespace std;
long long n1,n2,k,otgovor;
char vid1,vid2;
int main(){
    cin>>n1>>vid1;
    cin>>n2>>vid2;
    cin>>k;
    if(vid1=='A'){
        if(k<=n1){
            otgovor=k;
        }else{
            otgovor=n1;
        }
    }else{
        if(k>n1){
            otgovor=k-n1;
        }else{
            otgovor=0;
        }
    }
    cout<<otgovor<<endl;
return 0;
}
