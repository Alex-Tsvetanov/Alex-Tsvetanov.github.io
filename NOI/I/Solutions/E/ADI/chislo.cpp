#include<iostream>
using namespace std;
int main () {
    if(true){
        long long a, b, ch = 0;
        cin>>a>>b;
        if(a == 1){
            ch ++;
        }
        if(a == 8){
            if(b ==9 or b == 6){
                ch += 8;
            }else{
                ch += 80;
            }
        }
        if(a == 6 or a == 9){
            ch += 90;
        }
        if(b == 1){
            if(a == 1){
                ch += 10;
            }else{
                ch += 1;
            }
        }
        if(b == 8){
            if(a == 9 or a == 6 or a == 8){
                ch += 8;
            }else{
                ch += 80;
            }
        }
        if(b == 6 or b == 9){
            if(ch < 90){
                ch += 90;
            }else{
                ch += 9;
            }
        }
        cout<<ch<<"\n";
    }
    return 0;
}
