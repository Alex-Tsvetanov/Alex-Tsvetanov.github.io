#include<iostream>
using namespace std;
long long totalSize=0;
long long reachDeepTo[100100][2],reachDeep=0,reachDeepToIndex=1;
int w,h,n,aX[100100],aY[100100];
int main(){

    cin>>w>>h>>n;
    for(int i=0;i<n;i++){
        cin>>aX[i]>>aY[i];
    }
    reachDeepTo[0][0]=aY[0];
    reachDeepTo[0][1]=aX[0];
    for(int i=1;i<n;i++){
        if(aY[i]<=reachDeep){
            if(aX[i]>=reachDeepTo[reachDeepToIndex-1][1]){
                reachDeepTo[reachDeepToIndex][0]=aY[i];
                reachDeepTo[reachDeepToIndex][1]=aX[i];
                reachDeepToIndex++;
            }
        }
        if(aY[i]>reachDeep){
            reachDeep=aY[i];
            reachDeepTo[reachDeepToIndex][0]=aY[i];
            reachDeepTo[reachDeepToIndex][1]=aX[i];
            reachDeepToIndex++;
        }
    }

    for(int i=0;i<reachDeepToIndex-1;i++){
        long long addWith=0;
        if(reachDeepTo[i][1]==reachDeepTo[i+1][1]){
            addWith=(w-reachDeepTo[i][1])*(reachDeepTo[i+1][0]-reachDeepTo[i][0]);
        }
        if(reachDeepTo[i][1]!=reachDeepTo[i+1][1]&&reachDeepTo[i][0]!=reachDeepTo[i+1][0]){
            addWith=(w-(reachDeepTo[i+1][1]))*(reachDeepTo[i+1][0]-reachDeepTo[i][0]);
        }
        totalSize+=addWith;
    }
    cout<<totalSize<<endl;
    return 0;
}
