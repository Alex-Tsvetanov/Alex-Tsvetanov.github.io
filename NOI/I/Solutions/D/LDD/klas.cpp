#include <iostream>
#include <string>
using namespace std;
int  main () {

    long long zdrx, zdry, x, y, zdrxy;
    cin >> x >> y;
    if(x==0){cout <<  "0 " << y*(y-1);}
    if(y==0){cout <<  "0 " << x*(x-1);}

    if(x!=0 and y!=0){cout << x*(x-1) <<((x+y)*((x+y)-1));}







return 0;
}
