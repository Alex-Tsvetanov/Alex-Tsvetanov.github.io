#include <iostream>
using namespace std;

int main ()
{

long long M, N, obshto=0;
cin >> M >> N;
long long segchislo;
for (segchislo=1;segchislo*(segchislo+1)<=N;segchislo++)
    {if (segchislo*(segchislo+1)>=M and segchislo*(segchislo+1)<=N ){obshto=obshto+1; }}
cout << obshto;
return 0;
}


