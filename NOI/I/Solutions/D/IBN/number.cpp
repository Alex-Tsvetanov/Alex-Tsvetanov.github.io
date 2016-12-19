#include<iostream>
#include<cmath>

using namespace std;

int main() {
    long long start, finish;
    cin >> start >> finish;
    long long koren = sqrt(start);
    long long dolna, gorna;
    if (koren*koren+koren >= start) {
        dolna = koren;
    }else{
        dolna = koren+1;
    }
    koren = sqrt(finish);
    if (koren*koren+koren <= finish) {
        gorna = koren;
    }else{
        gorna = koren-1;
    }
    long long broi;
    broi = gorna-dolna+1;
    if (broi < 0) {
        broi = 0;
    }
    cout << broi << "\n";
    return 0;
}
