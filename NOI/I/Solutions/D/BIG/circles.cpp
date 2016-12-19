#include<iostream>
using namespace std;
int main(){
char deistvie;
long long a,b,c=0,rez;
    cin>>a>>b;
    cin>>deistvie;
    if(deistvie=='+'){
        rez=a+b;
    }else if(deistvie=='-'){
        rez=a-b;
    }else{
        rez=a*b;
    }
    while(rez>0){
        if(rez%10==0 || rez%10==6 || rez%10==9){c++;}
        else if(rez%10==8){c+=2;}
        rez=rez/10;
    }
    cout<<c<<endl;
return 0;
}
