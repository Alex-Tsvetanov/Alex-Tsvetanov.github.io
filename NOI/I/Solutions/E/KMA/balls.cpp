#include <iostream>
using namespace std;
int main ()
{
    long long n1,n2,k,broiOtA,broiOtB;
    char bukvaA,bukvaB;
    cin>>n1>>bukvaA;
    cin>>n2>>bukvaB;
    cin>>k;
    k<=n1+n2;
    n1>0;
    n2<101;
    if(k<n1){n1=k;
    }
    if(bukvaA='A'){broiOtA=n1;
    broiOtB=n2;
    }else{n1=broiOtB;
    n2=broiOtA;
    }
    if(bukvaB=='A'){broiOtA=broiOtA-3;}
    cout<<broiOtA;
}
