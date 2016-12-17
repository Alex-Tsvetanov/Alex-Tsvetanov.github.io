#include <iostream>
using namespace std;
int main ()
{
    char a[5], b[5];
    long long sum, sum1;
    cin >> a;
    sum=0;
    for (int j=0;j<4;j++) {
        if (a[j]>='a' and a[j]<='z') sum=sum+(a[j]-'a'+1);
        if (a[j]>='A' and a[j]<='Z') sum=sum+(a[j]-'A'+1)*2;
        if (a[j]>='0' and a[j]<='9') sum=sum+(a[j]-'0');
    }
    cin >> b;
    sum1=0;
    for (int j=0;j<4;j++) {
        if (b[j]>='a' and b[j]<='z') sum1=sum1+(b[j]-'a'+1);
        if (b[j]>='A' and b[j]<='Z') sum1=sum1+(b[j]-'A'+1)*2;
        if (b[j]>='0' and b[j]<='9') sum1=sum1+(b[j]-'0');
    }
    if (sum1>sum) cout << b << ' ' << sum1 << endl;
    else if (sum>sum1) cout << a << ' ' << sum << endl;
    else cout << 0 << endl;
    return 0;
}
