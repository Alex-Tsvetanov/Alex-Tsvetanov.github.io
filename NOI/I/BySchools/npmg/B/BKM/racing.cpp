#include <iostream>
using namespace std;

int main () {
int N;
cin >> N;
int A[N+1],sum=0;
for (int i=1;i<=N;i++) cin >> A[i];
if (N==1) cout << A[1];
else if (N==2) cout << A[2];
else if (N==3) cout << A[3];
else if (N>3){
    for (int i=3;i<=N;i+=3) {
        sum+=A[i];
    }
cout << sum << endl;
}
return 0;
}
