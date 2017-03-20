#include <iostream>
using namespace std;
int main()
{
int N,num[1000];
int i;
cin>>N;
for (i=0;i<N;i++) cin>>num[i];
int d=num[0];
for (i=1;i<N;i++) if (d<num[i]) d=num[i];
cout<<d+1;
}
