#include <iostream>

using namespace std;

int main()
{
    unsigned long long m, n;
    cin >> m >> n;

    unsigned long long count = 0;

    for(unsigned long long i = 1; i < n; i++){
        unsigned long long num = i*(i+1);
        if(num >= m && num <= n){
            count++;
        }
        else if(num > n)
            break;
    }

    cout << count << endl;
}
