#include<iostream>
using namespace std;
int main(){
    char parola1[4],parola2[4];
    int preobr_parola1[4],preobr_parola2[4];
    for(int i=0;i<4;i++){
            cin>>parola1[i];
    }
    for(int q=0;q<4;q++){
            cin>>parola2[q];
    }
    for(int z=0;z<4;z++){
           if(parola1[z]>='A' && parola1[z]<='Z') preobr_parola1[z]=(parola1[z]-64)*2;
           if(parola1[z]>='a' && parola1[z]<='z') preobr_parola1[z]=parola1[z]-96;
           if(parola1[z]>='0' && parola1[z]<='9') preobr_parola1[z]=parola1[z]-'0';
    }
    for(int g=0;g<4;g++){
           if(parola2[g]>='A' && parola2[g]<='Z') preobr_parola2[g]=(parola2[g]-64)*2;
           if(parola2[g]>='a' && parola2[g]<='z') preobr_parola2[g]=parola2[g]-96;
           if(parola2[g]>='0' && parola2[g]<='9') preobr_parola2[g]=parola2[g]-'0';
    }
    int sbor_parola1,sbor_parola2;
    sbor_parola1=0;
    sbor_parola2=0;
    for(int j=0;j<4;j++){
            sbor_parola1=sbor_parola1+preobr_parola1[j];
            sbor_parola2=sbor_parola2+preobr_parola2[j];
    }
    if(sbor_parola1>sbor_parola2){
            for(int x=0;x<4;x++){
                    cout<<parola1[x];
            }
            cout<<" "<<sbor_parola1;
    }
    if(sbor_parola2>sbor_parola1){
            for(int u=0;u<4;u++){
                    cout<<parola2[u];
            }
            cout<<" "<<sbor_parola2;
    }
    if(sbor_parola1==sbor_parola2) cout<<"0";
    return 0;
}
