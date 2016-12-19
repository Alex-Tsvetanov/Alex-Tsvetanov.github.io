#include<iostream>
using namespace std;
int main(){
    char parola1,parola2,parola3,parola4;
    long long sum1=0,sum2=0;
    cin>>parola1>>parola2>>parola3>>parola4;
    if(parola1<='9' && parola1>='0'){
        sum1=sum1+(parola1-'0');
    }
    if(parola1<='z' && parola1>='a'){
        sum1=sum1+(parola1-'a')+1;
    }
    if(parola1<='Z' && parola1>='A'){
        sum1=sum1+(parola1-'A'+1)*2;
    }
    if(parola2<='9' && parola2>='0'){
        sum1=sum1+(parola2-'0');
    }
    if(parola2<='z' && parola2>='a'){
        sum1=sum1+(parola2-'a')+1;
    }
    if(parola2<='Z' && parola2>='A'){
        sum1=sum1+(parola2-'A'+1)*2;
    }
    if(parola3<='9' && parola3>='0'){
        sum1=sum1+(parola3-'0');
    }
    if(parola3<='z' && parola3>='a'){
        sum1=sum1+(parola3-'a')+1;
    }
    if(parola3<='Z' && parola3>='A'){
        sum1=sum1+(parola3-'A'+1)*2;
    }
    if(parola4<='9' && parola4>='0'){
        sum1=sum1+(parola4-'0');
    }
    if(parola4<='z' && parola4>='a'){
        sum1=sum1+(parola4-'a')+1;
    }
    if(parola4<='Z' && parola4>='A'){
        sum1=sum1+(parola4-'A'+1)*2;
    }
    char pass1,pass2,pass3,pass4;
    cin>>pass1>>pass2>>pass3>>pass4;
    if(pass1<='9' && pass1>='0'){
        sum2=sum2+(pass1-'0');
    }
    if(pass1<='z' && pass1>='a'){
        sum2=sum2+(pass1-'a')+1;
    }
    if(pass1<='Z' && pass1>='A'){
        sum2=sum2+(pass1-'A'+1)*2;
    }
    if(pass2<='9' && pass2>='0'){
        sum2=sum2+(pass2-'0');
    }
    if(pass2<='z' && pass2>='a'){
        sum2=sum2+(pass2-'a')+1;
    }
    if(pass2<='Z' && pass2>='A'){
        sum2=sum2+(pass2-'A'+1)*2;
    }
    if(pass3<='9' && pass3>='0'){
        sum2=sum2+(pass3-'0');
    }
    if(pass3<='z' && pass3>='a'){
        sum2=sum2+(pass3-'a')+1;
    }
    if(pass3<='Z' && pass3>='A'){
        sum2=sum2+(pass3-'A'+1)*2;
    }
    if(pass4<='9' && pass4>='0'){
        sum2=sum2+(pass4-'0');
    }
    if(pass4<='z' && pass4>='a'){
        sum2=sum2+(pass4-'a')+1;
    }
    if(pass4<='Z' && pass4>='A'){
        sum2=sum2+(pass4-'A'+1)*2;
    }
    if(sum1==sum2){
        cout<<"0";
    }
    if(sum1>sum2){
        cout<<parola1<<parola2<<parola3<<parola4<<" "<<sum1;
    }
    if(sum1<sum2){
        cout<<pass1<<pass2<<pass3<<pass4<<" "<<sum2;
    }
    cout<<"\n";
return 0;
}
