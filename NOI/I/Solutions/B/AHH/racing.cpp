#include <iostream>
using namespace std;
int A[1020];
int N;
int mem[1020];
int rec(int i){
    if(mem[i])return mem[i];
    if(i <= 0 )return 0;
    mem[i] = min(rec(i-1),min(rec(i-2), rec(i-3))) + A[i];
    return mem[i];
}
int main(){
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];
    if(N <= 2) cout << min(A[2], A[1]) << endl;
    else cout << rec(N+1) << endl;
}
