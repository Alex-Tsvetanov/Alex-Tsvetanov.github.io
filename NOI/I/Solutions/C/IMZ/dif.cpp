#include <iostream>
#include <cmath>
using namespace std;
int Number;
long long AmountExistent, ExistentAs[1000000], ExistentBs[1000000];
int main(){
    cin >> Number;
    if(Number % 2 == 0){
        for( long long A = 2, B = 0; ; ){
            if((A * A) - (B * B) > Number){
                if(A - B == 2){
                    goto EndProgram;
                }
                A++;
                B = A - 2;
            }
            if((A * A) - (B * B) == Number){
                AmountExistent++;
                ExistentAs[AmountExistent] = A * A;
                ExistentBs[AmountExistent] = B * B;
                if(A - B == 2){
                    goto EndProgram;
                }
                A++;
                B = A - 2;
            }else{
                if(B == 0 or B == 1){
                    A++;
                    B = A - 2;
                }else{
                    B -= 2;
                }
            }
        }
    }else{
        for( long long A = 2, B = 1; ; ){
            if((A * A) - (B * B) > Number){
               if(A - B == 1){
                    goto EndProgram;
               }
               A++;
               B = A - 1;
            }
            if((A * A) - (B * B) == Number){
                AmountExistent++;
                ExistentAs[AmountExistent] = A * A;
                ExistentBs[AmountExistent] = B * B;
                if(A - B == 1){
                    goto EndProgram;
                }
                A++;
                B = A - 1;
            }else{
                if(B == 0 or B == 1){
                    A++;
                    B = A - 1;
                }else{
                    B -= 2;
                }
            }
        }
    }
    EndProgram:;

    cout << AmountExistent << endl;
    for( long long Counter = 1; Counter <= AmountExistent; Counter++){
        cout << ExistentAs[Counter] << " " << ExistentBs[Counter] << endl;
    }
    return 0;
}