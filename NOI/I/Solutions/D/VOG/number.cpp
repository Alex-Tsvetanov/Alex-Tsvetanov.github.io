#include <iostream>
using namespace std;

int main () {

 long long a,b,c=0;
 cin >> a >> b;

 for (long long i=a;i<=b;i++){
    for (long long n=1;n*n<=i;n++){
        if (n*(n+1)==i){c++;}
    }
 }

 cout << c << endl;

 return 0;
}
