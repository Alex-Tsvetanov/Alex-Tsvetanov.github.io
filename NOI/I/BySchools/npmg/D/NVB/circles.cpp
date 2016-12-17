#include <iostream>
using namespace std;
long long a,b;
int main ()
{
long long znak;
cin >> a >> b >> znak;
if (znak='+'){
    cout << a+b << endl;
}
else {
    cout <<" " <<endl;
}

cout << (a/b)-1;
return 0;
}
