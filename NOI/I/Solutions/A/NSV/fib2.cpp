#include<iostream>
#include<cstring>
using namespace std;

unsigned long long pq(unsigned long long num, unsigned long long pow)
{
    if(pow == 0)
        return 1;
    if(pow % 2 == 0)
        return pq(num*num, pow/2);
    return num*pq(num*num, pow/2);
}

int main ()
{
    int p;
    unsigned long long n, a1 = 0, a2 = 0, curPow, a3;
    cin >> p >> n;
    char f1[100], f2[100];
    cin >> f1 >> f2;
    int len = strlen(f1);
    curPow = pq(p, len - 1);
    for(int i = 0; i < len; ++i, curPow/=p)
    {
        if(f1[i] >= '0' && f1[i] <= '9')
            a1 += (f1[i] - '0')*curPow;
        else if(f1[i] == 'A')
            a1 += 10*curPow;
        else if(f1[i] == 'B')
            a1 += 11*curPow;
        else if(f1[i] == 'C')
            a1 += 12*curPow;
        else if(f1[i] == 'D')
            a1 += 13*curPow;
        else if(f1[i] == 'E')
            a1 += 14*curPow;
        if(f1[i] == 'F')
            a1 += 15*curPow;
    }
    len = strlen(f2);
    curPow = pq(p, len - 1);
    for(int i = 0; i < len; ++i, curPow/=p)
    {
        if(f2[i] >= '0' && f2[i] <= '9')
            a2 += (f2[i] - '0')*curPow;
        else if(f2[i] == 'A')
            a2 += 10*curPow;
        else if(f2[i] == 'B')
            a2 += 11*curPow;
        else if(f2[i] == 'C')
            a2 += 12*curPow;
        else if(f2[i] == 'D')
            a2 += 13*curPow;
        else if(f2[i] == 'E')
            a2 += 14*curPow;
        if(f2[i] == 'F')
            a2 += 15*curPow;
    }

    for(int i = 0; i < n-2; ++i)
    {
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
    }
    a3 = (a3/p)%p;
    if(a3 <= 9)
        cout << a3 << endl;
    else if(a3 == 10)
        cout << "A" << endl;
    else if(a3 == 11)
        cout << "B" << endl;
    else if(a3 == 12)
        cout << "C" << endl;
    else if(a3 == 13 )
        cout << "D" << endl;
    else if(a3 == 14)
        cout << "E" << endl;
    else if(a3 == 15)
        cout << "F" << endl;
    return 0;
}
/*
13 11
1B A

13 10
1B A
*/
