#include<iostream>
using namespace std;

struct to4ki{
    long long startX,startY,kraiX,kraiY;
}a,b;

int main(){
    long long i,curr,minn=-1,x,y,x1,y1;
    cin>>x>>y>>x1>>y1;
    a.startX=min(x,x1);
    a.startY=min(y,y1);
    a.kraiX=max(x,x1);
    a.kraiY=max(y,y1);
    cin>>x>>y>>x1>>y1;
    b.startX=min(x,x1);
    b.startY=min(y,y1);
    b.kraiX=max(x,x1);
    b.kraiY=max(y,y1);
    if(a.startX==a.kraiX){
        x=a.startX;
        if(b.startX==b.kraiX){
            x1=b.startX;
            curr=max(x,x1)-min(x,x1);
            if(curr<minn or minn==-1){
                minn=curr;
            }
        }else{
            y1=b.startY;
            for(y=a.startY;y<=a.kraiY;y++){
                for(x1=b.startX;x1<=b.kraiX;x1++){
                    curr=max(x,x1)-min(x,x1)+max(y,y1)-min(y,y1);
                    if(curr<minn or minn==-1){
                        minn=curr;
                    }
                }
            }
        }
    }else{
        y=a.startY;
        if(b.startY==b.kraiY){
            y1=b.startY;
            curr=max(y,y1)-min(y,y1);
            if(curr<minn or minn==-1){
                minn=curr;
            }
        }else{
            x1=b.startX;
            for(x=a.startX;x<=a.kraiX;x++){
                for(y1=b.startY;y1<=b.kraiY;y1++){
                    curr=max(x,x1)-min(x,x1)+max(y,y1)-min(y,y1);
                    if(curr<minn or minn==-1){
                        minn=curr;
                    }
                }
            }
        }

    }
    cout<<minn<<"\n";
    return 0;
}
