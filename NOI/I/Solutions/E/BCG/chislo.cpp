#include <iostream>
using namespace std;

int main () {

long long k1, k2;
cin >> k1 >> k2;

if (k1 == 1) {
    if (k2 == 1) {cout << "11" << endl;}
    if (k2 == 6) {cout << "91" << endl;}
    if (k2 == 8) {cout << "81" << endl;}
    if (k2 == 9) {cout << "91" << endl;}
}

if (k1 == 6) {
    if (k2 == 1) {cout << "91" << endl;}
    if (k2 == 6) {cout << "99" << endl;}
    if (k2 == 8) {cout << "98" << endl;}
    if (k2 == 9) {cout << "99" << endl;}
}

if (k1 == 8) {
    if (k2 == 1) {cout << "81" << endl;}
    if (k2 == 6) {cout << "98" << endl;}
    if (k2 == 8) {cout << "88" << endl;}
    if (k2 == 9) {cout << "98" << endl;}
}

if (k1 == 9) {
    if (k2 == 1) {cout << "91" << endl;}
    if (k2 == 6) {cout << "99" << endl;}
    if (k2 == 8) {cout << "98" << endl;}
    if (k2 == 9) {cout << "99" << endl;}
}

return 0;
}
