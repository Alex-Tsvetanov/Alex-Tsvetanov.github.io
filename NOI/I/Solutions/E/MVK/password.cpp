#include<iostream>
using namespace std;
int main(){
long long s1,s2;
char x1,x2,x3,x4,y1,y2,y3,y4;
cin>>x1>>x2>>x3>>x4>>y1>>y2>>y3>>y4;
if(x1+x2+x3+x4==y1+y2+y3+y4){
    cout<<"0";
}
s1=x1+x2+x3+x4;
s2=y1+y2+y3+y4;
if(s1<s2){
    cout<<y1<<y2<<y3<<y4;
}else{
    cout<<x1<<x2<<x3<<x4;
}
return 0;
}
