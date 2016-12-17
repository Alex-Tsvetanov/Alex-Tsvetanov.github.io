#include<iostream>
using namespace std;
int Zdravei(int momcheta,int momicheta){
    int broiMomicheta = 0,broiMomcheta = 0;
    int br = 0;
while(broiMomicheta != momicheta){
   br += momcheta + (momicheta - 1);
   broiMomicheta++;
}
while(broiMomcheta != momcheta){
    br+=momicheta;
    broiMomcheta++;
}
return br;
}
int Zdravisvane(int momcheta){
int broiMomcheta=0, br=0;

while(broiMomcheta != momcheta){
    br+=(momcheta-1);
    broiMomcheta++;
}
return br;
}
int main(){
    int N , M;
    cin>>N>>M;
    int brZdr = 0,brZdravis = 0;
    brZdr = Zdravei(N,M);
    brZdravis = Zdravisvane(N);
    cout<<brZdravis<<" "<<brZdr;
    cout<<endl;
    return 0;
}
