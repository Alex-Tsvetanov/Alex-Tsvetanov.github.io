#include <iostream>
using namespace std;
int main () {
        int n;
        cin >> n;
        int num [n];
        for (int i = 0; i < n; i++){
                cin >> num[i];
        }
        int mins = 0;
        for (int i = 0; i < n ;i+=3){
                mins += num[i];

        }
        cout << mins;
        return 0;
}
