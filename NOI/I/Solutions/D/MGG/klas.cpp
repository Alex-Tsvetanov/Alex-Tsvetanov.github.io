#include <iostream>
using namespace std;
int main () {
    long long boys, girls;
    cin >> boys >> girls;
    if (boys == 1) {
        cout << 0 << " ";
    }
    else {
        cout << boys * (boys - 1) << " ";
    }

    cout << (boys + girls) * (boys + girls - 1);

return 0;
}
