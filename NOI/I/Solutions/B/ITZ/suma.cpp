#include<iostream>
#include<vector>
#include<set>

using namespace std;

typedef unsigned long long ull;

int main ()
{
    int n, b;
    int x, y;
    int maxNums = 0;
    ull fsum = 0;
    ull esum = 0;
    set<ull> sums;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        cin >> b;
        a.push_back(b);
        fsum+=b;
        sums.insert(fsum);
    }

    for(int i = n-1; i > -1; i--)
    {
        int sizeOfSet = sums.size();
        esum += a[i];
        sums.insert(esum);
        if(sizeOfSet == sums.size())
        {
            ull sum = 0;
            x = a.size() - i;
            for(int j = 0; j < n; j++)
            {
                sum += a[j];
                if(sum == esum) {y = j+1; break;}
            }
            if(x+y > a.size()) {cout << maxNums << endl; return 0;}
            if(x + y > maxNums) {maxNums = x+y;}
        }
    }
    fsum = 0;
    if(maxNums) cout << maxNums << endl;
    else cout << 0 << endl;
    return 0;
}
