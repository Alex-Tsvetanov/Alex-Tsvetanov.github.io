#include <iostream>
using namespace std;
int prefix[200008], suffix[200008];
int main()
{
    int n, tmp;
    cin >> n >> tmp;
    prefix[0] = tmp;
    for(int i = 1; i < n; i ++)
    {
        cin >> tmp;
        prefix[i] = prefix[i-1]+tmp;
    }
    suffix[0] = prefix[n-1];
    for(int i = 1; i < n; i ++) suffix[i] = prefix[n-1]-prefix[i-1];
    int i = 0, j = n-1, ans = 0;
    while(i < j)
    {
        //cout << i << " " << j << " " << prefix[i] << " " << suffix[j] << endl;
        if(prefix[i] == suffix[j])
        {
            ans = max(ans, i + n - j + 1);
            if(prefix[i+1] < suffix[j-1]) i ++;
            else j --;
        }
        else if(prefix[i]<suffix[j]) i ++;
        else j --;
    }
    cout << ans << endl;
}
