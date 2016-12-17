#include <iostream>
using namespace std;

int main () {
    long long a, b, res, ans=0;
    char c;
    cin >> a >> b >> c;
    switch (c) {
    case '+': res = a+b; break;
    case '-': res = a-b; break;
    case '*': res = a*b;
    }
    if (res==0) {cout << 1 << endl; return 0;}
    while (res>0) {
        int d=res%10;
        res/=10;
        switch (d) {
        case 0: ans++; break;
        case 6: ans++; break;
        case 8: ans+=2; break;
        case 9: ans++; break;
        }
    }
    cout << ans << endl;
    return 0;
}
