#include<iostream>
#include<cstring>
using namespace std;


int main() {

    long long a,b,chislo;
    char znak;
    cin >> a >> b >> znak;
    long long krug4eta=0;

    if(znak=='+'){
        chislo=a+b;
    }
    if(znak=='-'){
        chislo=a-b;
    }
    if(znak=='*'){
        chislo=a*b;
    }

    for(;chislo>0;chislo/=10){
        if(chislo%10==0 or chislo%10==6 or chislo%10==9){
            krug4eta++;
        }
        if(chislo%10==8){
            krug4eta+=2;
        }
    }

    cout << krug4eta << endl;

    return 0;
}
