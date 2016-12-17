#include <iostream>

using namespace std;

int manh(int ax, int ay, int bx, int by);

int max1(int a, int b);

int min1(int a, int b);


int main(){
    int aStartX;
    int aEndX;
    int aStartY;
    int aEndY;

    int bStartX, bStartY, bEndX, bEndY;

    cin>>aStartX>>aStartY>>aEndX>>aEndY;
    cin>>bStartX>>bStartY>>bEndX>>bEndY;

    bool moveXA = aStartY==aEndY;

    bool moveXB = bStartY==bEndY;

    int minDst=1000000, dst;

    int ax, bx, ay, by;

    for(int i=(moveXA? min1(aStartX, aEndX) : min1(aStartY, aEndY)); i<= (moveXA ? max1(aStartX, aEndX) : max1(aStartY, aEndY)); i++){
        for(int j=(moveXB? min1(bStartX, bEndX) : min1(bStartY, bEndY)); j<= (moveXB ? max1(bStartX, bEndX) : max1(bStartY, bEndY)) ; j++){
            ax = (moveXA ? i : aStartX);
            bx = (moveXB ? j : bStartX);
            ay = (moveXA ? aStartY : i);
            by = (moveXB ? bStartY : j);
            dst = manh(ax, ay, bx, by);
            if(dst<minDst) minDst = dst;
            //cout<<ax<<" "<<ay<<" "<<bx<<" "<<by<<" dst "<<dst<<endl;;
        }
    }
    cout<<minDst<<endl;

    return 0;
}

int manh(int ax, int ay, int bx, int by){
    return ( ax > bx ? ax-bx : bx-ax ) + ( ay > by ? ay-by : by-ay );
}

int max1(int a, int b){
    return (a > b ? a : b);
}

int min1(int a, int b){
    return (a < b ? a : b);
}
