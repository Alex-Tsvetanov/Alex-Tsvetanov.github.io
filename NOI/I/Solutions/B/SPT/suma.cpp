#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
long long n, A[200004], nachalo, kraj, otg;
map<long long, long long> m;
int main(){
 cin.tie(NULL);
 ios::sync_with_stdio(false);
 cin>>n;
 cin>>A[1];
 nachalo=A[1];
 m[nachalo]=1;
 for(int i=2;i<=n;i++)
 {
     cin>>A[i];
     nachalo+=A[i];
     m[nachalo]=i;
 }
 for(int i=n;i>0;i--)
 {
     kraj+=A[i];
     if(m[kraj]!=0 && m[kraj]<i)
     {
         if(m[kraj]+ n-i+1>otg)
         {
            // cout<<m[kraj]<<" "<<n-i+1<<endl;
             otg=m[kraj]+ n-i+1;
         }
     }
 }
cout<<otg<<endl;

return 0;
}
