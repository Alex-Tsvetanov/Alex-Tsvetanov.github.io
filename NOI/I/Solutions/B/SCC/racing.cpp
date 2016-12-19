#include <iostream>

using namespace std;

pair <pair <int, int>, pair <int, int> > dp[1005];

int main ()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int curr;
        cin >> curr;
        int minn = dp[i - 1].first.first;
        if (i - dp[i - 1].second.second <= 3 and dp[i - 1].second.first < minn)
        {
            minn = dp[i - 1].second.first;
        }
        for (int j = 2; j <= 3 and i - j >= 0; ++j)
        {
            if (i - dp[i - j].first.second <= 3 and dp[i - j].first.first < minn)
            {
                minn = dp[i - j].first.first;
            }
            if (i - dp[i - j].second.second <= 3 and dp[i - j].second.first < minn)
            {
                minn = dp[i - j].second.first;
            }
        }
        dp[i].first.first = minn + curr;
        dp[i].first.second = i;

        minn = dp[i - 1].first.first;
        int idx = dp[i - 1].first.second;
        if (i - dp[i - 1].second.second <= 2 and dp[i - 1].second.first < minn)
        {
            minn = dp[i - 1].second.first;
            idx = dp[i - 1].second.second;
        }
        if (i - dp[i - 2].first.second <= 2 and dp[i - 2].first.first < minn)
        {
            minn = dp[i - 2].first.first;
            idx = dp[i - 2].first.second;
        }
        if (i - dp[i - 2].second.second <= 2 and dp[i - 2].second.first < minn)
        {
            minn = dp[i - 2].second.first;
            idx = dp[i - 2].second.second;
        }
        dp[i].second.first = minn;
        dp[i].second.second = idx;
    }

    /*for (int i = 0; i <= n; ++i)
        cout << '(' << dp[i].first.first << ';' << dp[i].first.second << ") ";
    cout << '\n';
    for (int i = 0; i <= n; ++i)
        cout << '(' << dp[i].second.first << ';' << dp[i].second.second << ") ";
    cout << '\n';*/

    cout << min (dp[n].first.first, dp[n].second.first) << '\n';

    return 0;
}
