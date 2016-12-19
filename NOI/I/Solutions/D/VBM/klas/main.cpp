#include <iostream>

using namespace std;

int main()
{
    long long boys, girls, Nmb1 = 0, Nmb2 = 0, Sum = 0;

    cin >> boys >> girls;
    Sum = boys + girls;
    Nmb1 = (boys * (boys - 1)) / 2;
    Nmb2 = ((Sum * (Sum + 1)) / 2) - ((boys * (boys - 1)) / 2) - Sum;
    Nmb2 *= 2;
    cout << Nmb1 << " " << Nmb2 << endl;
    return 0;
}
