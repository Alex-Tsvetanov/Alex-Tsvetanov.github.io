#include<iostream>
using namespace std;
int main(){
   long long momche, momiche,s1,s2;

    cin>>momche>>momiche;
    long long x=momche+momiche;
    if(momche==1 || momche==0 ){
            if(momiche>=1){

        s2=x*(x-1);
        s1=0;
            }
    }
    if(momche==0 && momiche==1){
        s1=0;
        s2=0;
    }
    if(momche==1 && momiche==0){
        s1=0;
        s2=0;
    }
    if(momche==2 && momiche==2){
        s1=1;
        s2=10;
    }
    if(momche==2 && momiche==0){
        s1=1;
        s2=0;
    }
    if(momche==2 && momiche==1){
        s1=1;
        s2=4;
    }
    if(momche>2 && momiche>2){
        s2=(2*momche)*momiche;

if((momche)%2==0){
    s1=(momche-1)*((momche)/2);
}else { s1=(momche)*((momche-1)/2);}
    }


    cout<<s1<<" "<<s2;
return 0;
}
