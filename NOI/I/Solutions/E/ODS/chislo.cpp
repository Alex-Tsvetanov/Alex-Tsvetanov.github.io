#include <iostream>
using namespace std;
int main () {
    long long a,b,naiGolqmoChislo,izhod,poMalkoChislo;
    cin>>a>>b;
    if (a==6) {
        a=9;
    }
    if (b==6) {
        b=9;
    }
    naiGolqmoChislo=a;
    poMalkoChislo=b;
    if (b>naiGolqmoChislo) {
        naiGolqmoChislo=b;
        poMalkoChislo=a;
    }
    izhod=10*naiGolqmoChislo+poMalkoChislo;
    cout<<izhod;
return 0;
}
