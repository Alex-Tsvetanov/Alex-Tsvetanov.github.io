#include<iostream>
using namespace std;
int main()
{int f[2],e[2],i[2],d[2],brf=2017,bre=2017,bri=2017;
char a,b,c,t,h,s,n;
cin>>f[0]>>a>>f[1]>>b>>e[0]>>c>>e[1]>>t>>i[0]>>h>>i[1]>>s>>d[0]>>n>>d[1];
while((f[0]==e[0]&&i[0]==e[0])&&(f[1]==e[1]&&i[1]==e[1]))
f[0]=f[0]+23;
if(f[0]>28){
if(f[1]==12){ f[1]=1; f[0]=f[0]-31;brf++;}
else if(f[1]==2 ){ f[1]++; f[0]=f[0]-28;}
   else  if(f[1]==4||f[1]==6||f[1]==9||f[1]==11 ){ f[1]++; f[0]=f[0]-30;}
       else { f[1]++; f[0]=f[0]-31;}
}
 
 
e[0]=e[0]+28;
if(f[0]>28){
if(e[1]==12){ e[1]=1; e[0]=e[0]-31;bre++;}
 else if(e[1]==2 ){ e[1]++; e[0]=e[0]-28;}
   else  if(e[1]==4||e[1]==6||e[1]==9||e[1]==11 ){ e[1]++; e[0]=e[0]-30;}
      else { f[1]++; f[0]=f[0]-31;}
}

i[0]=i[0]+33;
if(i[0]>59){
 if(i[1]==12&&i[0]>62){bri++;i[1]=2;i[0]=i[0]-62;}
 else if(i[1]==11&&i[0]>61){i[1]=1;i[0]=i[0]-61;}
  else if(i[1]==7&&i[0]>62){i[1]=i[1]+2;i[0]=i[0]-62;}
   else if(i[1]==2) {i[1]=i[1]+2;i[0]=i[0]-59;} 
   else if(i[1]==2||i[0]>60) {i[1]=i[1]+2;i[0]=i[0]-60;} 
}}