#include <iostream>
using namespace std;

int main () {
    long long a, b, circles=0, qst, digits=0, digI, i, j, z;
    char znak;
    cin >> a >> b >> znak;

    if (znak=='+') {qst=a+b;}
    if (znak=='-') {qst=a-b;}
    if (znak=='*') {qst=a*b;}
    if (qst==0) {cout << 1 << endl;}
    else {
        for (i=1;qst>=i;i*=10) {digits++;}
        for (i=0,j=10;i<digits;i++,j*=10) {
            z=j/10;
            digI=(qst%j)/z;
            switch (digI) {
                case 0:circles++;break;
                case 6:circles++;break;
                case 8:circles+=2;break;
                case 9:circles++;break;
            }
        }

        cout << circles << endl;
    }
    return 0;
}
