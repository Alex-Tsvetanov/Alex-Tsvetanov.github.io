#include<iostream>
using namespace std;
int main(){
    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, i = 9, j = 10, k = 11, l = 12, m = 13, n = 14, o = 15, p = 16, q = 17, r = 18, s = 19, t = 20, u = 21, v = 22, w = 23, x = 24, y = 25, z = 26;
    int A = 1 * 2, B = 2 * 2, C = 3 * 2, D = 4 * 2, E = 5 * 2, F = 6 * 2, G = 7 * 2, H = 8 * 2, I = 9 * 2, J = 10 * 2, K = 11 * 2, L = 12 * 2, M = 13 * 2, N = 14 * 2, O = 15 * 2, P = 16 * 2, Q = 17 * 2, R = 18 * 2, S = 19 * 2, T = 20 * 2, U = 21 * 2, V = 22 * 2, W = 23 * 2, X = 24 *2, Y = 25 * 2, Z = 26 * 2;

    int nz1, nz2, nz3, nz4, az1, az2, az3, az4;
    char sz;
    cin >> sz;
    nz1 = sz - '0';
    cin >> sz;
    nz2 = sz - '0';
    cin >> sz;
    nz3 = sz - '0';
    cin >> sz;
    nz4 = sz - '0';
    cin >> sz;
    az1 = sz - '0';
    cin >> sz;
    az2 = sz - '0';
    cin >> sz;
    az3 = sz - '0';
    cin >> sz;
    az4 = sz - '0';



    int sb1, sb2;
    sb1 = nz1 + nz2 + nz3 + nz4;
    sb2 = az1 + az2 + az3 + az4;

    if (sb1 > sb2) {
        cout << nz1 << nz2 << nz3 << nz4;
        cout << " ";
        cout << sb1;
    }
    if (sb2 > sb1){
        cout << az1 << az2 << az3 << az4;
        cout << " ";
        cout << sb2;
    }
    if (sb1 = sb2){
        cout << "0";
    }
return 0;
}
