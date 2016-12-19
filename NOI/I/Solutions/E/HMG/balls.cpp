#include<iostream>
using namespace std;
int main(){
long long n1,n2,k,topki;
char a,a1;
cin>>n1>>a;
cin>>n2>>a1;
cin>>k;
if(a=='A' and a1=='B'){
    if(k>=n1){
        topki=n1;
    }else{
        topki=k;
    }
}else{
    if(a=='B' and a1=='A'){
        if(k>=n1){
        topki=k-n1;
    }else{
        topki=0;
    }

    }
}
cout<<topki;
return 0;
}
