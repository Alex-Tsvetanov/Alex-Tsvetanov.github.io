#include <iostream>

using namespace std;

int main(){
    long long a,b,k;
    char A,B;
    cin>>a>>A>>b>>B>>k;
    if(A=='A'){
        if(k<=a){
            cout<<k<<endl;
        } else {
            cout<<a<<endl;
        }
    } else {
       if(k<=a){
           cout<<0<<endl;
       } else {
           cout<<k-a<<endl;
       }
    }
    return 0;
}
