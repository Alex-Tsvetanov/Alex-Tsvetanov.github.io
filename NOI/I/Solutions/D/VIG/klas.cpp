#include<iostream>
using namespace std;

unsigned long long factorial(int chislo){
    if(chislo<=0)return 0;
    int ret=1;
    while(chislo>1){
        ret*=chislo;
        --chislo;
    }
    return ret;
}

int main(){
    int n, m;
    unsigned long long zdr=0, zdrvsvn=0;
    cin >> m >> n;
    zdr=n*(n-1)+n*m*2;
    zdrvsvn=m*(m-1)/2;
    cout << zdrvsvn << " " << zdr << endl;
    return 0;;
}
