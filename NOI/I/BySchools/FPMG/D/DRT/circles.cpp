#include <iostream>

using namespace std;

int main()
{
    char znak;
    long long a,b;
    int krugcheta;
    cin >> a;
    cin >> b;
    while(a>=b){
        cin >> znak;

        if(znak == '+'){
            if((a+b)%10!=0){
               if((a+b)%1000000000==0 || (a+b)%1000000000==6 || (a+b)%1000000000==9){
                krugcheta=1;
               }
               if((a+b)%1000000000==8 ){
                krugcheta=krugcheta+1;
               }
               cout << krugcheta;
            }
        }
        if(znak == '-'){
            if((a-b)%10!=0){
                if((a-b)%1000000000==0 || (a-b)%1000000000==6 || (a-b)%1000000000==9){
                krugcheta=1;
               }
               if((a-b)%1000000000==8 ){
                krugcheta=krugcheta+1;
               }
               cout << krugcheta;
            }
        }
        if(znak == '*'){
            if((a*b)%10!=0){
                if((a*b)%1000000000==0 || (a*b)%1000000000==6 || (a*b)%1000000000==9){
                krugcheta=1;
               }
               if((a*b)%1000000000==8 ){
                krugcheta=krugcheta+1;
               }
               cout << krugcheta;
            }
        }
    }
    return 0;
}
