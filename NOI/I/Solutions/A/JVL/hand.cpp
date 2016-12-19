#include<iostream>
using namespace std;
int a[200010], nenuliNadyasno[200010], ajjNadyasno[200010], wc, bc;
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    wc=a[n-1];
    bc=a[n-1];
    for(int i=n-2;i>=0;i--){
        nenuliNadyasno[i]=nenuliNadyasno[i+1];
        ajjNadyasno[i]=ajjNadyasno[i+1];
        if(a[i+1]>0) nenuliNadyasno[i]++;
        if(a[i+1]==i+1) ajjNadyasno[i]++;
        if(a[i]+ajjNadyasno[i]<wc) wc=a[i]+ajjNadyasno[i];
        if(a[i]+nenuliNadyasno[i]>bc) bc=a[i]+nenuliNadyasno[i];
    }
    cout<<bc<<"\n"<<wc<<"\n";
    return 0;
}
