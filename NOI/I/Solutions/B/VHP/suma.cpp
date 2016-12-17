#include<iostream>
#include<algorithm>
using namespace std;
long long n,a[200005],S1=0,S2=0,bestRes=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        S1+=a[i];
        S2=0;
        for(int j=n;j>i;j--){
            S2+=a[j];
            if(S1==S2 && ( bestRes < (n-(j-i))+1 ) ){
                bestRes=(n-(j-i))+1;
            }
        }
    }
    cout<<bestRes<<endl;
    return 0;
}
