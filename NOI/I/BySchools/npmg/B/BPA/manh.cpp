#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int dist(int x1,int y1,int x2,int y2){
return fabs(x1-x2) + fabs(y1-y2);
}
int shortest(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4){
    bool x1same = false;
    if(x1 == x2) x1same = true;
    int totx = x1+x2;
    x1 = min(x1,x2);
    x2 = totx-x1;

    totx = x3+x4;
    x3 = min(x3,x4);
    x4 = totx-x3;

    int toty = y1+y2;
    y1 = min(y1,y2);
    y2 = toty-y1;

    toty = y3+y4;
    y3 = min(y3,y4);
    y4 = toty-y3;
    int mn = 1000;
    if(x1same){
        for(int i = y1; i<=y2; i++){
            for(int j = x3; j<=x4;j++){
                int dis = dist(x1,i,j,y3);
                if(dis<mn){
                    mn=dis;
                }
            }
        }
    }else{
        for(int i = x1; i<=x2; i++){
            for(int j = y3; j<=y4;j++){
                int dis = dist(i,y1,x3,j);
                if(dis<mn){
                    mn=dis;
                }
            }
        }
    }
    return mn;
}

int main(){
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d;
    cin>>e>>f>>g>>h;
    cout<<shortest(a,b,c,d,e,f,g,h)<<endl;
}
