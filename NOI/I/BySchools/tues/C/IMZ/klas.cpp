#include <iostream>
using namespace std;
long long AmountHandShakes, AmountHellos, AmountBoys, AmountGirls;
char BoysAndGirls[22000];
int main(){
    cin >> BoysAndGirls;
    if(BoysAndGirls[0] == '+'){
        AmountGirls++;
    }else{
        AmountBoys++;
    }
    for( int Counter = 1; BoysAndGirls[Counter] == '+' or BoysAndGirls[Counter] == '-'; Counter++){
        if(BoysAndGirls[Counter] == '-'){
            AmountHandShakes += AmountBoys;
            AmountHellos += AmountGirls * 2;
            AmountBoys++;
        }else{
            AmountHellos++;
            AmountHellos += AmountBoys + AmountGirls;
            AmountGirls++;
        }
    }
    cout << AmountHandShakes << " " << AmountHellos << endl;
    return 0;
}