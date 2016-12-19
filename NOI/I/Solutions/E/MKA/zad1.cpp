#include<iostream>
using namespace std;
int main (){
long long pet,shest,sedem,ostanalo;
char a,b;
cin>>pet>>a>>shest>>b>>sedem;
if(a=='a'){
  if(pet<=sedem){
    cout<<pet;
  }else{
    cout<<sedem;
  }
}
if(a=='b'){
  if(pet>=sedem){
    cout<<"0";
  }else{
    if(shest>=sedem-pet){
      cout<<sedem-pet;
    }else{
      cout<<shest;
    }
  }
}
return 0;
}
