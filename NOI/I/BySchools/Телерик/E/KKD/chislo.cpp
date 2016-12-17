#include<iostream>
#include<algorithm>
using namespace std;
int a,b,chislo1,chislo2;
bool proverka1=false,proverka2=false;
int main(){
    cin>>a>>b;
    if(a==6){
        a=9;
        proverka1=true;
    }
    if(a==9 and !proverka1){
        a=6;
    }
    if(b==6){
        b=9;
        proverka2=true;
    }
    if(b==9 and !proverka2){
        b=6;
    }
    chislo1=max(a,b);
    chislo2=min(a,b);
    cout<<chislo1<<chislo2<<endl;
return 0;
}
