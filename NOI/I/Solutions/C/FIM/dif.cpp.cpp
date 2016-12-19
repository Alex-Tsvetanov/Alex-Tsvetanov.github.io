#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x, i=0;
    cin >> x;
    for (long long a=1; a<x+x/2+1; a++)
    {
        for(long long b=0; b<a; b++)
        {
            if ((a-b)*(a+b)==x)
            {
                i++;
            }
        }
        if (a==x+x/2)
            {
                cout << i << endl;
            }
    }
    for (long long a=1; a<x+x/2+1; a++)
    {
        for(long long b=0; b<a; b++)
        {
            if ((a-b)*(a+b)==x)
            {
                cout << a*a << " " << b*b << endl;
            }
        }
    }
}
