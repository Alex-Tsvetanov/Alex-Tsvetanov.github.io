#include<iostream>
using namespace std;
int main() {
    long long stepen=0,cifri=1,n,z,chislo[160000];
    chislo[0]=1;    string redica;
    cin>>redica;
    n=redica.length();
    while(n>0) {
        for(int a=0; a<cifri; a++) {
            z=chislo[a];
            z*=2;
            if(z>9) {
                z-=10;
                chislo[cifri]++;
                if(a==cifri-1) {
                    cifri++;
                }
            }
            chislo[a]=z;
        }
        n-=cifri;
        stepen++;
    }
    cout<<stepen;
    return 0;
}
