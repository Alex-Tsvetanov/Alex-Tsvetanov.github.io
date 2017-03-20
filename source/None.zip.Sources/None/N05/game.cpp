#include<iostream>
using namespace std;
int m, k;
int segashnoChislo, naiBlizkoChislo, razlika = 1000000000000;
int brChisla, sbor;
int main()
{
    cin>>m>>k;
    while(true){
        cin>>segashnoChislo;
        ++ brChisla;
        if(segashnoChislo % 2 == 0){
            sbor += segashnoChislo;
        }
        if(segashnoChislo >= m){
            razlika = segashnoChislo - m;
        }else{
            razlika = m - segashnoChislo;
        }
        if(naiBlizkoChislo >= m){
            if(naiBlizkoChislo - m >= razlika){
                naiBlizkoChislo = segashnoChislo;
            }
        }else{
            if(m - naiBlizkoChislo >= razlika){
                naiBlizkoChislo = segashnoChislo;
            }
        }
        if(sbor > k or brChisla >= 200){
            break;
        }
    }
    cout<<naiBlizkoChislo<<' '<<sbor;
    cout<<"\n";
    return 0;
}
