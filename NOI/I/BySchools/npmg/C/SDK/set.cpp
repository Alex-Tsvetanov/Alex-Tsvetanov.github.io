#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n], b[n], i, nm, ng=0;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]<nm){
            nm=a[i];
        }
        if(b[i]>ng){
            ng=b[i];
        }
    }
    cout<<1<<endl<<nm<<" "<<ng<<endl;
    return 0;
}
