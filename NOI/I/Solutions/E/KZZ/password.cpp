#include<iostream>
using namespace std;
int main (){
long long sbor1,sbor2;
char a1,b1,c1,d1,a2,b2,c2,d2;
cin>>a1>>b1>>c1>>d1;
cin>>a2>>b2>>c2>>d2;
if(a1>='a' && a1<='z'){
    a1=(a1+1)/97;
}
if(b1>='a' && b1<='z'){
    b1=(b1+1)/97;
}
if(c1>='a' && c1<='z'){
    c1=(c1+1)/97;
}
if(d1>='a' && d1<='z'){
    d1=d1+1;
}
if(a2>='a' && a2<='z'){
    a2=a2+1;
}
if(b2>='a' && b2<='z'){
    b2=b2+1;
}
if(c2>='a' && c2<='z'){
    c2=c2+1;
}
if(d2>='a' && d2<='z'){
    d2=d2+1;
}
if(a1>='A' && a1<='Z'){
    a1=(a1+1)*2;
}
if(b1>='A' && b1<='Z'){
    b1=(b1+1)*2;
}
if(c1>='A' && c1<='Z'){
    c1=(c1+1)*2;
}
if(d1>='A' && d1<='Z'){
    d1=(d1+1)*2;
}
if(a2>='A' && a2<='Z'){
    a1=(a1+1)*2;
}
if(b2>='A' && b2<='Z'){
    b2=(b2+1)*2;
}
if(c2>='A' && c2<='Z'){
    c2=(c2+1)*2;
}
if(d2>='A' && d2<='Z'){
    d2=(d2+1)*2;
}
sbor1=a1+b1+c1+d1;
sbor2=a2+b2+c2+d2;
if(sbor1>>sbor2){
    cout<<a1<<b1<<c1<<d1<<" "<<sbor1;
}else
if(sbor2>>sbor1){
    cout<<a2<<b2<<c2<<d2<<" "<<sbor2;
}else
if(sbor1==sbor2){
    cout<<"0";
}
return 0;
}
