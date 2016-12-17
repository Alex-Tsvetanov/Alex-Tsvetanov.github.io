#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4,raz=0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(x1>x2){
        swap(x1,x2);
    }
    if(x3>x4){
        swap(x3,x4);
    }
    if(y1<y2){
        swap(y1,y2);
    }
    if(y3<y4){
        swap(y3,y4);
    }
    if(y1==y2 && y3==y4){
        if(y1==y3){
            int absX=0;
            if(x4<x1){
                absX=abs(x4-x1);
            }
            if(x2<x3){
                absX=abs(x2-x3);
            }
            raz = raz + absX;
        } else if(x4>=x1 && x3<=x2){
            raz = raz + abs(y4 - y1);
        } else {
            int absX = 0;
            if(x4<x1){
                absX=abs(x4-x1);
            }
            if(x2<x3){
                absX=abs(x2-x3);
            }
            raz = raz + abs(y4 - y1) + absX;
        }


    }
    if(y1==y2 && y3!=y4){
        if(x3>=x1 && x3<=x2){
            int absY=0;
            if(y3<y1){
                absY=abs(y3-y1);
            }
            if(y3>y1){
                absY=abs(y4-y1);
            }
            raz = raz + absY;
        } else if(y4>=y2 && y3<=y2){
            int absX=0;
            if(x3>x2){
                absX = abs(x2 - x3);
            }
            if(x3<x1){
                absX = abs(x1 - x3);
            }
            raz = raz + absX;
        } else {
            int absX=0,absY=0;
            if(x3>x2){
                absX = abs(x2 - x3);
            }
            if(x3<x1){
                absX = abs(x1 - x3);
            }
            if(y3<y1){
                absY=abs(y3-y1);
            }
            if(y3>y1){
                absY=abs(y4-y1);
            }
            raz = raz + absX + absY;
        }
    }
    if(y1!=y2 && y3==y4){
       if(y3>=y1 && y3<=y2){
          int absX=0;
          if(x4<x1){
            absX = abs(x1-x4);
          }
          if(x2<x3){
            absX = abs(x2-x3);
          }
          raz = raz + absX;
       } else if(x4>=x1 && x3<=x1){
           int absY=0;
           if(y3>y1){
               absY = abs(y1-y3);
           }
           if(y3<y2){
               absY = abs(y2-y3);
           }
           raz = raz + absY;
       } else {
           int absX=0,absY=0;
           if(x4<x1){
            absX = abs(x1-x4);
          }
          if(x2<x3){
            absX = abs(x2-x3);
          }
           if(y3>y1){
               absY = abs(y1-y3);
           }
           if(y3<y2){
               absY = abs(y2-y3);
           }

           raz = raz + absX + absY;
       }
    }
    if(y1!=y2 && y3!=y4){
        if(x3==x1){
            int absY=0;
            if(x3>x2){
                absY = abs(y3-y2);
            }
            if(x4<x1){
                absY = abs(y4-y1);
            }
            raz = raz + absY;
        } else if(x4>=x1 && x3<=x2){
            raz = raz + abs(x3-x1);
        } else {
           int absX=0,absY=0;
           if(x3>x2){
              absY = abs(y3-y2);
           }
           if(x4<x1){
              absY = abs(y4-y1);
           }
           if(y4>y1){
              absX = abs(x1-x4);
           }
           if(y3<y2){
              absX = abs(x2-x3);
           }
           raz = raz + absX + absY;
        }
    }
    cout<<raz;




    return 0;
}
