#include <iostream>
using namespace std;
char Park[650][650];
int AmountX, AmountY, Answer;
int main(){
     cin.tie(NULL);
     ios::sync_with_stdio(false);
     cin >> AmountX >> AmountY;
     for(int CounterY = 1; CounterY <= AmountY; CounterY++){
          for(int CounterX = 1; CounterX <= AmountX; CounterX++){
               cin >> Park[CounterX][CounterY];
               if(Park[CounterX][CounterY] = '#'){
                    CoordinatesOfficeX = CounterX;
                    CoordinatesOfficeY = CounterY;
               }
          }
     }
     cout << Answer << "\n";
     return 0;
}
