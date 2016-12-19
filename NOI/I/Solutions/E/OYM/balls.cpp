#include<iostream>
using namespace std;
int main(){
long long a,b,c;
char a1,b1;
cin>>a>>a1>>b>>b1>>c;
if(a1=='A' and b1=='B'){
    if(c>=a){
        cout<<a;
    }
    if(c<a){
        cout<<c;
    }
}
if(a1=='A' and b1=='A'){
    if(c>=a+b){
        cout<<a+b;
    }
    if(c>=a and c-a<b){
        cout<<c;
    }
    if(c<a){
        cout<<c;
    }
}
if(a1=='B' and b1=='B'){
        cout<<0;
}
if(a1=='B' and b1=='A'){
    if(c>a){
        cout<<c-a;
    }else if(c<=a){
        cout<<0;
    }
}
return 0;
}
