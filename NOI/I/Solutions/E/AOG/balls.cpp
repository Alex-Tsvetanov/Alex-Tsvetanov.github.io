#include <iostream>
using namespace std;
 int main () {
     int a,b,k;
     char q,r;
     cin>>a>>q>>b>>r>>k;
     if(r=='A'){
        swap(a,b);
        if(b>=k){
        cout<<0;
        }
        else{

            if(b-k>=a){
            cout<<a;}

            else{
                cout<<k-b;
            }

        }
     }
   else{
    if(a>=k){
    cout<<k;
    }
    else{cout<<a;}
   }
 return 0;}
