#include <iostream>
using namespace std;

int main () {
    long long m, n, y, z, num=0;
    cin >> m >> n;

    for (y=0,z=1;y*z<=n;y++,z++){
        if (m<=y*z) {num++;}
    }

    cout << num << endl;
    return 0;
}
