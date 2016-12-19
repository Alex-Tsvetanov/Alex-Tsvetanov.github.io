#include<iostream>

using namespace std;

int main() {
    long long a, b;
    char sign;
    cin >> a >> b;
    cin >> sign;
    long long sbor;
    if (sign == '+') {
        sbor = a+b;
    }else{
        if (sign == '-') {
            sbor = a-b;
        }else{
            sbor = a*b;
        }
    }
    long long krugcheta = 0;
    long long cifra;
    while (sbor != 0) {
        cifra = sbor%10;
        if (cifra == 0 || cifra == 6 || cifra == 9) {
            krugcheta++;
        }else{
            if (cifra == 8) {
                krugcheta += 2;
            }
        }
        sbor /= 10;
    }
    cout << krugcheta << "\n";
    return 0;
}
