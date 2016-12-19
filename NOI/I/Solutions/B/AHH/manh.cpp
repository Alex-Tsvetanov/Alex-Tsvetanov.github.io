#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

enum type{Ver, Hor};

struct ots{
    int x1,x2,y1,y2;
    type t;
    void getType(){
        if(x1 == x2)t=Ver;
        else t=Hor;
        if(y1 > y2)swap(y1, y2);
        if(x1 > x2)swap(x1, x2);
    }
}A,B;

int main(){
    cin >> A.x1 >> A.y1 >> A.x2 >> A.y2;
    cin >> B.x1 >> B.y1 >> B.x2 >> B.y2;
    A.getType();
    B.getType();
    if(A.t == Hor && B.t == Ver)swap(A,B);
    if(A.t == Ver && B.t == Hor){
        int dist = 0;
        if(A.y2 < B.y1){
            dist += (B.y1 - A.y2);
        }else if(A.y1 > B.y2){
            dist += (A.y1 - B.y2);
        }
        if(A.x1 > B.x2) dist+= (A.x1 - B.x2);
        else if(A.x2 < B.x1) dist+=(B.x1 - A.x2);
        cout << dist << endl;
    }
    if(A.t == Ver && B.t == Ver){
        int dist = abs(A.x1 - B.x2);
        if(A.y1 > B.y2){
            dist+=(A.y1-B.y2);
        }else if(A.y2 < B.y1){
            dist+=(B.y1-A.y2);
        }
        cout << dist << endl;
    }
    if(A.t == Hor && B.t == Hor){
        int dist = abs(A.y1 - B.y2);
        if(A.x1 > B.x2){
            dist+=(A.x1-B.x2);
        }else if(A.x2 < B.x1){
            dist+=(B.x1-A.x2);
        }
        cout << dist << endl;
    }
}
