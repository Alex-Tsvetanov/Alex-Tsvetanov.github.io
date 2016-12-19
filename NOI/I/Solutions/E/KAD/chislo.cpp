#include<iostream>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    if(a==6){
            a=9;
    }
    if(b==6){
            b=9;
    }
    if(b>a){
            swap(a,b);
    }
    cout<<a*10+b<<endl;
return 0;
}
