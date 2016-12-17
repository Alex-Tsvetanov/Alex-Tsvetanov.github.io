#include<stdio.h>
#include<cmath>
#include<tgmath.h>
#define PI 3.14159265
#define fz 0.0000001
int N;
class line{
    double x;
    double y;
public:
    line(){
    }
    void setParam(int a,int b,int c,int d){
        if(a>c){
            x=a-c;
            y=b-d;
        }else if(c>a){
            x=c-a;
            y=d-b;
        }else{
            x=0;
            y=1;
        }
        normalize();
    };
    void normalize(){
        double length=sqrt(x*x+y*y);
        x/=length;
        y/=length;
    }
    double getAngle(){
        if(x!=0){
            return atan((double)y/x)*180.0d/PI;
        }
        return 90.0d;
    }
}lines[100];
double slope[100];
int slopes=0;
void addSlope(double a){
    bool b=true;
    for(int i=0;i<slopes&&b;i++){
        if((slope[i]<(a+fz))&&((slope[i]+fz)>a)){
            b=false;
        }
    }
    if(b){
        slope[slopes]=a;
        slopes++;
    }
}
int main(){
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        lines[i].setParam(a,b,c,d);
        addSlope(lines[i].getAngle());
    }
    printf("%d",slopes);
    return 0;
}
