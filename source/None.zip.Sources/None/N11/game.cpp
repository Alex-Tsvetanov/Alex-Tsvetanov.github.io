#include<iostream>
using namespace std;
int main () {
    long long eva, kris, sum = 0, br = 0, vhod[200], razlika = 100000, index = 0;
    cin>>kris>>eva;
    while(sum <= eva && br <= 200){
        cin>>vhod[br];
        if(vhod[br] % 2 == 0){
            sum += vhod[br];
        }
        if(vhod[br] >= kris){
            if(vhod[br] - kris <= razlika){
                razlika = vhod[br] - kris;
                index = br + 1;
            }
        }else{
            if(kris - vhod[br] <= razlika){
                razlika = kris - vhod[br];
                index = br + 1;
            }
        }
        br ++;
    }
    cout<<index<<" "<<sum<<"\n";
    return 0;
}



