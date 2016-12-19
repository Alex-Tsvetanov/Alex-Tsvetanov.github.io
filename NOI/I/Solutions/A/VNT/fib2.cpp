#include <iostream>
#include <string>
using namespace std;
string n, f1, f2;
int p, p2;
bool used[17*17+42][17*17+42];
int dig( char cc ) {
    if ( cc>='0' && cc<='9' ) { return cc-'0'; }
    else { return cc-'A'+10;}
}
int toInt ( string c ) {
    if ( c.size() == 1 ) { return dig(c[0]);}
    int res = 0;
    for (int i = c.size()-2 ; i < c.size() ; i ++ ) {
        res *= p;
        res += dig( c[i] );
    }
    return res;
}
int getMod ( string crr, int mod ) {
    int ret = 0;
    for ( int i = 0 ; i < crr.size() ; i ++ ) {
        ret *= 10;
        ret += dig( crr[i] );
        ret %= mod;
    }
    return ret;
}
int main () {
    cin >> p;
    p2 = p*p;
    cin >> n;
    cin >> f1 >> f2;
    int a = toInt(f1), b = toInt(f2);
    int aa = toInt(f1), bb = toInt(f2);

    int sz = 0;
    for ( ; 1 ; sz ++ ) {
        if ( used[a][b] ) { break; }
        used[a][b] = 1;
        //cout << sz+2 << ": " << b << "\n";
        int c = (b+a)%p2;
        a = b;
        b = c;
    }
//    cout << a << " " << b << " -> " << aa << " " << bb << "\n";
    int nn = getMod( n, sz );
    //cout << sz << " " << nn << "\n";
    nn --;
    if ( nn < 0 ) { nn += sz; }

    a = aa; b = bb;
    if ( nn == 0 ) {
        a /= p;
        if ( a  < 10 ) { cout << a << "\n"; }
        else { cout << (char)(a-10+'A') << "\n"; }
        return 0;
    }
    for (int i = 1 ; i < nn ; i ++ ) {
        int c = (b+a)%p2;
        a = b;
        b = c;
    }
    b /= p;
    if ( b  < 10 ) { cout << b << "\n"; }
    else { cout << (char)(b-10+'A') << "\n"; }

    return 0;
}
