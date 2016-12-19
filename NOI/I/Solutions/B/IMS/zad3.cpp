#include<iostream>
using namespace std;

long long n,a[10000],dp[10000];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=1;j<=3;j++){
            if(dp[i+j]==0){
                dp[i+j]=a[i+j]+dp[i];
            }else{
                dp[i+j]=min(dp[i+j],a[i+j]+dp[i]);
            }
        }
    }
    cout<<dp[n]<<"\n";
    return 0;
}
