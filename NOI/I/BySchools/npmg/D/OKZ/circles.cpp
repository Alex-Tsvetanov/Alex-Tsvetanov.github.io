#include <iostream>
using namespace std;

int main(){
long long a,b,sbor=0,c,broi=0;
char ch;
cin>>a>>b;
cin>>ch;

if(ch=='+'){
    sbor=a+b;
}
if(ch=='-'){
    sbor=a-b;
}
if(ch=='*'){
    sbor=a*b;
}
while(true){

    c=sbor/10;
    sbor=sbor%10;
    if(c==0 || c==6 || c==9){
        broi++;
    }
    if(c==8){
        broi=broi+2;
    }

if(sbor<10){
      if(sbor==0 || sbor==6 || sbor==9){
        broi++;
    }
    if(sbor==8){
        broi=broi+2;
    }
    break;
}
}
cout<<broi<<endl;


 return 0;
}
