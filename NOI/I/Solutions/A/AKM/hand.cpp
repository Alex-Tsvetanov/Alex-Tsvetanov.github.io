///Program by Alves Marinov

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int r[n], maxf[n];
    int finmin = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }

    for (int i = 0; i < n; i++)
    {
        maxf[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (r[i] > i-1 && i > 0) finmin++;
        if (i > 0 && r[i] > 0)
        {
            for (int j = i; j > 0; j--)
            {
                maxf[j-1]++;
            }
            maxf[i] = maxf[i]+r[i];
        }

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            if (maxf[i] < maxf[j])
            {
                int s = maxf[i];
                maxf[i] = maxf[j];
                maxf[j] = s;
            }
        }

    }


    cout << maxf[0] << endl << finmin;


    return 0;
}
