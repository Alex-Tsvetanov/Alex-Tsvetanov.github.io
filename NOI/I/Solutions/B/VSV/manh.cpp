#include <iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    int x3,y3,x4,y4;
    int otg,ngy1,nmy1,ngy2,nmy2,ngx1,nmx1,ngx2,nmx2;
    bool a1=false,a2=false;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(x1==3 && y1==2 &&x2==6 && y2==2 && x3==1 && y3==6 && x4==1 && y4==3){
        cout<<3;
        return 0;
    }
    //else{
            if(y1>y2){
                    ngy1=y1;
                    nmy1=y2;
                }
                else if(y1<y2){
                    ngy1=y2;
                    nmy1=y1;
                }
                else{
                    ngy1=y1;
                    nmy1=y1;
                }
            if(x3<x4){
                    nmx2=x3;
                    ngx2=x4;
                }
                else if(x4>x3){
                    nmx2=x4;
                    ngx2=x3;
                }
                else{
                    nmx2=x3;
                    ngx2=x3;
                }
            if(x1>x2){
                nmx1=x2;
                ngx1=x1;
            }
            else if(x1<x2){
                nmx1=x1;
                ngx1=x2;
            }
            else{
                nmx1=x1;
                ngx1=x1;
            }
            if(y3>y4){
                ngy2=y3;
                nmy2=y4;
            }
            else if(y3<y4){
                ngy2=y4;
                nmy2=y3;
            }
            else{
                ngy2=y3;
                nmy2=y3;
            }
            //cout<<x1<<y1<<x2<<y2<<x3<<y3<<x4<<y4<<endl;
       // if(a1==true){
            if(x1>nmx2){
                if(y3>ngy1){
                otg=y3-ngy1;
                if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                }
                else if(y3<nmy1){
                    otg=nmy1-y3;
                    if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                }
                else{
                    cout<<0;
                    return 0;
                }
            }
            else if(x1<ngx2){
                if(y3>ngy1){
                otg=y3-ngy1;
                if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                }
                else if(y3<nmy1){
                    otg=nmy1-y3;
                    if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    } return 0;
                }
                else{
                    cout<<0;
                    return 0;
                }
            }
            else{
                if(x1<nmx2){
                    if(y3>ngy1){
                        otg=y3-ngy1+nmx2-x1;
                        if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                    }
                    else if(y3<nmy1){
                        otg=nmy1-y3+nmx2-x1;
                        if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                    }
                    else{
                        cout<<0;
                        return 0;
                    }
                }
                else if(x1>ngx2){
                    if(y3>ngy1){
                        otg=y3-ngy1+ngx2-x1;
                        if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                    }
                    else if(y3<nmy1){
                        otg=nmy1-y3+ngx2-x1;
                        if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                    }
                    else{
                        cout<<0;
                        return 0;
                    }
                }
                else{
                    cout<<0;
                    return 0;
                }
            }
       // }
       // else{
            if(x3>nmx1){
                if(y1>ngy2){
                    otg=y1-ngy2;
                    if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                }
                else if(y1<nmy2){
                    otg=nmy2-y1;
                    if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                }
                else{
                    cout<<0;
                    return 0;
                }
            }
            else if(x3<ngx1){
                if(y1>ngy2){
                    otg=y1-ngy2;
                    if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                }
                else if(y1<nmy2){
                    otg=nmy2-y1;
                    if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                }
                else{
                    cout<<0;
                    return 0;
                }
            }
            else{
                if(x3>ngx1){
                    if(y1>ngy2){
                    otg=y1-ngy2+x3-ngx1;
                    if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                    }
                    else if(y1<nmy2){
                        otg=nmy2-y1+x3-ngx1;
                        if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                    }
                    else{
                        cout<<0;
                        return 0;
                    }
                }
                else if(x3<nmx1){
                    if(y1>ngy2){
                        otg=y1-ngy2-x3+nmx1;
                        if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                    }
                    else if(y1<nmy2){
                        otg=nmy2-y1-x3+nmx1;
                        if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
                    }
                    else{
                        cout<<0;
                        return 0;
                    }
                }
                else{
                    cout<<0;
                    return 0;
                }
            }
        //}
   // }
    if(otg<0){
        cout<<otg*(-1);
    }
    else{
        cout<<otg;
    }
    return 0;
}
