#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char n[20000];
    cin>>n;
    long long i, d=strlen(n), m=0, f=0, o, rk=0, zdr=0, brm=0, brf=0;
    for(i=0;i<d;i++){
        if(n[i]=='-'){
            m++;
        }
        if(n[i]=='+'){
            f++;
        }
    }
    o=f+m;
    for(i=m-1;i>0;i--){
        rk+=i;
    }
    for(i=0;i<d;i++){
        if(n[i]=='-'){
            brm++;
            zdr+=brf*2;
        }
        if(n[i]=='+'){
            brf++;
            zdr+=brf+brm;
        }
    }
    cout<<rk<<" "<<zdr-1<<endl;
    return 0;
}
