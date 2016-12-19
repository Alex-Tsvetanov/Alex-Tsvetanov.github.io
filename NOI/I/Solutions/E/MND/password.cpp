#include<iostream>
using namespace std;
int main() {
char a1,b1,c1,d1;
int a2,b2,c2,d2,rezult1;
cin>>a1>>b1>>c1>>d1;
char f1,g1,h1,i1;
int f2,g2,h2,i2,rezult2;
cin>>f1>>g1>>h1>>i1;
a2=int(a1);
b2=int(b1);
c2=int(c1);
d2=int(d1);
f2=int(f1);
g2=int(g1);
h2=int(h1);
i2=int(i1);
if(a1<='Z' && a1>='A'){
a2=a2-64;
a2=a2*2;
}
if(b1<='Z' && b1>='A'){
b2=b2-64;
b2=b2*2;
}
if(c1<='Z' && c1>='A'){
c2=c2-64;
c2=c2*2;
}
if(d1<='Z' && d1>='A'){
d2=d2-64;
d2=d2*2;
}
if(a1<='z' && a1>='a'){
a2=a2-96;
}
if(b1<='z' && b1>='a'){
b2=b2-96;
}
if(c1<='z' && c1>='a'){
c2=c2-96;
}
if(d1<='z' && d1>='a'){
d2=d2-96;
}
if(a1<='9' && a1>='0'){
a2=a2-48;
}
if(b1<='9' && b1>='0'){
b2=b2-48;
}
if(c1<='9' && c1>='0'){
c2=c2-48;
}
if(d1<='9' && d1>='0'){
d2=d2-48;
}
rezult1=a2+b2+c2+d2;

if(f1<='Z' && f1>='A'){
f2=f2-64;
f2=f2*2;
}
if(g1<='Z' && g1>='A'){
g2=g2-64;
g2=g2*2;
}
if(h1<='Z' && h1>='A'){
h2=h2-64;
h2=h2*2;
}
if(i1<='Z' && i1>='A'){
i2=i2-64;
i2=i2*2;
}
if(f1<='z' && f1>='a'){
f2=f2-96;
}
if(g1<='z' && g1>='a'){
g2=g2-96;
}
if(h1<='z' && h1>='a'){
h2=h2-96;
}
if(i1<='z' && i1>='a'){
i2=i2-96;
}
if(f1<='9' && f1>='0'){
f2=f2-48;
}
if(g1<='9' && g1>='0'){
g2=g2-48;
}
if(h1<='9' && h1>='0'){
h2=h2-48;
}
if(i1<='9' && i1>='0'){
i2=i2-48;
}
rezult2=f2+g2+h2+i2;

if(rezult1>rezult2){
    cout<<a1<<b1<<c1<<d1<<" "<<rezult1;
}
if(rezult2>rezult1){
    cout<<f1<<g1<<h1<<i1<<" "<<rezult2;
}
if(rezult1==rezult2){
    cout<<"0";
}
return 0;
}
