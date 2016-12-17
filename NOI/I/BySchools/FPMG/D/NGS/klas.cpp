#include <iostream>
using namespace std;

int main ()
{
    long long N, M, handshake = 0, hello = 0, copyN, copyM;
    cin >> N >> M;
    copyN = N;
    copyM = M;
    while (copyN > 0)
    {
        handshake = handshake + copyN - 1;
        copyN--;
    }
    while (copyM > 0)
    {
        hello = hello + 2 * copyM - 2;
        copyM--;
    }
    hello = hello + N * M * 2;
    cout << handshake << " " << hello;
    return 0;
}
