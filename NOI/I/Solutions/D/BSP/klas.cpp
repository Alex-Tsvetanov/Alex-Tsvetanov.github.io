#include<iostream>
using namespace std;
int main(){
    long long m, n, zdravei, zdravisvane;
    cin>>n>>m;
    zdravei = (n - (n - 1) + m)* 2;
    zdravisvane = (m - (m - 1) + n) * 2;
    cout<<zdravisvane<<" "<<zdravei;
    return 0;
}
