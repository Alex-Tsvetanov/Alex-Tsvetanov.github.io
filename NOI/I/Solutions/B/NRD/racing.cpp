#include <iostream>

using namespace std;

int main() {
    int n, s1 = 0, s2 = 0, s3 = 0;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    if(n == 2) {
        if(a[1] <= a[2]) cout << a[1] << endl;
        if(a[2] < a[1]) cout << a[2] << endl;
        return 0;
    }
    if(n == 1) {
        cout << a[1] << endl;
        return 0;
    }
    for(int i = 3; i <= n; i ++) {
        if(i % 3 == 0) {
            s3 = s3 + a[i];
        }
        if((i-1) % 3 == 0) {
            s2 = s2 + a[i];
        }
        if((i-2) % 3 == 0) {
            s1 = s1 + a[i];
        }
    }
    s1 = s1 + a[1];
    s2 = s2 + a[2];
    if(s1 < s2 && s1 < s3) cout << s1 << endl;
    else {
        if(s2 < s3) cout << s2 << endl;
        if(s3 < s2) cout << s3 << endl;
    }
    return 0;
}
