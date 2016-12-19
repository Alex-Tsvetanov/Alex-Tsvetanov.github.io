#include <iostream>
#include <algorithm>

using namespace std;

inline int manh (pair<int, int> a, pair <int, int> b)
{
    //cout << abs(a.first - b.first) << " + " << abs(a.second - b.second) << '\n';
    return (abs(a.first - b.first) + abs(a.second - b.second));
}

int main ()
{
    pair <int, int> a, b, x, y;
    cin  >> a.first >> a.second >> b.first >> b.second >> x.first >> x.second >> y.first >> y.second;

    if (a.first > b.first or a.second > b.second)
        swap (a, b);
    if (x.first > y.first or x.second > y.second)
        swap (x, y);

    //cout << a.first << ' ' << a.second << ' ' << b.first << ' ' << b.second << ' ' << x.first << ' ' << x.second << ' ' << y.first << ' ' << y.second << '\n';

    //presi4at se
    if ((a.first == b.first and x.second == y.second and x.first <= a.first and a.first <= y.first and a.second <= x.second and x.second <= b.second)
        or (a.second == b.second and x.first == y.first and x.second <= a.second and a.second <= y.second and a.first <= x.first and x.first <= b.first))
    {
        //cout << "presi4at se\n";
        cout << "0\n";
        return 0;
    }


    //1
    if ((a.first == b.first and x.first == y.first and (a.second > y.second or b.second < x.second))
          or (a.second == b.second and x.second == y.second and (a.first > y.first or b.first < x.first)))
    {
        cout << min (min (manh(x, a), manh (x, b)), std::min (manh(y, a), manh (y, b))) << '\n';
        return 0;
    }

    //2
    if (a.first == b.first)
    {
        if (x.first == y.first)
        {
                if ((a.second <= x.second and y.second <= b.second) or (x.second <= a.second and b.second <= y.second))
            {
                cout << min (abs (x.first - a.first), abs (y.first - a.first)) << '\n';
                return 0;
            }
            if ((a.second <= x.second and x.second <= b.second) or (a.second <= y.second and y.second <= b.second)
                or (x.second <= a.second and a.second <= y.second) or (x.second <= b.second and b.second <= y.second))
            {
                        cout << min (abs (x.first - a.first), abs (y.first - a.first)) << '\n';
                        return 0;
            }
        }
        else if (a.second <= x.second and x.second <= b.second)
        {
            cout << min (abs (x.first - a.first), abs (y.first - a.first)) << '\n';
            return 0;
        }
    }
    if (x.first == y.first)
    {
        if (a.first == b.first)
        {
                if ((x.second <= a.second and b.second <= y.second) or (a.second <= x.second and y.second <= b.second))
            {
                cout << min (abs (a.first - x.first), abs (b.first - x.first)) << '\n';
                return 0;
            }
            if ((x.second <= a.second and a.second <= y.second) or (x.second <= b.second and b.second <= y.second)
                or (a.second <= x.second and x.second <= b.second) or (a.second <= y.second and y.second <= b.second))
            {
                        cout << min (abs (a.first - x.first), abs (b.first - x.first)) << '\n';
                        return 0;
            }
        }
        else if (x.second <= a.second and a.second <= y.second)
        {
            cout << min (abs (a.first - x.first), abs (b.first - x.first)) << '\n';
            return 0;
        }
    }

    //3
    if (a.second == b.second)
    {
        if (x.second == y.second)
        {
                if ((a.first <= x.first and y.first <= b.first) or (x.first <= a.first and b.first <= y.first))
            {
                cout << min (abs (x.second - a.second), abs (y.second - a.second)) << '\n';
                return 0;
            }
            if ((a.first <= x.first and x.first <= b.first) or (a.first <= y.first and y.first <= b.first)
                or (x.first <= a.first and a.first <= y.first) or (x.first <= b.first and b.first <= y.first))
            {
                        cout << min (abs (x.second - a.second), abs (y.second - a.second)) << '\n';
                        return 0;
            }
        }
        else if (a.first <= x.first and x.first <= b.first)
        {
            cout << min (abs (x.second - a.second), abs (y.second - a.second)) << '\n';
            return 0;
        }
    }
    if (x.second == y.second)
    {
        if (a.second == b.second)
        {
                if ((x.first <= a.first and b.first <= y.first) or (a.first <= x.first and y.first <= b.first))
            {
                cout << min (abs (a.second - x.second), abs (b.second - x.second)) << '\n';
                return 0;
            }
            if ((x.first <= a.first and a.first <= y.first) or (x.first <= b.first and b.first <= y.first)
                or (a.first <= x.first and x.first <= b.first) or (a.first <= y.first and y.first <= b.first))
            {
                        cout << min (abs (a.second - x.second), abs (b.second - x.second)) << '\n';
                        return 0;
            }
        }
        else if (x.first <= a.first and a.first <= y.first)
        {
            cout << min (abs (a.second - x.second), abs (b.second - x.second)) << '\n';
            return 0;
        }
    }

    //4
    cout << min (min (manh(x, a), manh (x, b)), std::min (manh(y, a), manh (y, b))) << '\n';

    return 0;
}
