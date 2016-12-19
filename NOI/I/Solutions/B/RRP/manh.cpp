#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x1,x2,x3,x4,y1,y2,y3,y4;
cin>>x1>>y1>>x2>>y2;
cin>>x3>>y3>>x4>>y4;
cout<<abs(abs(x1-x2)-abs(x3-x4))+abs(abs(y1-y2)-abs(y3-y4));




return 0;
}
