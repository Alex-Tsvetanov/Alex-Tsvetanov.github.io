#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int> > ots, ans;
int n;
int main ()
{
    scanf("%d", &n);
    int from, to, maxEnd;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &from, &to);
        ots.push_back({from, to});
    }
    sort(ots.begin(), ots.end());

    from = ots[0].first;
    maxEnd = ots[0].second;


    for (int i = 1; i < n; i++)
    {
        if (ots[i].first <= maxEnd+1)
            maxEnd = max(maxEnd, ots[i].second);
        else
        {
            ans.push_back({from, maxEnd});
            from = ots[i].first;
            maxEnd = ots[i].second;
        }
    }
    ans.push_back({from, maxEnd});

    printf("%d\n", ans.size());
    for (int i = 0; i < ans.size(); i++)
        printf("%d %d\n", ans[i].first, ans[i].second);

    return 0;
}
/*
5
2 7
2 4
9 12
15 20
10 12

3
7 20
5 25
20 22
*/
