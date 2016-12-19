#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

long long pooow (long long a, long long b)
{
    if (b == 0)
        return 1;
    else return a*pooow(a, b-1);
}

long long digit_10 (char a)
{
    if (a <= '9' && a >= '1')
        return a - '1' + 1;

    if (a == '0')
        return 0;

    if (a == 'A')
        return 10;

    if (a == 'B')
        return 11;

    if (a == 'C')
        return 12;

    if (a == 'D')
        return 13;

    if (a == 'E')
        return 14;

    if (a == 'F')
        return 15;
}

char digit_16 (long long a)
{
    char num;

    if (a <= 9 && a >= 1)
        num = a + '1' - 1;

    if (a == 0)
        num = '0';

    if (a == 10)
        num = 'A';

    if (a == 11)
        num = 'B';

    if (a == 12)
        num = 'C';

    if (a == 13)
        num = 'D';

    if (a == 14)
        num = 'E';

    if (a == 15)
        num = 'F';

    return num;
}

long long convert_10 (string num, long long sys)
{
    long long sum = 0;

    for (long long i = 0; i < num.size(); i++)
        sum += digit_10(num[num.size()-1-i])*pooow(sys, i);

    return sum;
}

string convert_to (long long num, long long sys)
{
    string sum = "000";

    long long n100 = 0, n10 = 0, n1 = 0;

    while (num - pooow(sys, 2) >= 0)
    {
        num -= pooow(sys, 2);
        n100++;
    }

    while (num - pooow(sys, 1) >= 0)
    {
        num -= pooow(sys, 1);
        n10++;
    }

    while (num - pooow(sys, 0) >= 0)
    {
        num -= pooow(sys, 0);
        n1++;
    }

    sum[0] = digit_16(n100);
    sum[1] = digit_16(n10);
    sum[2] = digit_16(n1);

    return sum;
}

int main ()
{
    long long nCountSystem = 0;
    cin >> nCountSystem;

    long long nTarget = 0;
    cin >> nTarget;

    string strFib1, strFib2;
    cin >> strFib1 >> strFib2;

    strFib1 = strFib1;
    strFib2 = strFib2;

    long long nFib1_10, nFib2_10;

    nFib1_10 = convert_10(strFib1, nCountSystem);
    nFib2_10 = convert_10(strFib2, nCountSystem);

    for (long long i = 0; i < nTarget - 2; i++)
    {
        nFib1_10 += nFib2_10;
        swap (nFib1_10, nFib2_10);
    }

    strFib2 = convert_to(nFib2_10, nCountSystem);

    cout << strFib2[1];
    cout << endl;

    return 0;
}
