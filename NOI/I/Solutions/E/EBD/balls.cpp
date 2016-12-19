#include<iostream>
using namespace std;
int main()
{
int n1,n2,k;
char ab1,ab2;
cin>>n1>>ab1>>n2>>ab2>>k;
if (ab1=='A')
if(k<=n1){cout<<k<<endl;}
else {cout<<n1<<endl;}
else if(k<=n1){cout<<"0"<<endl;}
else {cout<<k-n1<<endl;}
return 0;
}
