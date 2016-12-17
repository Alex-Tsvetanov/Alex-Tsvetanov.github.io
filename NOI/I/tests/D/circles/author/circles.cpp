#include<iostream>
using namespace std;

int t[10]={1,0,0,0,0,0,1,0,2,1};

long long int a,b,c;
char op;

int main()
{
  cin >> a >> b >> op;
  if(op=='+') c=a+b;
  else if(op=='-') c=a-b;
  else if(op=='*') c=a*b;

  int br=0;

  if(c==0) br=1;

  while(c>0)
  {
    br = br + t[c%10];
    c=c/10;
  }

  cout << br << endl;

}
