#include<iostream>
using namespace std;
int main(){
long long xb,zb,v;
char x,z;
cin>>xb>>x;
cin>>zb>>z;
cin>>v;
if(x=='A'){
    if(v<=xb){
        cout<<v;
    }else{
        cout<<xb;
    }
}else{
    if(v<=xb){
        cout<<"0";
    }else{
        if(zb==0){
            cout<<0;
        }else{
            zb=v-xb;
            cout<<zb;
        }
    }
}
return 0;
}
