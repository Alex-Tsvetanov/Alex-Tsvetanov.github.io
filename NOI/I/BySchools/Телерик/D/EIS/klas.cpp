#include<iostream>
using namespace std;
int main (){
long long m,n,brRukostiskaniq=0,BrZdravei=0;
cin>>n>>m;
    if(n!=0){
        brRukostiskaniq=(n-1)*n;
    }else{
        brRukostiskaniq=0;
    }
    BrZdravei=m*(m+n-1)+n*m;
    cout<<brRukostiskaniq<<" "<<BrZdravei<<endl;

return 0;
}
