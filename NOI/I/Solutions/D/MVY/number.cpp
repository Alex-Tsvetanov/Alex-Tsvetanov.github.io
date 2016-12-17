#include<iostream>
using namespace std;
int main(){
long long vhod,vuvedeno;
cin>>vhod>>vuvedeno;
if(vhod%vuvedeno==0 or vuvedeno%vhod==0){
   cout<<vuvedeno/vhod;
}else{
cout<<0;
}


return 0;
}
