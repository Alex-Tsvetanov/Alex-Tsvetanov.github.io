#include <iostream>

using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    if(a==1 or a==8){
    }
    if(a==6){
        a=9;
    }
    if(a==9){
    }
    if(b==1 or b==8){
    }
    if(b==6){
        b=9;
    }
    if(b==9){
    }
    if(a>b){
        swap(a,b);
    }
    cout<<b<<a<<endl;
    return 0;
}
