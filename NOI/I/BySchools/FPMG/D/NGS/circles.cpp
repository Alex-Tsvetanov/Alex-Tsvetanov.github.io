#include <iostream>
using namespace std;

int main ()
{
    long long a, b, num, digits[18], i = 18, counter = 0;
    char symbol;
    cin >> a >> b >> symbol;
    if (symbol == '+')
    {
        num = a + b;
    }
    if (symbol == '-')
    {
        num = a - b;
    }
    if (symbol == '*')
    {
        num = a * b;
    }
    for (int x = 18; x > 0; x--)
    {
        digits[i] = num % 10;
        switch (digits[i])
        {
        case 0:
            counter++;
            break;
        case 6:
            counter++;
            break;
        case 8:
            counter = counter + 2;
            break;
        case 9:
            counter++;
            break;
        }
        if (num < 10)
        {
            x = 0;
        }
        if (num > 9)
        {
            num = num / 10;
        }
        i--;
    }
    cout << counter;
    return 0;
}
