#include<iostream>
using namespace std;
int main(){
    long long x , a , b , rezultat , y , y2;
    long long k=0 , ik;
    char znak;
    cin>>a;
    cin>>b;
    cin>>znak;
    if(znak=='+'){
        rezultat=a+b;
    }
    if(znak=='-'){
        rezultat=a-b;
    }
    if(znak=='*'){
        rezultat=a*b;
    }
    if(rezultat>=10){
        for(y=1000000000000000000 ; y>0 ; y=y/10){
            if(rezultat<y){
                x=y/10;
            }
        }
        //proverka za krug4eta:
        for(ik=1 ; ik<=x ; ik=ik*10){
            if(rezultat/ik-(rezultat/(ik*10)*10)==0 || rezultat/ik-(rezultat/(ik*10)*10)==6 || rezultat/ik-(rezultat/(ik*10)*10)==9){
                k=k+1;
            }
            if(rezultat/ik-(rezultat/(ik*10)*10)==8){
                k=k+2;
            }
        }
    }else{
        if(rezultat==0 || rezultat==6 || rezultat==9){
            k=1;
        }
        if(rezultat==8){
            k=2;
        }
    }
    cout<<rezultat<<"\n";
    cout<<k;
return 0;
}
