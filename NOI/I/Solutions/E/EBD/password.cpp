#include<iostream>
using namespace std;
int main()
{char a1,a2,a3,a4,b1,b2,b3,b4;
int sum1=0,sum2=0;
cin>>a1>>a2>>a3>>a4>>b1>>b2>>b3>>b4;
if(a1>='a' and a1<='z'){sum1=sum1+a1-96;}
else if(a1>='A' and a1<='Z'){sum1=sum1+(a1-64)*2;}
else if(a1>='0' and a1<='9'){sum1=sum1+a1-48;}
if(a2>='a' and a2<='z'){sum1=sum1+a2-96;}
else if(a2>='A' and a2<='Z'){sum1=sum1+(a2-64)*2;}
else if(a2>='0' and a2<='9'){sum1=sum1+a2-48;}
if(a3>='a' and a3<='z'){sum1=sum1+a3-96;}
else if(a3>='A' and a3<='Z'){sum1=sum1+(a3-64)*2;}
else if(a3>='0' and a3<='9'){sum1=sum1+a3-48;}
if(a4>='a' and a4<='z'){sum1=sum1+a4-96;}
else if(a4>='A' and a4<='Z'){sum1=sum1+(a4-64)*2;}
else if(a4>='0' and a4<='9'){sum1=sum1+a4-48;}
if(b1>='a' and b1<='z'){sum2=sum2+b1-96;}
else if(b1>='A' and b1<='Z'){sum2=sum2+(b1-64)*2;}
else if(b1>='0' and b1<='9'){sum2=sum2+b1-48;}
if(b2>='a' and b2<='z'){sum2=sum2+b2-96;}
else if(b2>='A' and b2<='Z'){sum2=sum2+(b2-64)*2;}
else if(b2>='0' and b2<='9'){sum2=sum2+b2-48;}
if(b3>='a' and b3<='z'){sum2=sum2+b3-96;}
else if(b3>='A' and b3<='Z'){sum2=sum2+(b3-64)*2;}
else if(b3>='0' and b3<='9'){sum2=sum2+b3-48;}
if(b4>='a' and b4<='z'){sum2=sum2+b4-96;}
else if(b4>='A' and b4<='Z'){sum2=sum2+(b4-64)*2;}
else if(b4>='0' and b4<='9'){sum2=sum2+b4-48;}
if(sum1>sum2){cout<<a1<<a2<<a3<<a4<<" "<<sum1<<endl;}
else if(sum1<sum2){cout<<b1<<b2<<b3<<b4<<" "<<sum2<<endl;}
else if(sum1==sum2)cout<<"0"<<endl;
return 0;
}

