#include <iostream>
using namespace std;

int main () {
    long long i, sum1=0, sum2=0, m;
    char A[4], B[4];

    cin >> A[0] >> A[1] >> A[2] >> A[3] >> B[0] >> B[1] >> B[2] >> B[3];
    for (i=0; i < 4; i++) {
        if (A[i]>='0' and A[i]<='9') {
            m=A[i]-'0';
            sum1 = sum1+m;
        }
        if (A[i]>='a' and A[i]<='z') {
            m=A[i]-'a'+1;
            sum1 = sum1+m;
        }
        if (A[i]>='A' and A[i]<='Z') {
            m=A[i]-'A'+1;
            sum1 = sum1+m*2;
        }
    }
    for (i=0; i < 4; i++) {
        if (B[i]>='0' and B[i]<='9') {
            m=B[i]-'0';
            sum2 = sum2+m;
        }
        if (B[i]>='a' and B[i]<='z') {
            m=B[i]-'a'+1;
            sum2 = sum2+m;
        }
        if (B[i]>='A' and B[i]<='Z') {
            m=B[i]-'A'+1;
            sum2 = sum2+m*2;
        }
    }
    if (sum1==sum2) {
        cout << 0 << endl;
    }
    if (sum1>sum2) {
        cout << A[0] << A[1] << A[2] << A[3] << ' ' << sum1 << endl;
    }
    if (sum2>sum1) {
        cout << B[0] << B[1] << B[2] << B[3] << ' ' << sum2 << endl;
    }

return 0;
}

