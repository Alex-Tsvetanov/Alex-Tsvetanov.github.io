#include <iostream>
using namespace std;
int main()
{
    int a, b, k;
    char d, e;
    cin >> a >> d >> b >> e >> k;
    if(d=='A') {
        if(a<=k) {
            cout << a << endl;
        } else if(a>k) {
            cout << k << endl;
        }
    } else if(d=='B') {
        if(k-a>=0){
            cout << k-a << endl;
        } else {cout << "0" << endl;}
    }


    return 0;
}
