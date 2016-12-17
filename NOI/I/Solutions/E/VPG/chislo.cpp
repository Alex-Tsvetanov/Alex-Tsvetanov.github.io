#include <iostream>
using namespace std;
int main ()
{
    long long a, b;
    cin >> a;
    if (a==6) a=9;
    cin >> b;
    if (b==6) b=9;
    if (a>b) cout << a << b << endl;
    else cout << b << a << endl;
    return 0;
}
