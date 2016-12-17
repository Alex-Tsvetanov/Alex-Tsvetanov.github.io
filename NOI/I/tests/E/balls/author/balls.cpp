//Task: balls
//Author: Zornica Dzhenkova

#include <iostream>
using namespace std;

int main()
{ int n1, n2, k, r;
  char c1, c2;

  cin >> n1 >> c1;
  cin >> n2 >> c2;
  cin >> k;

  if(c1=='A')
    if(n1<k) r=n1; 
    else r=k;

  if(c1=='B')
    if(n1<k) r=k-n1; 
    else r=0;

  cout << r << endl;
  return 0;
}
