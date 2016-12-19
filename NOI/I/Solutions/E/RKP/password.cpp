#include<iostream>
using namespace std;
int main(){
char a,b,c,d,e,f,g,h;
long long i,j,k,l,m,n,o,p;
cin>>a>>b>>c>>d;
cin>>e>>f>>g>>h;
if(a>=97 and a<=122){
      i=a-96;
}else if(a>=65 and a<=90){
      i=(a-64)*2;
}else if(a>=48 and a<=57){
      i=a-48;
}
if(b>=97 and b<=122){
      j=b-96;
}else if(b>=65 and b<=90){
      j=(b-64)*2;
}else if(b>=48 and b<=57){
      j=b-48;
}if(c>=97 and c<=122){
      k=c-96;
}else if(c>=65 and c<=90){
      k=(c-64)*2;
}else if(c>=48 and c<=57){
      k=c-48;
}if(d>=97 and d<=122){
      l=d-96;
}else if(d>=65 and d<=90){
      l=(d-64)*2;
}else if(d>=48 and d<=57){
      l=d-48;
}if(e>=97 and e<=122){
      m=e-96;
}else if(e>=65 and e<=90){
      m=(e-64)*2;
}else if(e>=48 and e<=57){
      m=e-48;
}if(f>=97 and f<=122){
      n=f-96;
}else if(f>=65 and f<=90){
      n=(f-64)*2;
}else if(f>=48 and f<=57){
      n=f-48;
}if(g>=97 and g<=122){
      o=g-96;
}else if(g>=65 and g<=90){
      o=(g-64)*2;
}else if(g>=48 and g<=57){
      o=g-48;
}if(h>=97 and h<=122){
      p=h-96;
}else if(h>=65 and h<=90){
      p=(h-64)*2;
}else if(h>=48 and h<=57){
      p=h-48;
}
if(i+j+k+l>m+n+o+p){
         cout<<a<<b<<c<<d<<" "<<i+j+k+l;
}
if(i+j+k+l<m+n+o+p){
         cout<<e<<f<<g<<h<<" "<<m+n+o+p;
}
if(i+j+k+l==m+n+o+p){
         cout<<0;
}
return 0;
}
