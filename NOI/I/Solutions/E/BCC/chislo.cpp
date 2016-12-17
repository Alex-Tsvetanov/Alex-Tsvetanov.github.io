#include<iostream>
using namespace std;
int main (){
long long a,b,razmestvach;
cin>>a>>b;
razmestvach=0;
if(a==6){
     a=a+3 ;
   }
   if(b==6){
    b=b+3;
   }
while(b>a){
    razmestvach=a;
    a=b;
    b=razmestvach;
}

cout<<a<<b;
return 0;
}

