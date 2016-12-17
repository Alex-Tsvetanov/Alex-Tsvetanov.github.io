#include <iostream>
using namespace std;

int main ()
{
    long long delitel1,delitel2,i;
    cin >> delitel1 >> delitel2;
    i=delitel2/delitel1;
    if (delitel1*i==delitel2)
    {
        cout << delitel2/delitel1 << endl;
    }

    else
    {
        cout << 0;
    }

    return 0;
}
