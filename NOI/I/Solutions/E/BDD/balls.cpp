#include<iostream>
using namespace std;
int main (){
    long long k,broi1,broi2;
    char a,a2;
    cin>>broi1>>a>>broi2>>a2>>k;
    if(a=='A'){
        if(k<=broi1){
            cout<<k;
        }else{
            cout<<broi1;
        }
    }
    if(a=='B'){
        if(k<=broi1){
            cout<<0;
        }else{
            cout<<k-broi1;
        }
    }

return 0;
}
