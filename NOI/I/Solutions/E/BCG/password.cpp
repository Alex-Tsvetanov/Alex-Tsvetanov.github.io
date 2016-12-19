#include <iostream>
using namespace std;

int main () {

long long b1, b2;

char p1[3];
cin >> p1[0] >> p1[1] >> p1[2] >> p1[3];
char p2[3];
cin >> p2[0] >> p2[1] >> p2[2] >> p2[3];

if (p1[0] > p2[0]) {b1++;}
else {b2++;}

if (p1[1] > p2[1]) {b1++;}
else {b2++;}

if (p1[2] > p2[2]) {b1++;}
else {b2++;}

if (p1[3] > p2[3]) {b1++;}
else {b2++;}

if (b1 > b2) {cout << p1[0] << p1[1] << p1[2] << p1[3] << endl;}
else {cout << p2[0] << p2[1] << p2[2] << p2[3] << endl;}

return 0;
}
