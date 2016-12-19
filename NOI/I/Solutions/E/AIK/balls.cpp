#include <iostream>
using namespace std;
int main(){
    long long broi1,broi2,broiA,broiB,broik,vzetiA;
    char b1,b2;
    cin>>broi1>>b1>>broi2>>b2>>broik;
    if(b1=='A'){
        broiA=broi1;
        broiB=broi2;
        if(broik<=broiA){
                vzetiA=broik;
        }else{
            vzetiA=broiA;
        }
    }else{
         broiA=broi2;
         broiB=broi1;
         if(broik<=broiB){
            vzetiA=0;
         }else{
            vzetiA=broik-broiB;
         }
    }
    cout<<vzetiA;
    return 0;
}
