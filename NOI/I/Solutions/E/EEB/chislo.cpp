#include <iostream>
using namespace std;
int main(){
long long a1, a2, obr;
cin>>a1>>a2;
if(a1==6){
    a1=9;
}
if(a2==6){
    a2=9;
}
if(a1<a2){
    swap(a1, a2);
}
cout<<a1*10+a2<<endl;
return 0;
}
