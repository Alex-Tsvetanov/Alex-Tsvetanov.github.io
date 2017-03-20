#include<iostream>
using namespace std;
int main(){
int d[5]={0,0,0,0,0},m[5]={0,0,0,0,0};
char a[10];
bool p=0;
cin>> a;
for(int i=0;a[0]!='/0';i++)
{
    if(a[0]=='/'){
        p=1;
    }
    if(p==0 ){
           d[0]*=10;
      d[0]=d[0] + a[i]-48;
    }
    if(p==1 and a[0]!='/'){
        m[0]*=10;
        m[0]=m[0]+a[i]-48;
    }
}
p=0;
cin>> a;
for(int i=0;a[0]!='/0';i++)
{
    if(a[1]=='/'){
        p=1;
    }
    if(p==0 ){
           d[1]*=10;
      d[1]=d[1] + a[i]-48;
    }
    if(p==1 and a[0]!='/'){
        m[1]*=10;
        m[1]=m[1]+a[i]-48;
    }
}
p=0;
cin>> a;
for(int i=0;a[0]!='/0';i++)
{
    if(a[2]=='/'){
        p=1;
    }
    if(p==0 ){
           d[2]*=10;
      d[2]=d[2] + a[i]-48;
    }
    if(p==1 and a[0]!='/'){
        m[2]*=10;
        m[2]=m[2]+a[i]-48;
    }
}
p=0;
cin>> a;
for(int i=0;a[0]!='/0';i++)
{
    if(a[3]=='/'){
        p=1;
    }
    if(p==0 ){
           d[3]*=10;
      d[3]=d[3] + a[i]-48;
    }
    if(p==1 and a[0]!='/'){
        m[3]*=10;
        m[3]=m[3]+a[i]-48;
    }
}
cout<<"21252";
}
