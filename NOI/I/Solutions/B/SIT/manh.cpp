#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int chisla[4];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    bool usp=0,edn_x=0,edn_n=0;
int x1,x2,y1,y2,n1,n2,m1,m2;
int ko1,ko2,a,b,c,d;
int mal1,mal2;
cin>>x1>>y1>>x2>>y2;
cin>>n1>>m1>>n2>>m2;
int otg=0;
if(x1==x2){
    edn_x=true;
    ko1=x1;
}else{
ko2=y1;
}
if(n1==n2){
    edn_n=true;
    ko1=n1;
}else{
ko2=m1;
}
if(edn_x==true and edn_n==true or edn_x==false and edn_n==false){
    usp=true;
}
if(usp==false){
  if(edn_x==true){
    a=ko2-y1;
    b=ko2-y2;

    if(fabs(a)<fabs(b)){
    mal1=a;
    }else{
    mal1=b;
    }
    if(a<0 and b<0 or a>0 and b>0){
        otg+=fabs(mal1);
    }
     a=ko1-n1;
    b=ko1-n2;

    if(fabs(a)<fabs(b)){
    mal2=a;
    }else{
    mal2=b;
    }
    if(a<0 and b<0 or a>0 and b>0){
        otg+=fabs(mal2);
    }
  }else{

    a=ko1-x1;
    b=ko1-x2;

    if(fabs(a)<fabs(b)){
    mal1=a;
    }else{
    mal1=b;
    }
    if(a<0 and b<0 or a>0 and b>0){
        otg+=fabs(mal1);
    }
     a=ko2-m1;
    b=ko2-m2;

    if(fabs(a)<fabs(b)){
    mal2=a;
    }else{
    mal2=b;
    }
    if(a<0 and b<0 or a>0 and b>0){
        otg+=fabs(mal2);
    }
  }
}else{
if(edn_x==true){

    otg+=fabs(x1-n1);
a=m1-y1;
b=m1-y2;
c=m2-y1;
d=m2-y2;

if(a<0 and b<0 or a>0 and b>0 ){
        if(c<0 and d<0 or c>0 and d>0){
    a=fabs(a);
    b=fabs(b);
    c=fabs(c);
    d=fabs(d);
    chisla[0]=a;
    chisla[1]=b;
    chisla[2]=c;
    chisla[3]=d;
    sort(chisla,chisla+4);
    otg+=chisla[0];
        }
}
}else{
    otg+=fabs(y1-m1);
a=n1-x1;
b=n1-x2;
c=n2-x1;
d=n2-x2;
if(a<0 and b<0 or a>0 and b>0 ){
        if(c<0 and d<0 or c>0 and d>0){
    a=fabs(a);
    b=fabs(b);
    c=fabs(c);
    d=fabs(d);
    chisla[0]=a;
    chisla[1]=b;
    chisla[2]=c;
    chisla[3]=d;
    sort(chisla,chisla+4);
    otg+=chisla[0];
        }
}
}
}
cout<<otg<<"\n";
return 0;
}
