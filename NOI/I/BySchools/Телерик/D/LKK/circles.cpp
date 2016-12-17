#include <iostream>
using namespace std;

int main ()
{
    long long a,b,rezultat,segcifra,krygcheta=0;
    char znak;
    cin >> a >> b >> znak;
    if (znak=='+') {rezultat=a+b;}
else {if (znak=='-'){rezultat=a-b;}else {rezultat=a*b;} }
if (rezultat==0) {cout <<"1";} else {
while (rezultat>0) {segcifra=rezultat%10;
if (segcifra==0 or segcifra==6 or segcifra==9) {krygcheta++;}
else {if (segcifra==8){krygcheta=krygcheta+2;}}
rezultat=rezultat/10;}
   cout << krygcheta;}
    return 0;
}

