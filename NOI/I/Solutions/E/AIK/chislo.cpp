#include <iostream>
using namespace std;
int main(){
    long long a,b,maxa,maxb;
    cin>>a;
    cin>>b;
    if(a==1||a==8)maxa=a;
    if(a==9||a==6)maxa=9;
    if(b==1||b==8)maxb=b;
    if(b==9||b==6)maxb=9;
    if(maxa>maxb){
        cout<<maxa<<maxb;
    }else{
        cout<<maxb<<maxa;
    }
    return 0;
}
