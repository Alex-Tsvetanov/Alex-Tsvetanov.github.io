#include <iostream>
using namespace std;

int main(){

    long long chisloKris, chisloEva, i, sbor=0, minnras=1000000000000000000, ras, nomer=1, minnomer=1;

    cin>>chisloKris>>chisloEva;

    while(sbor<chisloEva&&nomer<200){
        cin>>i;
        if(i%2==0){
        sbor+=i;
        }

        ras=chisloKris-i;
        if(ras<0){
            ras*=(-1);
        }

        if(ras<=minnras){
            minnras=ras;
            minnomer=nomer;
        }
        nomer++;
    }

    cout<<minnomer<<' '<<sbor;
}
