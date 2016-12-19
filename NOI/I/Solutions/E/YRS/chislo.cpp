#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int max_a,max_b;
    switch(a){
        case 1: max_a=1; break;
        case 6: max_a=9; break;
        case 8: max_a=8; break;
        case 9: max_a=9; break;
    }
    switch(b){
        case 1: max_b=1; break;
        case 6: max_b=9; break;
        case 8: max_b=8; break;
        case 9: max_b=9; break;
    }
    int var1,var2;
    var1=max_a*10+max_b;
    var2=max_b*10+max_a;
    if(var1>var2) cout<<var1;
    if(var2>var1) cout<<var2;
    if(var1==var2) cout<<var1;
    return 0;
}
