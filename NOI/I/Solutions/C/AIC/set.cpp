#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main ()
{
    cin.tie (nullptr);
    ios::sync_with_stdio (false);
    int n;
    cin >> n;
    vector < pair < int , int > > v;
    for (int i = 0 ; i < n ; i ++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort (v.begin (), v.end ());

    vector <pair <int, int> > ans;
    for (int i = 0 ; i < n ; i ++)
    {
        if (ans.empty())
        {
            ans.push_back (v [i]);
        }
        else if (ans.back().second >= v [i].first)
            ans [ans.size () - 1].second = max (ans [ans.size () - 1].second, v [i].second);
        else
            ans.push_back (v [i]);
    }

    cout << ans.size () << "\n";
    for (auto& x : ans)
        cout << x.first << " " << x.second << "\n";
}

