#include <iostream>
using namespace std;
long long AmountNumbers, Answer = 1, Doubler = 2;
int main(){
     cin.tie(NULL);
     ios::sync_with_stdio(false);
     cin >> AmountNumbers;
     for(int Counter = 1, Number; Counter <= AmountNumbers; Counter++){
          cin >> Number;
     }
     for(int Counter = 1; Counter < AmountNumbers; Counter++, Doubler *= 2){
          Answer += Doubler;
     }
     cout << Answer << "\n";
     return 0;
}
