#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<queue>
#include<stack>
using namespace std;
long long n,kolko,redica[1024],otg=999999999999999;
long long mmiinn(long long a,long long b){
if(a>b){
    return b;
}
    return a;
}
int main(){
cin>>n;
ios::sync_with_stdio(false);
if(n>=3){
for(long long i=0;i<n;i++){
cin>>redica[i];
if(i>=3){
redica[i]=mmiinn(mmiinn(redica[i-1],redica[i-2]),redica[i-3])+redica[i];
if(i>=(n-3)){
otg=mmiinn(otg,redica[i]);
}
}
}
}else{
for(long long i=0;i<n;i++){
cin>>redica[i];
otg=mmiinn(otg,redica[i]);
}
}
cout<<otg<<"\n";
return 0;
}
