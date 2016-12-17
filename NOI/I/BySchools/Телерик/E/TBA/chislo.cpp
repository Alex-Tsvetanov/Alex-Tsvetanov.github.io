#include<iostream>
using namespace std;
int main(){
    short int chislo1,chislo2;
    cin>>chislo1>>chislo2;
    if(chislo1==6){
        chislo1=9;
    }
    if(chislo2==6){
        chislo2=9;
    }
    if(chislo1<chislo2){
        swap(chislo1,chislo2);
    }
    cout<<chislo1<<chislo2;
    return 0;
}
