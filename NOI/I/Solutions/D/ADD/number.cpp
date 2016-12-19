#include <iostream>
using namespace std;
int main(){
    long long M,N,broi=0;
    cin>>M>>N;
    for(int i=M;i<=N;i++){
        for(int j=2;(j-1)*(j-1)<=N;j++){
            if(j*(j-1)==i){
                broi++;
            }
        }
    }
    cout<<broi;
    return 0;
}
