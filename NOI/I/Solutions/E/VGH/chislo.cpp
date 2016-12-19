#include<iostream>
using namespace std;
int main(){
long long a,b;
cin>>a;
cout<<" ";
cin>>b;
if((a==1 || a==6 || a==8 || a==9) && (b==1 || b==6 || b==8 || b==9)){
   if(a==6){
     a=9;
   }
   if(b==6){
      b=9;
   }
   if(b>a){
      swap(a,b);
   }
    cout<<a*10+b;
}
return 0;
}
