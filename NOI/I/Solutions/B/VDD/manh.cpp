#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int s1, s2;

    int z1, z2;
    int m1, m2;

    int x1, y1;
    cin>>x1>>y1;
    int x12, y12;
    cin>>x12>>y12;

    int x2, y2;
    cin>>x2>>y2;
    int x22, y22;
    cin>>x22>>y22;

    //Namirame (y1-y2)

    if(y1==y12){
        z1=y1;
        if(y2>y22){
            int p=y2;
            y2=y22;
            y22=p;
        }
        for(int i=y2; i<=y22; i++){
            if(i==z1){
                z2=i;
            }
        }
        if(y22<z1){
            z2=y22;
        }else if(y2>z1){
            z2=y2;
        }
        s1=abs(z1-z2);


    }else if(y2==y22){
        z1=y2;
        if(y1>y12){
            int p=y12;
            y12=y1;
            y1=p;
        }
        for(int i=y1; i<=y12; i++){
            if(i==z1){
                z2=i;
            }
        }
        if(y12<z1){
            z2=y12;
        }else if(y1>z1){
            z2=y1;
        }
        s1=abs(z1-z2);


    }

    //namirame (x1-x2)

        if(x1==x12){
        m1=x1;
        if(x2>x22){
            int p=x2;
            x2=x22;
            x22=p;
        }
        for(int i=x2; i<=x22; i++){
            if(i==m1){
                m2=i;
            }
        }
        if(x22<m1){
            m2=x22;
        }else if(x2>m1){
            m2=x2;
        }
        s2=abs(m1-m2);


    }else if(x2==x22){
        m1=x2;
        if(x1>x12){
            int p=x12;
            x12=x1;
            x1=p;
        }
        for(int i=x1; i<=x12; i++){
            if(i==m1){
                m2=i;
            }
        }
        if(x12<m1){
            m2=x12;
        }else if(x1>m1){
            m2=x1;
        }
        s2=abs(m1-m2);


    }

    cout<<s1+s2;
    cout<<endl;





}
