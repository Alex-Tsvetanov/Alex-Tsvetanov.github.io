#include <iostream>
using namespace std;
int main () {
    long long m, n, broi = 0, m_promenqstose;
    cin >> m >> n;
    m_promenqstose = m;
    for (int i = 0; i < n - m + 1; ++i) {
        for (int broqch = 0; broqch < m_promenqstose; ++broqch) {
            if (broqch * (broqch + 1) == m_promenqstose) {
                ++broi;
            }
        }
        ++m_promenqstose;
    }
    cout << broi;

    return 0;
}
