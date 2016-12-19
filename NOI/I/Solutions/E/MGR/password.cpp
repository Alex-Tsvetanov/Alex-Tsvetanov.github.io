#include <iostream>
using namespace std;
int main ()
{
  int i,a;
    char b;
    cin>>b;
    if (b>='a' & b<='z'){
        i=26+b-122;
    } else if (b>='A' & b<='Z'){
        i=(26+b-90)*2;
    }
cout<<a<<endl;
   return 0;
    }
