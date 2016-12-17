#include<iostream>
using namespace std;
int main(){

    long long krugli = 0, a = 0, b = 0, znak, c, cifra;
    cin>>a;
    cin>>b;
    cin>>znak;
    cifra = c;
    if(znak == '+'){
        c = a + b;
    }
    if(znak == '-'){
        c = a - b;
    }
    if(znak == '*'){
        c = a * b;
    }
    if(cifra == '0'){
        krugli = krugli + 1;
    }
    if(cifra == '6'){
        krugli = krugli + 1;
    }
    if(cifra == '8'){
        krugli = krugli + 2;
    }
    if(cifra == '9'){
        krugli = krugli + 1;
    }
    cout<<krugli;
    return 0;
}
