#include <iostream>

using namespace std;

int main()
{
    int a, b, circles = 0;
    char d;
    cin >> a >> b >> d;
    if(d == '+')
        a = a + b;
    if(d == '-')
        a = a - b;
    if(d == '*')
        a = a * b;
    if(d == '/')
        a = a / b;
    while(a > 0)
    {
        b = a % 10;
        if(b == 0 || b == 6 || b == 9)
            circles++;
        if(b == 8)
        {
            ++circles;
            circles++;
        }
        a = a / 10;
    }
    cout << circles;
    return 0;
}
