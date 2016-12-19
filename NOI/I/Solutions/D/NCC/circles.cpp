#include <iostream>
using namespace std;
int main(){

long long a, b, x=0, i, o, nc=0;;
char z;
cin>>a>>b>>z;

if(z=='+'){x=a+b;}
if(z=='-'){x=a-b;}
if(z=='*'){x=a*b;}

for(i=x;i>0;i=i/10){
    o=i%10;
    if(o==0 or o==6 or o==9){nc++;}
    if(o==8){nc=nc+2;}
}

cout<<nc<<endl<<endl;

return 0;
}
