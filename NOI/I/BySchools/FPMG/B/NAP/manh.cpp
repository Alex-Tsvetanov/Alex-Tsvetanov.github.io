
#include <iostream>
#include <cmath>
using namespace std;

int main(){
int x1,y1,x2,y2,x3,y3,x5,y5;
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x5>>y5;

if((y1==y2&&y3!=y5)||(x1==x2&&x3!=x5)||(x3==x5&&x1!=x2)||(y3==y5&&y1!=y2)){

    if(y3==y5){
        swap(y1,y3);
        swap (y2,y5);
        swap(x1,x3);
        swap(x2,x5);
    }

        if(x3>=min(x1,x2)&&x3<=max(x1,x2)){

            int otg=(fabs(y1-y3)<=fabs(y1-y5))?fabs(y1-y3):fabs(y1-y5);
            cout<<otg<<endl;
            return 0;
        }
        else{

            int otgx=(fabs(x3-x1)<=fabs(x3-x2))?fabs(x3-x1):fabs(x3-x2);
            int otgy=(fabs(y1-y3)<=fabs(y1-y5))?fabs(y1-y3):fabs(y1-y5);
            cout<<otgx+otgy<<endl;
            return 0;
}
    }




if(y1==y2&&y3==y5){
    if((x1>=min(x3,x5)&&x1<=max(x3,x5))||(x2>=min(x3,x5)&&x2<=max(x3,x5))){
        int otg=fabs(y1-y3);
        cout<<otg<<endl;
        return 0;
    }
    else{
        int otgx=(fabs(max(x1,x2)-min(x3,x5))<=fabs((max(x3,x5)-min(x1,x2))))?fabs(max(x1,x2)-min(x3,x5)):fabs((max(x3,x5)-min(x1,x2)));
        int otgy=fabs(y1-y3);
        cout<<otgx+otgy<<endl;
        return 0;
    }
}


if(x1==x2&&x3==x5){
    if((y1>=min(y3,y5)&&y1<=max(y3,y5))||(y2>=min(y3,y5)&&y2<=max(y3,y5))){
        int otg=fabs(x1-x3);
        cout<<otg<<endl;
        return 0;
    }
    else{
        int otgy=(fabs(max(y1,y2)-min(y3,y5))<=fabs((max(y3,y5)-min(y1,y2))))?fabs(max(y1,y2)-min(y3,y5)):fabs((max(y3,y5)-min(y1,y2)));
        int otgx=fabs(x1-x3);
        cout<<otgx+otgy<<endl;
        return 0;
    }
}

}




