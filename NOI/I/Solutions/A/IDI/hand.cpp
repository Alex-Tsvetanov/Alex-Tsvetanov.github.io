#include<iostream>
using namespace std;
int shakes[200001];
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>shakes[i];
    }

    //Finding maximum
    int maxn=0,cntFriend=0;
    for(int i=n-1;i>=0;i--){
        maxn=max(maxn,shakes[i]+cntFriend);
        if(shakes[i]!=0){
            cntFriend++;
        }
    }
    cout<<maxn<<"\n";

    //Finding minimum
    int minx=n-1,cntAll=0;
    for(int i=n-1;i>=0;i--){
        minx=min(minx,shakes[i]+cntAll);
        if(shakes[i]==i){
                cntAll++;
        }
    }
    cout<<minx<<"\n";
    return 0;
}
