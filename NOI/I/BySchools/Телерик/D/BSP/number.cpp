#include<iostream>
using namespace std;
int main() {
long long m;
long long n;
long long x;
long long a;
long long b;
long long xamount = 0;
long long broiputi = 0;
cin>>m;
cin>>n;
b = m;
x = b * a;
a = b + 1;
for(broiputi; broiputi < n; broiputi++){
    if(x / b == a){
        if(x / a == b){
            xamount = xamount + 1;
            cout<<xamount;
        }
    }else{
        a = b + 1;
    }
}
if(n < b){
    cout<<"error";
}
return 0;
}
