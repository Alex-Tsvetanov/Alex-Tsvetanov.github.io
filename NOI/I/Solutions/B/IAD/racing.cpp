#include <iostream>
#include <queue>
using namespace std;
int ans[1002];
vector<int> edges[1002];
int inp[1002];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ans[0] = 299999;
    inp[0] = 0;
    for(int i = 1; i <= n; i ++) cin >> inp[i];
    for(int i = 1; i <= n; i ++)
    {
        if(i < n) edges[i].push_back(i+1);
        if(i < n-1) edges[i].push_back(i+2);
        if(i < n-2) edges[i].push_back(i+3);
        if(i > n-3) edges[i].push_back(0);
    }





    priority_queue<pair<int, int> > dijkstra;
    pair<int, int> a, b, c;
    ans[1] = inp[1];
    ans[2] = inp[2];
    ans[3] = inp[3];
    a.first = -inp[1];
    b.first = -inp[2];
    c.first = -inp[3];
    a.second = 1;
    b.second = 2;
    c.second = 3;
    dijkstra.push(a);
    dijkstra.push(b);
    dijkstra.push(c);
    while(!dijkstra.empty())
    {
        int price = -dijkstra.top().first;
        int to = dijkstra.top().second;
        dijkstra.pop();
        if(price < ans[to] || ans[to] == 0 || to < 4)
        {
            ans[to] = price;
            for(int i = 0; i < edges[to].size(); i ++)
            {
                if(price+inp[edges[to][i]] < ans[edges[to][i]] || ans[edges[to][i]] == 0)
                {
                    pair<int, int> tmp;
                    tmp.first = -(price+inp[edges[to][i]]);
                    tmp.second = edges[to][i];
                    dijkstra.push(tmp);
                }
            }
        }
    }
    cout << ans[0] << endl;
}
