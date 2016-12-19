#include<iostream>

using namespace std;

int main(){

  long long n, m, zdr=0, rykostiskaniq=0;
  cin >> n >> m;

  zdr=m*(2*n+m-1);
  rykostiskaniq=(n*(n-1))/2;

  cout << rykostiskaniq << ' ' << zdr << '\n';

  return 0;
}
