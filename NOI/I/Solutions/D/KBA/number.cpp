#include<iostream>
#include<math.h>
using namespace std;
int main() {
    unsigned long long a,b,n,rez=0;
    cin>>a>>b;
    n=sqrt(a);
    while(n*(n+1)<=b) {
        if(n*(n+1)>=a && n*(n+1)<=b) {
            rez++;
        }
        n++;
    }
    cout<<rez;
    return 0;
}
