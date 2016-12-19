#include <iostream>
using namespace std;
int main(){
long long n1, n2, k, izvA;
char q1, q2;
cin>>n1>>q1>>n2>>q2>>k;
if(q1=='A'){
    if(k>=n1){
        izvA=n1;
    }else{
        izvA=k;
    }
}else{
    if(k>n1){
        izvA=k-n1;
    }else{
        izvA=0;
    }
}
cout<<izvA<<endl;
return 0;
}
