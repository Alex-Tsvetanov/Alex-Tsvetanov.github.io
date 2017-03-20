#include <iostream>
using namespace std;
int Requests, AmountDots[20];
int main(){
     cin >> Requests;
     for(int Counter = 1; Counter <= Requests; Counter++){
          cin >> AmountDots[Counter];
          for(int SecondCounter = 1, OtherNumber; SecondCounter <= AmountDots[Counter]; SecondCounter++){
               cin >> OtherNumber;
          }
     }
     for(int Counter = 1; Counter <= Requests; Counter++){
          if(AmountDots[Counter] % 2 == 0){
               cout << AmountDots[Counter] / 2 << "\n";
          }else{
               cout << AmountDots[Counter] / 2 + 1 << "\n";
          }
     }
     return 0;
}
