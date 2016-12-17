#include<iostream>
using namespace std;
int main(){
    long long x, a, b, br=0, za[100], zb[100], zbr=0, i;
    cin>>x;
    for(i=0;i<100;i++){
        za[i]=0;
        zb[i]=0;
    }
    for(a=0;a<x;a++){
        for(b=0;b<a;b++){
            if((a*a)-(b*b)==x){
                br++;
                za[zbr]=a*a;
                zb[zbr]=b*b;
                zbr++;
            }
        }
    }
    cout<<br<<endl;
    if(br=0){
        return 0;
    }
    for(i=0;i<100;i++){
        if(za[i]!=0){
                cout<<za[i]<<" "<<zb[i]<<endl;
        }else{
            return 0;
        }
    }
    return 0;
}
