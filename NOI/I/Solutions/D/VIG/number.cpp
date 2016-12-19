#include<iostream>
using namespace std;

long long output, m, n;

int main(){
    cin >> m >> n;
    for(long long i=2;i+1<n && i*(i+1)<=n;i++){
            if(i*(i+1)>=m&&i*(i+1)<=n){
            output++;
        }
    }
    cout << output << endl;
    return 0;
}
