#include <iostream>

using namespace std;

int main()
{
    long long M, N, O = 0, x = 0, y = 2, z = 3;
    cin >> M >> N;
    while(x <= N)
    {
        x = y++ * z++;
        if(x >= M && x <= N)
        {
            O++;
        }
    }
    cout << O;
    return 0;
}

