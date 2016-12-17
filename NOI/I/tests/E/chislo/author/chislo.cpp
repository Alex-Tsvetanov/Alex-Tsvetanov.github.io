//Task: chislo
//Author: Emil Kelevedjiev

#include<iostream>
using namespace std;

int a,b;

int main()
{
   cin >> a >> b;

   if(a==6) a=9;
   if(b==6) b=9;

   if(a>b) cout << a << b;
   else cout << b << a;

   cout << endl;
}
