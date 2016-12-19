#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int mp[n], p[n];
    for(int i = 0; i < n; i ++) {
        cin >> p[i];
        if(i < 3)  mp[i] = p[i];
        else mp[i] = p[i] + min(min(mp[i - 3], mp[i - 2]), mp[i - 1]);
    }
    if(n == 1)  cout << p[0];
    else if (n == 2)    cout << min(p[0], p[1]);
    else cout << min(min(mp[n - 3], mp[n - 2]), mp[n - 1]);
}

/*
7
3 4 10 15 12 2 8
*/
