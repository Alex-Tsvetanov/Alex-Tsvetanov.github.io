#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long razmeri[n*2],predKart1,predKart2,segTeste=0,nai_goliamoTeste=0;
    cin>>razmeri[0]>>razmeri[1];
    predKart1=razmeri[0];
    predKart2=razmeri[1];
    for(int i=2;i<n*2;i+=2){
        cin>>razmeri[i]>>razmeri[i+1];
        if(segTeste==0){
            segTeste++;
        }
        if((razmeri[i]<=predKart1&&razmeri[i+1]<=predKart2)||(razmeri[i+1]<=predKart1&&razmeri[i]<=predKart2)){
            segTeste++;
        }else{
            if(segTeste>nai_goliamoTeste){
                nai_goliamoTeste=segTeste;
            }
            segTeste=0;
        }
    }
    cout<<nai_goliamoTeste;
    return 0;
}
