#include <iostream>
#include <string>
using namespace std;
int  main () {

    long long n, m, i, br=0, j, x;
    cin >> m >> n;

    for(i=m; i<=n; i++)
    {
        //cout << "raboti \n";
        for(j=0; j<=i; j++)
        {
            x=j+1;
            if(i==j*x){br++;}
        }
    }
    cout << br << endl;





return 0;
}
