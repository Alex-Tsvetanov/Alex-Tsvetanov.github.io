///Program by Alves Marinov

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n;
    do
    {
        cin >> n;
    } while (n < 0 || n > 100);

    int p1x, p1y, p2x, p2y;
    double slopes[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p1x >> p1y >> p2x >> p2y;

        if (p1x == p2x) slopes[i] = 90;
        else if (p1y == p2y) slopes[i] = 0;
        else if (p1y < p2y)
        {
            slopes[i] = (p2y - p1y) / sqrt(pow(p2x-p1x, 2) + pow(p2y-p1y, 2));
        }
        else if (p1y > p2y)
        {
            slopes[i] = - (p1y - p2y) / sqrt(pow(p2x-p1x, 2) + pow(p1y-p2y, 2));
        }
    }

    int different = n;

    for (int i = 0; i < n-1; i++)
    {
        if (slopes[i] != 100)
        {
            for (int j = i+1; j < n; j++)
            {
                if (slopes[i] == slopes[j])
                {
                    slopes[j] = 100;
                    different--;
                }
            }
        }
    }

    cout << different;

    return 0;
}
