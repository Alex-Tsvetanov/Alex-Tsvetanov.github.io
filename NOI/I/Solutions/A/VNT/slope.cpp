#include <iostream>
#include <algorithm>
using namespace std;
int n;
pair < int , int > arr[128];
bool cmp ( pair < int, int > a, pair < int, int > b ) {
    return a.first*b.second < a.second*b.first;
}
bool eq ( pair < int, int > a, pair < int, int > b ) {
    return a.first*b.second == a.second*b.first;
}
int main () {
    cin >> n;
    for ( int i = 0 ; i < n ; i ++ ) {
        pair < int, int > a1, a2;
        cin >> a1.first >> a1.second;
        cin >> a2.first >> a2.second;
        if ( a1.first > a2.first || ( a1.first == a2.first && a1.second > a2.second ) ) {
            swap( a1, a2 );
        }
        arr[i] = make_pair( a2.first - a1.first, a2.second - a1.second );
    }
    sort( arr, arr+n, cmp );
    int ans = 0;
    for ( int i = 0 ; i < n ; ) {
        int j = i;
        for ( ; j < n && eq( arr[i], arr[j]) ; j ++ ) {}
        i = j;
        ans ++;
    }
    cout << ans << "\n";
    return 0;
}
/*
6
3 1 6 2
3 2 6 3
1 2 1 3
2 1 2 3
1 4 4 5
6 4 5 5
*/
