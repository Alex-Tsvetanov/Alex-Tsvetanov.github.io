#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int n, k = 0, x1, y1, x2, y2;
    double curr, slope[100];
    bool new_, vert = false;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 > x2)
        {
            swap(x1, x2);
            swap(y1, y2);
        }
        if(x1 == x2)
        {
            vert = true;
            continue;
        }
        curr = (y2-y1)/(x2-x1);
        new_ = true;
        for(int j = 0; j < k; ++j)
            if(curr == slope[j])
            {
                new_ = false;
                break;
            }
        if(new_)
            slope[k++] = curr;
    }
    cout << k + vert << endl;
    return 0;
}
/*
6
3 1 6 2
3 2 6 3
1 2 1 3
2 1 2 3
1 4 4 5
6 4 5 5

7
3 1 6 2
3 2 6 3
1 2 1 3
2 1 2 3
1 4 4 5
6 4 5 5
0 4 2 6
*/
