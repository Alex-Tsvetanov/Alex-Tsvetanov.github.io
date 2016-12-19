#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<queue>
#include<stack>
using namespace std;
long long ax1,ay1,ax2,ay2,bx1,bx2,by1,by2;
long long manh(long long x1,long long y1,long long x2,long long y2){
return abs(x1-x2)+abs(y1-y2);
}
long long m(long long x1,long long x2,long long x3){
if((x3>=x1 and x3<=x2)or(x3>=x2 and x3<=x1)){
return 1;
}else{
return 0;
}
}
long long mmiinn(long long a,long long b){
if(a>b){
    return b;
}
    return a;
}
int main(){
    cin>>ax1>>ay1>>ax2>>ay2>>bx1>>by1>>bx2>>by2;
    if(ax1==ax2){
        if(bx1==bx2){
            if(m(ay1,ay2,by1) or m(ay1,ay2,by2)){
                cout<<abs(ax1-bx1);
            }else{
                cout<<mmiinn(mmiinn(manh(ax1,ay1,bx1,by1),manh(ax1,ay1,bx2,by2)),mmiinn(manh(ax2,ay2,bx1,by1),manh(ax2,ay2,bx2,by2)));
            }
        }else{
            if(m(bx1,bx2,ax1)){
                if(m(ay1,ay2,by1)){
                cout<<0;
                }else{
                cout<<mmiinn(abs(ay1-by1),abs(ay2-by1));
                }
            }else{
                if(m(ay1,ay2,by1)){
                cout<<mmiinn(abs(bx1-ax1),abs(bx2-ax1));
                }else{
                cout<<mmiinn(mmiinn(manh(ax1,ay1,bx1,by1),manh(ax1,ay1,bx2,by2)),mmiinn(manh(ax2,ay2,bx1,by1),manh(ax2,ay2,bx2,by2)));
                }
            }
        }
    }else{
        if(bx1==bx2){
                //a=a^b;
                //b=a^b;
                //a=a^b;

                ax1=ax1^bx1;
                bx1=ax1^bx1;
                ax1=ax1^bx1;

                ay1=ay1^by1;
                by1=ay1^by1;
                ay1=ay1^by1;

                ax2=ax2^bx2;
                bx2=ax2^bx2;
                ax2=ax2^bx2;

                ay2=ay2^by2;
                by2=ay2^by2;
                ay2=ay2^by2;
            if(m(bx1,bx2,ax1)){
                if(m(ay1,ay2,by1)){
                cout<<0;
                }else{
                cout<<mmiinn(abs(ay1-by1),abs(ay2-by1));
                }
            }else{
                if(m(ay1,ay2,by1)){
                cout<<mmiinn(abs(bx1-ax1),abs(bx2-ax1));
                }else{
                cout<<mmiinn(mmiinn(manh(ax1,ay1,bx1,by1),manh(ax1,ay1,bx2,by2)),mmiinn(manh(ax2,ay2,bx1,by1),manh(ax2,ay2,bx2,by2)));
                }
            }
        }else{
            if(m(ax1,ax2,bx1) or m(ax1,ax2,bx2)){
                cout<<abs(ay1-by1);
            }else{
                cout<<mmiinn(mmiinn(manh(ax1,ay1,bx1,by1),manh(ax1,ay1,bx2,by2)),mmiinn(manh(ax2,ay2,bx1,by1),manh(ax2,ay2,bx2,by2)));
            }
        }
    }
    cout<<"\n";
return 0;
}
