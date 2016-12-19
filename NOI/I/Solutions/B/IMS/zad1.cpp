#include<iostream>
using namespace std;

long long masiv[200024],n,i,napred[200024],nazad[200024],maxx=0;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin>>n;
    cin>>masiv[0];
    napred[0]=masiv[0];
    for(i=1;i<n;i++){
        cin>>masiv[i];
        napred[i]=napred[i-1]+masiv[i];
    }
    nazad[n-1]=masiv[n-1];
    for(i=n-2;i>=0;i--){
        nazad[i]=nazad[i+1]+masiv[i];
    }
    nazad[n]=nazad[n-1];
    for(i=0;i<n-1 and napred[i]<=nazad[i+1];i++){
        long long left=i+1,right=n-1,mid=(left+right)/2,curr=-1;
        if(napred[i]>=nazad[n-1]){
            while(left+1<right){
                if(nazad[mid]>napred[i]){
                    left=mid;
                }else{
                    right=mid;
                }
                mid=(left+right)/2;
            }
            if(nazad[left]==napred[i]){
                curr=i+1+n-left;
            }else if(nazad[right]==napred[i]){
                curr=i+1+n-right;
            }
            if(curr>maxx){
                maxx=curr;
            }
        }
    }
    cout<<maxx<<"\n";
    return 0;
}
