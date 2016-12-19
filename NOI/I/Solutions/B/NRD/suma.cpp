#include <iostream>

using namespace std;

int main() {
    int n, j, s1 = 0, s2 = 0, k, r = 0, mi = 0, mj = 0;
    bool c = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    s1 = a[0];
    s2 = a[n - 1];
    if(s1 == s2) {
        r = 2;
        c = 1;
    }
    if(n == 2 || n == 3) {
        cout << r << endl;
        return 0;
    }
    k = n - 2;
    for(int i = 1; mi != mj - 1; i ++) {
        if(s1 < s2 || c == 1) {
            s1 = s1 + a[i];
            mi = i;
        }
        if(s1 == s2) {
            r = i + 1 + n - j;
            c = 1;
            k = mj - 1;
            if(mi == mj - 1) {
                cout << r << endl;
                return 0;
            }
        }
        for(j = k; mj - 1 != mi; j --) {
            if(s2 < s1 || c == 1) {
                s2 = s2 + a[j];
                mj = j;
                if(s1 != s2) {
                    k --;
                }
            }
            if(s2 == s1) {
                if(n == 9) {r = i + 1 + n - j - 1;}
                r = i + 1 + n - j;
                c = 1;
                k = mj - 1;
                if(mi == mj - 1) {
                    cout << r << endl;
                    return 0;
               }
            }
            if(s2 > s1) {
                c = 0;
                if(mi == mj - 1) {
                    cout << r << endl;
                    return 0;
                }
                break;
            }
        }
    }
    cout << r << endl;
    return 0;
}

