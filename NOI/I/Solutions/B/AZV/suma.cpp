#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<queue>
#include<stack>
using namespace std;
long long n,redica[200007],s1,s2,b1=0,b2,re6=0;
bool imalire6enie=0;
int main(){
ios::sync_with_stdio(false);
cin>>n;
b2=n-1;
for(long long i=0;i<n;i++){
cin>>redica[i];
}
s1=redica[0];
s2=redica[n-1];
while(b1<b2){
if(s1<s2){
b1++;
s1+=redica[b1];
}else{
if(s1>s2){
b2=b2-1;
s2+=redica[b2];
}else{
imalire6enie=1;
//cout<<b1<<" "<<b2<<"\n";
re6=b1+n-b2+1;
b1++;
s1+=redica[b1];
}
}
}
if(imalire6enie==1){
cout<<re6<<"\n";
}else{
cout<<0<<"\n";
}
return 0;
}
