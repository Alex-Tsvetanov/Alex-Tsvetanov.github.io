#include<iostream>
#include<math.h>

using namespace std;

typedef unsigned long long ull;

int p;
ull n;

int eq(char a){
    if(a == 'A') return 10;
    if(a == 'B') return 11;
    if(a == 'C') return 12;
    if(a == 'D') return 13;
    if(a == 'E') return 14;
    if(a == 'F') return 15;
    return a - 48;
}

ull iot(string po){

    ull res = 0;
    ull step = 0;

    for(int i=po.length()-1;i>=0;i--){
        res += eq(po[i])*pow(p,step++);
    }

    return res;
}

int main(){

    cin >> p >> n;
    string f, e;
    cin >> f >> e;

    ull a = iot(f), b = iot(e);

    ull temp;
    for(ull i=0;i<n-2;i++){
        temp = b;
        b = a + b;
        a = temp;
    }

    while(b/100 != 0) b/=10;

    cout << b/10%10;

    return 0;
}
