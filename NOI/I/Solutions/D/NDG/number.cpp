#include<iostream>
using namespace std;

int main(){
    long long M, N, counter = 0;
    cin >> M >> N;
    for(long long i = M; i <= N; i++){
        long long j;
        for( j = 2; j * j < i; j ++ ){}
        if( ( j - 1 ) * j == i ){ counter ++; }
    }
    cout << counter << endl;
    return 0;
}
