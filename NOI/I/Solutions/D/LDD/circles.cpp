#include <iostream>
#include <string>
using namespace std;
int  main () {

    long long x, y, i, n, br=1, ch[200], br1=0, j=0;
    char c;
    cin >> x >> y >> c;
    if(c=='+'){n=x+y;}
    if(c=='-'){n=x-y;}
    if(c=='*'){n=x*y;}
    i=n;
    while(i>10)
    {
        i=i/10;
        br++;
    }
    cout << br+1;
    ///while(br>0){
    ///while(br>0)
    ///{
       /// i=i/10;

    ///}
    ///ch[j]=i;
    ///if(ch[j]==0 or ch[j]==6 or ch[j]==9){br1++;}
    ///if(ch[j]==8){br1=br1+2;}
    ///j++;
    ///br--;
    ///i=n/10;
    ///}
   /// cout << br1;








return 0;
}
