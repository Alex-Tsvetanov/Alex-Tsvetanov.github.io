///Program by Alves Marinov

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

long long stepen (int a, int b)
{
    long long c = 1;
    for (int i = 0; i < b; i++)
    {
        c = c * a;
    }
    return c;

}

int main ()
{
    int p;
    long long n;

    cin >> p >> n;

    char f1[10000], f2[10000];
    cin >> f1;
    cin >> f2;

    long long a1 = 0, a2 = 0;

    for (int i = 0; i < strlen(f1); i++)
    {
        switch (f1[i])
        {
            case '1': a1 = a1 + stepen(p,strlen(f1)-1-i) * 1; break;
            case '2': a1 = a1 + stepen(p,strlen(f1)-1-i) * 2; break;
            case '3': a1 = a1 + stepen(p,strlen(f1)-1-i) * 3; break;
            case '4': a1 = a1 + stepen(p,strlen(f1)-1-i) * 4; break;
            case '5': a1 = a1 + stepen(p,strlen(f1)-1-i) * 5; break;
            case '6': a1 = a1 + stepen(p,strlen(f1)-1-i) * 6; break;
            case '7': a1 = a1 + stepen(p,strlen(f1)-1-i) * 7; break;
            case '8': a1 = a1 + stepen(p,strlen(f1)-1-i) * 8; break;
            case '9': a1 = a1 + stepen(p,strlen(f1)-1-i) * 9; break;
            case 'A': a1 = a1 + stepen(p,strlen(f1)-1-i) * 10; break;
            case 'B': a1 = a1 + stepen(p,strlen(f1)-1-i) * 11; break;
            case 'C': a1 = a1 + stepen(p,strlen(f1)-1-i) * 12; break;
            case 'D': a1 = a1 + stepen(p,strlen(f1)-1-i) * 13; break;
            case 'E': a1 = a1 + stepen(p,strlen(f1)-1-i) * 14; break;
            case 'F': a1 = a1 + stepen(p,strlen(f1)-1-i) * 15; break;
            case '0': a1 = a1 + 0;
        }
    }


    for (int i = 0; i < strlen(f2); i++)
    {
        switch (f2[i])
        {
            case '1': a2 = a2 + stepen(p,strlen(f2)-1-i) * 1; break;
            case '2': a2 = a2 + stepen(p,strlen(f2)-1-i) * 2; break;
            case '3': a2 = a2 + stepen(p,strlen(f2)-1-i) * 3; break;
            case '4': a2 = a2 + stepen(p,strlen(f2)-1-i) * 4; break;
            case '5': a2 = a2 + stepen(p,strlen(f2)-1-i) * 5; break;
            case '6': a2 = a2 + stepen(p,strlen(f2)-1-i) * 6; break;
            case '7': a2 = a2 + stepen(p,strlen(f2)-1-i) * 7; break;
            case '8': a2 = a2 + stepen(p,strlen(f2)-1-i) * 8; break;
            case '9': a2 = a2 + stepen(p,strlen(f2)-1-i) * 9; break;
            case 'A': a2 = a2 + stepen(p,strlen(f2)-1-i) * 10; break;
            case 'B': a2 = a2 + stepen(p,strlen(f2)-1-i) * 11; break;
            case 'C': a2 = a2 + stepen(p,strlen(f2)-1-i) * 12; break;
            case 'D': a2 = a2 + stepen(p,strlen(f2)-1-i) * 13; break;
            case 'E': a2 = a2 + stepen(p,strlen(f2)-1-i) * 14; break;
            case 'F': a2 = a2 + stepen(p,strlen(f2)-1-i) * 15; break;
            case '0': a2 = a2 + 0;
        }
    }





    long long fib = 0;

    for (int i = 2; i < n; i++)
    {
        fib = a1 + a2;
        a1 = a2;
        a2 = fib;
    }

    int stln = 0;

    for (int i = 3; i > 0; i--)
    {
        if (i==1) stln = fib / stepen(p,i);
        if ((fib/stepen(p,i)) > 1)
        fib = fib - (int(fib/stepen(p,i))*stepen(p,i));


    }

    switch(stln)
    {
        case 0: cout << "0"; break;
        case 1: cout << "1"; break;
        case 2: cout << "2"; break;
        case 3: cout << "3"; break;
        case 4: cout << "4"; break;
        case 5: cout << "5"; break;
        case 6: cout << "6"; break;
        case 7: cout << "7"; break;
        case 8: cout << "8"; break;
        case 9: cout << "9"; break;
        case 10: cout << "A"; break;
        case 11: cout << "B"; break;
        case 12: cout << "C"; break;
        case 13: cout << "D"; break;
        case 14: cout << "E"; break;
        case 15: cout << "F"; break;
    }

    return 0;
}
