#include <iostream>
using namespace std;

int main(){
    long long a,b,i,c=0,d=0;
    cin >> a >> b;
    if(a>b){
        for(i=b-1;i>0;i--){
            c=c+i;
        }
        for(i=a-1;i>b-1;i--){
            c=c+i;
            d=d+i;
        }
    }else{
        for(i=a-1;i>0;i--){
            c=c+i;
            d=d+i;
        }
        for(i=b-1;i>a-1;i--){
            d=d+i;
        }
    }
    d=d+b*a;
    cout << c << " " << d*2 << endl;
return 0;
}

