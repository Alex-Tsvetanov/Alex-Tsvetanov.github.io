#include<iostream>
using namespace std;
int main(){
    char a,b;
    long n1,n2,k,rez;
    cin>>n1>>a>>n2>>b>>k;
    if(a=='A'){
        if(k>=n1){
                rez=n1;
        }else{
                rez=k;
        }
    }
    if(a=='B'){
            if(k>n1){
                    rez=k-n1;
            }else{
                    rez=0;
            }
    }
    cout<<rez<<endl;
return 0;
}
