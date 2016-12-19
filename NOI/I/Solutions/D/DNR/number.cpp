#include <iostream>

using namespace std;
int main () {
long long M, N, chisla = 0, i;
cin >> M >> N;
for (;M<=N;M++) {
    for (i=2;i*i<M;i++) {
        if (i*(i+1) == M) {
            chisla += 1;
        }
    }
}
cout << chisla << endl;
return 0;
}
