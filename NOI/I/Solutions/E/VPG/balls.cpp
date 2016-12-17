#include <iostream>
using namespace std;
int main ()
{
    long long n1, n2, ans, a, b, k, p;
    char ch;
    cin >> n1 >> ch;
    if (ch=='A') {a=n1;p=0;}
    else {b=n1;p=1;}
    cin >> n2 >> ch;
    if (ch=='A') a=n2;
    else b=n2;
    cin >> k;
    if (p==1) {
        ans=k-b;
        if (ans<0) ans=0;
    } else {
        if (k<a) ans=k;
        else ans=a;
    }
    cout << ans << endl;
    return 0;
}
