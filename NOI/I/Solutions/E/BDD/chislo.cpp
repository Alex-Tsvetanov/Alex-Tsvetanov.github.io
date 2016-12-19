#include<iostream>
using namespace std;
int main (){
    long long vhod1,vhod2;
    cin>>vhod1>>vhod2;
    if(vhod1==1 && vhod2==6 || vhod1==6 && vhod2==1){
        cout<<91;
    }
    if(vhod1==1 && vhod2==8 || vhod1==8 && vhod2==1){
        cout<<81;
    }
    if(vhod1==1 && vhod2==9 || vhod1==9 && vhod2==1){
        cout<<91;
    }
    if(vhod1==6 && vhod2==8 || vhod1==8 && vhod2==6){
        cout<<98;
    }
    if(vhod1==6 && vhod2==9 || vhod1==9 && vhod2==6){
        cout<<99;
    }
    if(vhod1==8 && vhod2==9 || vhod1==9 && vhod2==8){
        cout<<98;
    }
return 0;
}
