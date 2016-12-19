#include <iostream>
using namespace std;
int main (){
long long M, N, broi=0, i;
cin>>M>>N;
for(i=2;i*(i+1)<=N;i++){
    if(i*(i+1)>=M and i*(i+1)<=N){
        broi++;
    }
}
cout<<broi;
return 0;
}
