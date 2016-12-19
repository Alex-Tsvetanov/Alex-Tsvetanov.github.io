#include<iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(a==1 or a==8){a=a;}
if(b==1 or b==8){b=b;}
if (a==6){a=9;}
else if (a==9){a=6;}
if (b==6){b=9;}
else if (b==9){b=6;}
if (a<=b){cout<<b<<a<<endl;}
else{cout<<a<<b<<endl;}

return 0;
}
