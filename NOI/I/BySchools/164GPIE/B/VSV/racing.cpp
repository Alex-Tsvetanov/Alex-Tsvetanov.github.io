#include <iostream>
using namespace std;
int main(){
    bool one=false;
    int n,i,nmch,nmch2;
    cin>>n;
    int a[n],b[n/2+1];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    if(n==1){
        cout<<a[0];
    }
    else if(n==2){
        if(a[0]>a[1]){
            cout<<a[1];
        }
        else{
            cout<<a[0];
        }
    }
    else if(n==3){
            nmch2=a[0];
        for(i=1;i<3;++i){
            if(a[i]<nmch2){
                nmch2=a[i];
            }

    }
    cout<<nmch2;
    }
    else if(n==4){
            if(a[1]<(a[0]+a[3])){
                if(a[2]<a[1]){
                    cout<<a[2];
                }
                else{
                    cout<<a[1];
                }
            }
            else if(a[2]<(a[0]+a[3])){
                if(a[1]<a[2]){
                    cout<<a[1];
                }
                else{
                    cout<<a[2];
                }
            }
            else{
                cout<<a[0]+a[3];
            }
    }
    else{
    for(i=0;i<n;++i){
            if(i==n-3){
                break;
            }
           b[i]=a[i]+a[i+3];
    }
    nmch=b[0];
    for(i=1;i<n/2+1;++i){
        if(b[i]<nmch){
            nmch=b[i];
        }
    }
    cout<<nmch;
    }
    return 0;
}
