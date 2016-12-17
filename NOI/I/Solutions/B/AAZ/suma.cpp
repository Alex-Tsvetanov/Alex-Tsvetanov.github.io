#include<iostream>
using namespace std;
int main(){
    int a[200001],n,br=0,s1,s2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        s1 = 0;
        s2 = 0;
        for(int k=0;k<i;k++){
            s1 = s1 + a[k];
            for(int j=k;j<n;j++){
                s2 = s2 + a[j];
            }
            if(s1==s2){
                br++;
            }
        }

    }
    cout<<br<<"\n";
    return 0;
}
