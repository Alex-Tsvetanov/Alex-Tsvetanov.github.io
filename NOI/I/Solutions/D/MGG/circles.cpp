#include <iostream>
using namespace std;
int main () {
    char znak;
    int a, b, chislo, nuli = 0;
    cin >> a >> b >> znak;
    if (znak == '+') {
        chislo = a + b;
    }
    if (znak == '-') {
        chislo = a - b;
    }
    if (znak == '*') {
        chislo = a * b;
    }
    for (int x = 10; x <= chislo * 10;) {
        if (chislo % x / (x / 10) == 0 || chislo % x / (x / 10) == 6 || chislo % x / (x / 10) == 9) {
            ++nuli;
        }
        if (chislo % x / (x / 10) == 8) {
            nuli = nuli + 2;
        }
        x = x * 10;
    }
    cout << nuli;

    return 0;
}
