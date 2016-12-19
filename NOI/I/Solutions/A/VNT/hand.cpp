#include <iostream>
using namespace std;
int n, a[200042];
int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> a[i];
    }
    int cNot0 = 0, cI = 0;
    for ( int i = n-1 ; i >= 0 ; i -- ) {
        if ( a[i] ) { cNot0 ++; }
        if ( a[i] == i ) { cI ++ ; }
    }
    int maxx = 0, minn = 1<<29;
    for ( int i = 0 ; i < n ; i ++ ) {
        if ( a[i] ) { cNot0 --; }
        if ( a[i] == i ) { cI --; }
        maxx = max ( maxx, a[i] + cNot0 );
        minn = min ( minn, a[i] + cI );
    }
    cout << maxx << "\n" << minn << "\n";
    return 0;
}
