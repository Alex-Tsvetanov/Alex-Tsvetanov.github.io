#include<iostream>
using namespace std;
int main (){
long long n1,n2;
int k;
char a,b;
cin>>n1;
cout<<" ";
cin>>a;
cout<<endl;
cin>>n2;
cout<<" ";
cin>>b;
cout<<endl;
cin>>k;
if(1<=n1<=100 && 1<=n2<=100 && k<=n1+n2 && (a=='A' || a=='B') && (b=='B' || b=='A')){

if(k>=n1 && a=='A'){
    cout<<n1;
}else{
    if(k>=n1 && b=='A'){
    k=k-n1;
    cout<<k;
    }else{
    if(k<=n1 && b=='A'){
    cout<<"0";
}
    }
}
if(k>=n2 && b=='A'){
    cout<<n2;
}
}
if(k<n1 && a=='A'){
  k=n1-(n1-k);
  cout<<k;
}


return 0;
}
