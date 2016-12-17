#include<iostream>
using namespace std;

int main(){
    long long boys, girls, hi = 0, hands = 0;
    bool areOddBoys, areOddGirls;
    cin >> boys >> girls;
    areOddBoys  = boys  % 2 == 1;
    areOddGirls = girls % 2 == 1;
    hands = ( boys  - ( !areOddBoys  ) ) * ( ( boys  - areOddBoys  ) / 2 );
    hi    = ( girls - ( !areOddGirls ) ) * ( ( girls - areOddGirls ) / 2 );
    hi *= 2;
    hi += 2 * boys * girls;
    cout << hands << " " << hi << "\n";
    return 0;
}
