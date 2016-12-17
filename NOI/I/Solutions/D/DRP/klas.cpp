#include <iostream>

using namespace std;

int main()
{
    int N, M, a = 0, b = 1, c = 0, d = 0, e = 0;
    cin >> N >> M;
    while(a < N)
    {
        d = d + a++;
    }
    if(M > 0)
    {
        e--;
    }
    while(b <= M)
    {
        e = e + b++;
    }
    if(N > 0)
    {
        e = e + M * N * 2;
    }
    cout << d << " " << e;
    return 0;
}
