#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long M, N, count_exit = 0, countit, num, checker;
    cin >> M >> N;
    countit = N - M + 1;
    num = M;
    while (countit > 0)
    {
        checker = sqrt(num);
        if (checker * (checker + 1) == num)
        {
            count_exit++;
        }
        countit--;
        num++;
    }
    cout << count_exit;
}
