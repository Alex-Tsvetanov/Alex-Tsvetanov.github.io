#include<iostream>
using namespace std;
int main(){
    short a, b, af, bf, k[4], fin=0;
    cin>>a>>b;
    if(a==6) af = 9;
    else if(a==9) af = 6;
    else af = a;

    if(b==6) bf = 9;
    else if(b==9) bf = 6;
    else bf = b;

    k[0] = a*10 + b;
    k[1] = b*10 + a;
    k[2] = af*10 + bf;
    k[3] = bf*10 + af;

    for(short n:k){
        if(n>fin)
            fin = n;
    }
    cout<<fin;
    return 0;
}
