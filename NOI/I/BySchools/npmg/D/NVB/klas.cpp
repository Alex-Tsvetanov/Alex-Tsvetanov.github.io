#include <iostream>
using namespace std;

int main ()
{
    long long n,m,buf,buf2;
    cin >> n >> m;
    buf=n+m;
    buf2 = (n+m)-1;

    if (n!=0){
        cout << 0 << " " << buf*m;
    }

    else {
        cout << 0 << " " << buf2*m;
    }

return 0;
}
