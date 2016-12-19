#include<iostream>
using namespace std;
inline int abs(int a) {
    return a < 0 ? -a: a;
}
inline bool btw(int a, int b, int c) {
    return (b <= a && a <= c) || (c <= a && a <= b);
}
inline int minr(int a, int b, int c, int d) {
    return min(min(abs(a - c), abs(a - d)), min(abs(b - c), abs(b - d)));
}
int main () {
    pair<int, int> a, b, c, d;
    cin >> a.first >> a.second >> b.first >> b.second;
    cin >> c.first >> c.second >> d.first >> d.second;

    int ans = 0;
    if(!(btw(a.first, c.first, d.first) || btw(b.first, c.first, d.first) || btw(c.first, a.first, b.first) || btw(d.first, a.first, b.first)))
        ans += minr(a.first, b.first, c.first, d.first);
    if(!(btw(a.second, c.second, d.second) || btw(b.second, c.second, d.second) || btw(c.second, a.second, b.second) || btw(d.second, a.second, b.second)))
        ans += minr(a.second, b.second, c.second, d.second);
    cout << ans;
}
/*
4 2 4 4
6 6 2 6
*/
/*
3 2 6 2
1 6 1 3
*/
