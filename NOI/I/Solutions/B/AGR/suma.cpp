#include<iostream>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    unsigned int p[n] = {0}, sp[n] = {0};
    for(int _ = 0; _ < n; _ ++) {
        cin >> p[_];
    }
    int i = 0, j = n - 1;
    int m = 0;
    sp[0] = p[0];
    sp[n - 1] = p[n - 1];
    while(i < j) {
        if(sp[i] == 0) sp[i] = sp[i - 1] + p[i];
        if(sp[j] == 0) sp[j] = sp[j + 1] + p[j];

        if(sp[i] == sp[j]) {
            //cout << i << " " << j << endl;
            m = i + n - j + 1;
            i ++;
            j --;
        } else if (sp[i] < sp[j]) {
            i ++;
        } else {
            j --;
        }
    }
    cout << m;
}
/*
9
1 1 2 3 10 9 9 6 1
*/
