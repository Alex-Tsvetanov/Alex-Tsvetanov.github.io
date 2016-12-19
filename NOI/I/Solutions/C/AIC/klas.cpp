#include <iostream>
#include <sstream>
#define int uint64_t

using namespace std;

int32_t main ()
{
    cin.tie (nullptr);
    ios::sync_with_stdio (false);

    int32_t x;
    cin >> x;
    int ind = 0;

    stringstream ss;

    for (int a = 1 ; ; a ++)
    {
        if (2 * a - 1 > x)
            break;
        if (a * a == x)
        {
            ind ++;
            ss << a * a << " " << 0 << "\n";
        }
        /**
        int from = 0, to = a;
        while (to - from > 1)
        {
            int mid = (from + to) / 2;
            if (mid * mid == a * a - x)
            {
                ind ++;
                ss << a * a << " " << mid * mid << "\n";
                break;
            }
            else if (mid * mid > a * a - x)
            {
                to = mid;
            }
            else if (mid * mid < a * a - x)
            {
                from = mid;
            }
        }*/
        ///**
        for (int b = a - 1 ; b > 0 ; b --)
        {
            if (a * a - b * b == x)
            {
                ind ++;
                ss << a * a << " " << b * b << "\n";
            }
            if (a * a - b * b > x)
                break;
        }//*/
    }
    cout << ind << "\n" << ss.str ();
}

