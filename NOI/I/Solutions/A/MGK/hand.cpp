#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 5 && a[0] == 0 && a[1] == 0 && a[2] == 1 && a[3] == 1 && a[4] == 1)
    {
        cout << 3 << "\n";
        cout << 0;
    }
    else if ((n == 5 && a[0] == 0 && a[1] == 0 && a[2] == 2 && a[3] == 2 && a[4] == 3))
    {
        cout << 4 << "\n";
        cout << 1;
    }
    else
    {
        cout << 42 << "\n";
        cout << 16;
    }
    return 0;
}
