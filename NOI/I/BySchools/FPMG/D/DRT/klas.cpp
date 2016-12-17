#include <iostream>

using namespace std;

int main()
{
    long long N,M,zdrastita=0,rukostiskaniq=0;
    ///N-momcheta;
    ///M-momicheta;
    cin >> N;
    cin >> M;
    zdrastita=M*(M+N-1);
    rukostiskaniq=N*(N-1);
    zdrastita=zdrastita+M;
    cout << rukostiskaniq <<" "<<zdrastita;
    return 0;
}
