#include <iostream>

using namespace std;
int main(){
long long a, b, chislo, circles = 0;
char znak;
cin >> a >> b >> znak;
if (znak=='+') {
    chislo = a + b;
}
if (znak=='-') {
    chislo = a - b;
}
if (znak=='*') {
    chislo = a * b;
}
for (;chislo>0;chislo=(chislo-chislo%10)/10) {
    if (chislo % 10 == 8) {
        circles += 2;
    }
    if (chislo % 10 == 0 or chislo % 10 == 6 or chislo % 10 == 9) {
        circles++;
    }
}
cout << circles << endl;
return 0;
}

