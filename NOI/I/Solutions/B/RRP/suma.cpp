#include<iostream>
using namespace std;
int main(){
int n,sbor=0,sbor2=0;
cin>>n;
int masiv[n];
for(int i=0;i<n;i++){
    cin>>masiv[i];
    sbor=sbor+masiv[i];
}
for(int i=n-1;i>=0;i--){
    if(sbor-masiv[i]==sbor2+masiv[i-1]+masiv[i]){
        cout<<i+1;
        break;
    }
    sbor=sbor-masiv[i];
    sbor2=sbor2+masiv[i];
    cout<<sbor<<" ";
    cout<<sbor2<<endl;
}






return 0;
}
