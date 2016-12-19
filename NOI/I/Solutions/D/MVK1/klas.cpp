#include<iostream>
using namespace std;
int main(){
long long zdravei1=0,zdravei2=0,zdravei3=0,zdraveiObshto=0,rakostiskane=0,momichetaPredi,momchetaPredi,momicheta,momcheta;
cin>>momcheta>>momicheta;
if(momcheta>1){
    rakostiskane=1*momcheta-1;
}
if(momcheta>0 && momicheta>0){
    zdravei1=momicheta*2;
}
if(momicheta>0){
    zdravei2=(momicheta)*(momicheta-1);
}
if(momicheta>0 && momcheta>1){
    zdravei3=momcheta*(momicheta-1);
}
zdraveiObshto=zdravei1+zdravei2+zdravei3;
cout<<rakostiskane<<" "<<zdraveiObshto;

return 0;
}
