#include <iostream>
using namespace std;
int main (){
    long long sbora,sborb;
    sbora=0;
    sborb=0;
    char p,w,t,c,p1,w1,t1,c1;
    cin>>p>>w>>t>>c>>p1>>w1>>t1>>c1;
    if(p-'a'<26 and p-'a'>=0){
        sbora=sbora+((1+p)-'a');
    }else{
        long long pi;
        if(p==0){
            pi=0;
        }
        if(p==1){
            pi=1;
        }
        if(p==2){
            pi=2;
        }
        if(p==3){
            pi=3;
        }
        if(p==4){
            pi=4;
        }
        if(p==5){
            pi=5;
        }
        if(p==6){
            pi=6;
        }
        if(p==7){
            pi=7;
        }
        if(p==8){
            pi=8;
        }
        if(p==9){
            pi=9;
        }
        sbora=sbora+pi;
    }
    if(w-'a'<26 and w-'a'>=0){
        sbora=sbora+((1+w)-'a');
    }else{
        long long wi;
        if(w==0){
            wi=0;
        }
        if(w==1){
            wi=1;
        }
        if(w==2){
            wi=2;
        }
        if(w==3){
            wi=3;
        }
        if(w==4){
            wi=4;
        }
        if(w==5){
            wi=5;
        }
        if(w==6){
            wi=6;
        }
        if(w==7){
            wi=7;
        }
        if(w==8){
            wi=8;
        }
        if(w==9){
            wi=9;
        }
        sbora=sbora+wi;
    }
    if(t-'a'<26 and t-'a'>=0){
        sbora=sbora+((1+t)-'a');
    }else{
        long long ti;
        if(t==0){
            ti=0;
        }
        if(t==1){
            ti=1;
        }
        if(t==2){
            ti=2;
        }
        if(t==3){
            ti=3;
        }
        if(t==4){
            ti=4;
        }
        if(t==5){
            ti=5;
        }
        if(t==6){
            ti=6;
        }
        if(t==7){
            ti=7;
        }
        if(t==8){
            ti=8;
        }
        if(t==9){
            ti=9;
        }
        sbora=sbora+ti;
    }
    if(c-'a'<26 and c-'a'>=0){
        sbora=sbora+((1+c)-'a');
    }else{
        long long ci;
        if(c==0){
            ci=0;
        }
        if(c==1){
            ci=1;
        }
        if(c==2){
            ci=2;
        }
        if(c==3){
            ci=3;
        }
        if(c==4){
            ci=4;
        }
        if(c==5){
            ci=5;
        }
        if(c==6){
            ci=6;
        }
        if(c==7){
            ci=7;
        }
        if(c==8){
            ci=8;
        }
        if(c==9){
            ci=9;
        }
        sbora=sbora+ci;
    }
    if(p1-'a'<26 and p1-'a'>=0){
        sborb=sborb+((1+p1)-'a');
    }else{
        long long pa;
        if(p1==0){
            pa=0;
        }
        if(p1==1){
            pa=1;
        }
        if(p1==2){
            pa=2;
        }
        if(p1==3){
            pa=3;
        }
        if(p1==4){
            pa=4;
        }
        if(p1==5){
            pa=5;
        }
        if(p1==6){
            pa=6;
        }
        if(p1==7){
            pa=7;
        }
        if(p1==8){
            pa=8;
        }
        if(p1==9){
            pa=9;
        }
        sborb=sborb+pa;
    }
    if(w1-'a'<26 and w1-'a'>=0){
        sborb=sborb+((1+w1)-'a');
    }else{
        long long wa;
        if(w1==0){
            wa=0;
        }
        if(w1==1){
            wa=1;
        }
        if(w1==2){
            wa=2;
        }
        if(w1==3){
            wa=3;
        }
        if(w1==4){
            wa=4;
        }
        if(w1==5){
            wa=5;
        }
        if(w1==6){
            wa=6;
        }
        if(w1==7){
            wa=7;
        }
        if(w1==8){
            wa=8;
        }
        if(w1==9){
            wa=9;
        }
        sborb=sborb+wa;
    }
    if(t1-'a'<26 and t1-'a'>=0){
        sborb=sborb+((1+t1)-'a');
    }else{
        long long ta;
        if(t1==0){
            ta=0;
        }
        if(t1==1){
            ta=1;
        }
        if(t1==2){
            ta=2;
        }
        if(t1==3){
            ta=3;
        }
        if(t1==4){
            ta=4;
        }
        if(t1==5){
            ta=5;
        }
        if(t1==6){
            ta=6;
        }
        if(t1==7){
            ta=7;
        }
        if(t1==8){
            ta=8;
        }
        if(t1==9){
            ta=9;
        }
        sborb=sborb+ta;
    }
    if(c1-'a'<26 and c1-'a'>=0){
        sborb=sborb+((1+c1)-'a');
    }else{
        long long ca;
        if(c1==0){
            ca=0;
        }
        if(c1==1){
            ca=1;
        }
        if(c1==2){
            ca=2;
        }
        if(c1==3){
            ca=3;
        }
        if(c1==4){
            ca=4;
        }
        if(c1==5){
            ca=5;
        }
        if(c1==6){
            ca=6;
        }
        if(c1==7){
            ca=7;
        }
        if(c1==8){
            ca=8;
        }
        if(c1==9){
            ca=9;
        }
        sborb=sborb+ca;
    }






        if(p-'A'<26 and p-'A'>=0){
        sbora=sbora+(2*((1+p)-'A'));
    }else{
        long long pi;
        if(p==0){
            pi=0;
        }
        if(p==1){
            pi=1;
        }
        if(p==2){
            pi=2;
        }
        if(p==3){
            pi=3;
        }
        if(p==4){
            pi=4;
        }
        if(p==5){
            pi=5;
        }
        if(p==6){
            pi=6;
        }
        if(p==7){
            pi=7;
        }
        if(p==8){
            pi=8;
        }
        if(p==9){
            pi=9;
        }
        sbora=sbora+pi;
    }
    if(w-'A'<26 and w-'A'>=0){
        sbora=sbora+(2*((1+w)-'A'));
    }else{
        long long wi;
        if(w==0){
            wi=0;
        }
        if(w==1){
            wi=1;
        }
        if(w==2){
            wi=2;
        }
        if(w==3){
            wi=3;
        }
        if(w==4){
            wi=4;
        }
        if(w==5){
            wi=5;
        }
        if(w==6){
            wi=6;
        }
        if(w==7){
            wi=7;
        }
        if(w==8){
            wi=8;
        }
        if(w==9){
            wi=9;
        }
        sbora=sbora+wi;
    }
    if(t-'A'<26 and t-'A'>=0){
        sbora=sbora+(2*((1+t)-'A'));
    }else{
        long long ti;
        if(t==0){
            ti=0;
        }
        if(t==1){
            ti=1;
        }
        if(t==2){
            ti=2;
        }
        if(t==3){
            ti=3;
        }
        if(t==4){
            ti=4;
        }
        if(t==5){
            ti=5;
        }
        if(t==6){
            ti=6;
        }
        if(t==7){
            ti=7;
        }
        if(t==8){
            ti=8;
        }
        if(t==9){
            ti=9;
        }
        sbora=sbora+ti;
    }
    if(c-'A'<26 and c-'A'>=0){
        sbora=sbora+(2*((1+c)-'A'));
    }else{
        long long ci;
        if(c==0){
            ci=0;
        }
        if(c==1){
            ci=1;
        }
        if(c==2){
            ci=2;
        }
        if(c==3){
            ci=3;
        }
        if(c==4){
            ci=4;
        }
        if(c==5){
            ci=5;
        }
        if(c==6){
            ci=6;
        }
        if(c==7){
            ci=7;
        }
        if(c==8){
            ci=8;
        }
        if(c==9){
            ci=9;
        }
        sbora=sbora+ci;
    }
    if(p1-'A'<26 and p1-'A'>=0){
        sborb=sborb+(2*((1+p1)-'A'));
    }else{
        long long pa;
        if(p1==0){
            pa=0;
        }
        if(p1==1){
            pa=1;
        }
        if(p1==2){
            pa=2;
        }
        if(p1==3){
            pa=3;
        }
        if(p1==4){
            pa=4;
        }
        if(p1==5){
            pa=5;
        }
        if(p1==6){
            pa=6;
        }
        if(p1==7){
            pa=7;
        }
        if(p1==8){
            pa=8;
        }
        if(p1==9){
            pa=9;
        }
        sborb=sborb+pa;
    }
    if(w1-'A'<26 and w1-'A'>=0){
        sborb=sborb+(2*((1+w1)-'A'));
    }else{
        long long wa;
        if(w1==0){
            wa=0;
        }
        if(w1==1){
            wa=1;
        }
        if(w1==2){
            wa=2;
        }
        if(w1==3){
            wa=3;
        }
        if(w1==4){
            wa=4;
        }
        if(w1==5){
            wa=5;
        }
        if(w1==6){
            wa=6;
        }
        if(w1==7){
            wa=7;
        }
        if(w1==8){
            wa=8;
        }
        if(w1==9){
            wa=9;
        }
        sborb=sborb+wa;
    }
    if(t1-'A'<26 and t1-'A'>=0){
        sborb=sborb+(2*((1+t1)-'A'));
    }else{
        long long ta;
        if(t1==0){
            ta=0;
        }
        if(t1==1){
            ta=1;
        }
        if(t1==2){
            ta=2;
        }
        if(t1==3){
            ta=3;
        }
        if(t1==4){
            ta=4;
        }
        if(t1==5){
            ta=5;
        }
        if(t1==6){
            ta=6;
        }
        if(t1==7){
            ta=7;
        }
        if(t1==8){
            ta=8;
        }
        if(t1==9){
            ta=9;
        }
        sborb=sborb+ta;
    }
    if(c1-'A'<26 and c1-'A'>=0){
        sborb=sborb+(2*((1+c1)-'A'));
    }else{
        long long ca;
        if(c1==0){
            ca=0;
        }
        if(c1==1){
            ca=1;
        }
        if(c1==2){
            ca=2;
        }
        if(c1==3){
            ca=3;
        }
        if(c1==4){
            ca=4;
        }
        if(c1==5){
            ca=5;
        }
        if(c1==6){
            ca=6;
        }
        if(c1==7){
            ca=7;
        }
        if(c1==8){
            ca=8;
        }
        if(c1==9){
            ca=9;
        }
        sborb=sborb+ca;
    }
        if(sbora>=sborb){
        cout<<p<<w<<t<<c<<" "<<sbora;
    }else{
        cout<<p1<<w1<<t1<<c1<<" "<<sborb;
    }
    return 0;
}
