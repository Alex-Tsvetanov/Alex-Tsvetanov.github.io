#include<iostream>
using namespace std;

int main() {

    long long N,M;
    long long i,j=0;
    cin >> N >> M;
    long long ruka=0,zdravei=0;

    zdravei=(N+M)*((N+M)-1);
    if(M==0){
        zdravei=0;
    }

    for(i=0;j<N;j++,i++){
        ruka+=i;
    }


    cout << ruka << " " << zdravei << endl;

    return 0;
}
