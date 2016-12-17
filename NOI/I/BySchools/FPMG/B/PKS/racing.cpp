#include <iostream>
using namespace std;

int main () {
int n, otg = 0;
cin >> n;
int punktove[n];
for (int i = 0; i < n; i++) {
    cin >> punktove[i];
}
for (int k = 0; k < n; k++) {
    if ( punktove[k] + punktove[k+3] < punktove[k+1] + punktove[k+4]) {
        otg = punktove[k] + punktove[k+3];
    } else {
        otg = punktove[k+1] + punktove[k+4];
    }
}
cout << otg << endl;
return 0;
}
