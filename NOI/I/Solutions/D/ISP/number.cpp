#include<iostream>

using namespace std;

//bool kolko2Delitelq[1000000000000001];

int main(){

  long long n, m, doN=0, doM=0, i;

  cin >> m >> n;

  for(i=2; i*(i+1)<m; i++)
    doM++;

  doN=doM;
  for(; i*(i+1)<=n; i++)
    doN++;


  cout << doN-doM << '\n';

  return 0;
}
