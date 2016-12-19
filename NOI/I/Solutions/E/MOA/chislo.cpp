#include <iostream>
using namespace std;
int main()
{
    int a, b, d=6, e=9;
    cin >> a >> b;
    if(a==6) {
        a=9;
    } else if(b==6) {
        b=9;}
    if(a>=b) {
        cout << (a*10)+b << endl;
    } else {cout << (b*10)+a << endl;}

    return 0;
}
