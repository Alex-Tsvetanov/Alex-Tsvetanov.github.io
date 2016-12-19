#include <iostream>

using namespace std;

int main()
{
    long long Nmb1, Nmb2, Nmb, answer = 0;
    char ch;

    cin >> Nmb1 >> Nmb2 >> ch;
    if (ch == '+') {
        Nmb = Nmb1 + Nmb2;
    } else if (ch == '-') {
        Nmb = Nmb1 - Nmb2;
    } else if (ch == '*') {
        Nmb = Nmb1 * Nmb2;
    }
    while (Nmb > 0) {
        if (Nmb % 10 == 6 || Nmb % 10 == 0 || Nmb % 10 == 9) {
            answer ++;
        } else if (Nmb % 10 == 8) {
            answer += 2;
        }
        Nmb /= 10;
    }
    cout << answer << endl;
    return 0;
}
