#include<iostream>
using namespace std;
int main(){
long long a,b,c,d;
d=0;
char e,f;
cin>>a>>e>>b>>f>>c;
if(e=='A'){
   if(c>a){
         cout<<a;
   }else{
         d=a-c;
         cout<<a-d;
         }
}else{
   if(a<c){
         cout<<c-a;
   }else{
   cout<<0;
   }
}
return 0;
}
