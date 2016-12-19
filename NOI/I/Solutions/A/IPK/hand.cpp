#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int k;
    cin >> k;
    int MAX = -1, MIN = 10000;
    for(int i = 1 ; i < n; i ++){
        int a;
        cin >> a;
        MAX = max(MAX+1, a);

        MIN = min(MIN, a);

        if(a == i) MIN++;

    }

    cout << MAX << "\n";
    cout << MIN << "\n";
    return 0;
}
