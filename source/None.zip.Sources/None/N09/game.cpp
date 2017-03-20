#include <iostream>
using namespace std;
int main(){
    long long namchis[200],m,k,nai_blizkoDoMChislo,indNai,sumaChetni=0,naKolkoEOtMnaiBlz,naKolkoEOtMprov;
    cin>>m>>k>>namchis[0];
    nai_blizkoDoMChislo=namchis[0];
    indNai=0;
    if(m-namchis[0]>0){
        naKolkoEOtMnaiBlz=m-namchis[0];
    }else{
        naKolkoEOtMnaiBlz=(m-namchis[0])-((m-namchis[0])*2);
    }
    if(namchis[0]%2==0){
        sumaChetni+=namchis[0];
    }
    for(int i=1;i<200&&sumaChetni<=k;i++){
        cin>>namchis[i];
        if(m-namchis[i]>0){
            naKolkoEOtMprov=m-namchis[i];
        }else{
            naKolkoEOtMprov=(m-namchis[i])-((m-namchis[i])*2);
        }
        if(m-nai_blizkoDoMChislo>0){
            naKolkoEOtMnaiBlz=m-nai_blizkoDoMChislo;
        }else{
            naKolkoEOtMnaiBlz=(m-nai_blizkoDoMChislo)-((m-nai_blizkoDoMChislo)*2);
        }
        if(naKolkoEOtMprov<=naKolkoEOtMnaiBlz){
            nai_blizkoDoMChislo=namchis[i];
            indNai=i;
        }
        if(namchis[i]%2==0){
            sumaChetni+=namchis[i];
        }
    }
    cout<<indNai+1<<" "<<sumaChetni;
    return 0;
}
