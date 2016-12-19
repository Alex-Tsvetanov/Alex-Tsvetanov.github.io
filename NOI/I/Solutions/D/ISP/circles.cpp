#include<iostream>

using namespace std;

int main(){

  char znak;
  long long a, b, aZnakB, brKrugcheta=0;
  cin >> a >> b >> znak;

  switch(znak){
    case '+': aZnakB=a+b; break;
    case '-': aZnakB=a-b; break;
    case '*': aZnakB=a*b; break;
  }

  if(aZnakB==0){
    brKrugcheta++;
  }

  while(aZnakB>0){
    if(aZnakB%10==0 || aZnakB%10==6|| aZnakB%10==9)
      brKrugcheta++;
    if(aZnakB%10==8)
      brKrugcheta+=2;
    aZnakB/=10;
  }

  cout << brKrugcheta << '\n';

  return 0;
}
