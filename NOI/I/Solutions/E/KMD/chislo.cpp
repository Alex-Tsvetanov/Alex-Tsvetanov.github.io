#include <iostream>
using namespace std;
int main(){
long long edinici=0,desetici=0,a,b,chislo=0;
cin>>a>>b;
if(a==1 or b==1){
    if(a==1){
        edinici=1;
    }
    else{
        edinici=1;
    }
    if(a==1 and b==1){
        cout<<11<<endl;
        return 0;
    }
}
if(a==6 or b==6){
    if(a==6){
        desetici=9;
    }
    else{
        desetici=9;
    }
    if(a==6 and b==6){
        chislo=99;
        cout<<chislo<<endl;
        return 0;
    }
}
if(a==9 or b==9){
    if(a==9){
        if(desetici!=9){
            desetici=9;
        }
        else{
            edinici=9;
        }
    }
    else{
        if(desetici!=9){
            desetici=9;
        }
        else{
            edinici=9;
        }
    }
    if(a==9 and b==9){
        chislo=99;
        cout<<chislo<<endl;
        return 0;
    }
}
if(a==8 or b==8){
    if(desetici!=9){
        desetici=8;
    }
    else{
        edinici=8;
    }
    if(a==8 and b==8){
        chislo=88;
        cout<<chislo<<endl;
        return 0;
    }
}
chislo=desetici*10+edinici;
cout<<chislo<<"\n";
return 0;
}
