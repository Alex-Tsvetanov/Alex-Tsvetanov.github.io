#include <iostream>

using namespace std;

int input[200005];

int main ()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> input[i];

    int res = 0;
    long long sum1 = 0, sum2 = 0;
    for (int i = -1, j = n; i < j;)
    {
        if (sum1 == sum2)
        {
            res = i + 1 + (n - j);
            ++i;
            --j;
            sum1 += input[i];
            sum2 += input[j];
        }
        else if (sum1 < sum2)
        {
            ++i;
            sum1 += input[i];
        }
        else if (sum1 > sum2)
        {
            --j;
            sum2 += input[j];
        }

        //cout << sum1 << ' ' << sum2 << ' ' << res << '\n';
    }

    cout << res << '\n';
    return 0;
}
