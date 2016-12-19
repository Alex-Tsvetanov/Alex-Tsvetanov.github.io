#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long from, to, first = 0, last = 0, f1 = 0, f2 = 0, l1 = 0, l2 = 0, i;

    cin >> from >> to;
    for (i = from; i <= to; i ++) {
        f1 = pow(i, (double)1/2);
        f2 = f1 + 1;
        if (f1 * f2 == i) {
            first = i;
            break;
        } else {
            f1 = 0;
            f2 = 0;
        }
    }
    for (i = to; i >= from; i --) {
        l1 = pow(i, (double)1/2);
        l2 = l1 + 1;
        if (l1 * l2 == i) {
            last = i;
            break;
        } else {
            l1 = 0;
            l2 = 0;
        }
    }
    cout << l2 - f1 << endl;
    return 0;
}
