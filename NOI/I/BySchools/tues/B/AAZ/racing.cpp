#include<iostream>
using namespace std;

int main(){
    int n,a[1001],sum[1001],sol,sols=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i=i+1){
        sol = 0;
        for(int j=0;j<n-i);j=j+2){
            sol = sol + a[j];
        }
        sum[sols] = sol;
        sols ++;
    }
    int mn = sum[0];
    for(int i=0;i<n;i++){
        if(sum[i]<mn){
            mn = sum[i];
        }
    }
    cout<<mn*(n-3)<<"\n";


    return 0;
}

