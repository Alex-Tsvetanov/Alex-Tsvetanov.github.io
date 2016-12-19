#include<iostream>
using namespace std;
int main(){
    int int1,int2;
    char char1,char2;
    int vzeti;
    cin>>int1>>char1;
    cin>>int2>>char2;
    cin>>vzeti;
    int vida,vidb;
    if(char1=='A') vida=int1;
    else vidb=int1;
    if(char2=='A') vida=int2;
    else vidb=int2;
    if(vida==int1){
            if(vzeti<=int1) cout<<vzeti;
            else cout<<int1;
    }
    if(vida==int2){
            if(vzeti<=int1) cout<<"0";
            else cout<<vzeti-int1;
    }
    return 0;
}
