#include<iostream>
#include<string>
using namespace std;
int main(){
char uchenici[20001];
cin>>uchenici;
int i, rukostiskane=0, pozdravi=0, momcheta=0, momicheta=0;
for(i=0; uchenici[i]!='\0'; i++){
    if(uchenici[i]=='+'){
        if(momcheta+momicheta>0){
            pozdravi+=((momcheta+momicheta)+1);
        }
        momicheta++;
    }else{
        rukostiskane+=momcheta;
        if(momicheta>0){
            pozdravi+=(momicheta*2);
        }
        momcheta++;
    }
}
cout<<rukostiskane<<" "<<pozdravi<<endl;
return 0;
}
