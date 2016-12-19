#include <iostream>
#include <cmath>

using namespace std;

bool used[100];

int main()
{
    int n;
    cin >> n;

    int points[n][4];

    int res = 0;
    int br = 0;

    bool same1 = false;
    bool same2 = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> points[i][j];
        }
    }

    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            used[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            if (!used[i])
            {
                for (int j = i+1; j < n; j++)
                {
                    if (!used[j])
                    {
                        if (points[i][0] == points[i][2])
                        {
                            if (points[j][0] == points[j][2])
                            {
                                used[j] = 1;
                                if (!same1)
                                {
                                    res++;
                                    same1 = true;
                                }
                            }
                        }
                        else if ((points[i][0] == points[j][0] && points[i][2] == points[j][2] && abs(points[i][1] - points[i][3]) == abs(points[j][1] - points[j][3]))
                        || (abs(points[i][0] - points[j][0]) == abs(points[i][2] - points[j][2]) && abs(points[i][1] - points[j][1]) == abs(points[i][3] - points[j][3])))
                        {
                                used[j] = 1;
                                if (!same2)
                                {
                                    res++;
                                    same2 = true;
                                }
                        }
                        else
                        {
                            res++;
                            used[j] = 1;
                        }
                    }
                    used[i] = 1;
                }
            }
        }

        cout << res - 1;
    }

    return 0;
}
