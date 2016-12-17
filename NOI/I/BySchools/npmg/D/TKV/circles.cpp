#include <iostream>
#include <cstring>
using namespace std;
int main() {
long long a1[10000],b1[10000],i,rez[10000];
char a[10000],b[10000],c;
cin>>a;
cin>>b;
cin>>c;

for(i=0;i<strlen(a);i++){
if(a[i]==0){a1[i]=0;}
if(a[i]==1){a1[i]=1;}
if(a[i]==2){a1[i]=2;}
if(a[i]==3){a1[i]=3;}
if(a[i]==4){a1[i]=4;}
if(a[i]==5){a1[i]=5;}
if(a[i]==6){a1[i]=6;}
if(a[i]==7){a1[i]=7;}
if(a[i]==8){a1[i]=8;}
if(a[i]==9){a1[i]=9;}

if(b[i]==0){b1[i]=0;}
if(b[i]==1){b1[i]=1;}
if(b[i]==2){b1[i]=2;}
if(b[i]==3){b1[i]=3;}
if(b[i]==4){b1[i]=4;}
if(b[i]==5){b1[i]=5;}
if(b[i]==6){b1[i]=6;}
if(b[i]==7){b1[i]=7;}
if(b[i]==8){b1[i]=8;}
if(b[i]==9){b1[i]=9;}
}


for(i=0;i<strlen(a);i++){
    if(c=='+'){
    if((a1[i]+b1[i])<10){if(strlen(a1)<=10000){rez[i]=(a1[i]+b1[i])*10000;}
                       if(strlen(a1)<=1000){rez[i]=(a1[i]+b1[i])*1000;}
                       if(strlen(a1)<=100){rez[i]=(a1[i]+b1[i])*100;}
                       if(strlen(a1)<=10){rez[i]=(a1[i]+b1[i])*10;}
                       }}}




cout<<"3";
/*if(c=='+'){rez=a+b;}
if(c=='-'){rez=a-b;}
if(c=='*'){rez=a*b;}*/
return 0;
}
