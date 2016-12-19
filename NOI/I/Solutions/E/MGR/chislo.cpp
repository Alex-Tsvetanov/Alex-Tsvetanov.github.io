#include <iostream>
using namespace std;
int main ()
{
int a , b ;
cin>>a>>b;
if(a==6 & b==9){
    cout<<99;
} else if(a==9 & b==6){
    cout<<99;
}else if(a==9 & b==1){
    cout<<91;
}else if(a==1 & b==9){
    cout<<91;
}else if(a==9 & b==8){
    cout<<98;
}else if(a==8 & b==9){
    cout<<98;
}else if(a==6 & b==1){
    cout<<91;
}else if(a==1 & b==6){
    cout<<91;
}else if(a==6 & b==8){
    cout<<98;
}else if(a==8 & b==6){
    cout<<98;
}else if(a==8 & b==1){
    cout<<81;
}else if(a==1 & b==8){
    cout<<81;
}
return 0;
}
