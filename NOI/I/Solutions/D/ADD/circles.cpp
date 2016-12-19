#include <iostream>
using namespace std;
int main(){
    char znak;
    int a,b,result,broi=0,nresult;
    cin>>a;
    cin>>b;
    cin>>znak;
    if(znak==42){
    result=a*b;
    nresult=result;
    }
    if(znak==45){
    result=a-b;
    nresult=result;
    }
    if(znak==43){
    result=a+b;
    nresult=result;
    }

        for(long long i=0;i<10;i++){
         long long x;
            x=result%10;
            result=result-x;
            result=result/10;
            if(x==0 || x==6 || x==9){
                broi++;
                x=10;

            }
            if(x==8){
                broi=broi+2;
                x=10 ;
            }
            if(result==0){
                break;
            }
        }

    cout<<broi;
    return 0;
    ///+_43;-_45;*_42;
}
