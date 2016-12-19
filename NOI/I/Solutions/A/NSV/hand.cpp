#include<iostream>
#include<queue>
using namespace std;

int main ()
{
    int n, maxx = 0, minn = 0, handshakes[200005], hand_after_without[200005];
    cin >> n >> handshakes[0];
    for(int i = 1; i < n; ++i)
    {
        cin >> handshakes[i];
        if(handshakes[i] == i)
            ++ minn;
    }
    hand_after_without[n - 1] = 0;
    for(int i = n - 2; i >= 0; --i)
        hand_after_without[i] = hand_after_without[i + 1] + (handshakes[i + 1] > 0);
    for(int i = 0; i < n; ++i)
        maxx = max(maxx, handshakes[i] + hand_after_without[i]);
    cout << maxx << endl << minn << endl;
    return 0;
}
/*
5
0 0 1 1 1

5
0 0 2 2 3
*/
