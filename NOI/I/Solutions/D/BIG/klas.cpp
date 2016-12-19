#include<iostream>
using namespace std;
int main(){
    long long n,m,rk=0,z=0,i;
    cin>>n>>m;
    rk=(n*(n-1))/2;
    z=m*(m-1+n)+n*m;
    cout<<rk<<" "<<z<<endl;
return 0;
}
