#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b, c, d, k, l, m, n,x1,y1,x2,y2,x1min,x1max,x2min,x2max,y1min,y1max,y2min,y2max;
    int put = 0;
    cin >> a >> b >> c >> d >> k >> l >> m >> n;
    if(a=c){
        x1 = a;
    }else{
    x1max = max(a, c);
    x1min = min(a, c);
    }
    if(b=d){
        y1 = b;
    }else{
    y1max = max(b, d);
    y1min = min(b, c);
    }
    if(k=m){
        x2 = k;
    }else{
        x2max = max(k, m);
        x2min = min(k, m);
         if(fabs(x1-x2min)>fabs(x1-x2max)){
           x2=x2max;
        }else{x2 = x2min;}
        }
    if(l=n){
        y2 = l;
    }else{
        y2max = max(l, n);
        y2min = min(l, n);
         if(fabs(y1-y2min)>fabs(y1-y2max)){
           y2=y2max;
        }else{y2 = y2min;}
    }
    if (a!=c){
         if(fabs(x2-x1min)>fabs(x2-x1max)){
           x1=x1max;
        }else{x1 = x1min;}
    }
    if (b!=d){
        if(fabs(y2-y1min)>fabs(y2-y1max)){
           y1=y1max;
        }else{y1 = y1min;}
    }
    if(x2min < x1 < x2max){
        put = fabs(y1-y2);
    }else if(y1min<y1<y2max){
        put = fabs(x1-x2);
    }else{
        put = fabs(x1-x2)+fabs(y1-y2);
    }
     cout << put << endl;
   /* if(a>c){x1min=c;x1max=a;} else x1min = a;x1max=c;
    if(b>d){y1min=d;y1max=b;} else y1min = b;y1max=d;
    if(k>m){x2min=m;x2max=k;} else x2min=k;x2max=m;
    if(l>n){y2min=n;y2max=l;} else y2min=l;y2max=n;
    if (a=c){
        x1=a;
        if(k=m){
            x2=k;
            if(x2>x1)put+=x2-x1;else put+=x1-x2;}
        else {
            y2=l;
            if(y2>y1)put+=y2-y1min; else put+=y1min-y2;}
    }else {
        y1=b;
        if(k=m){
            x2=k;
            if(x2>x1)put+=x2-x1;else put+=x1-x2;
        }else {y2=l;
        if(y2>y1min)put+=y2-y1min; else put+=y1min-y2;}
    }
    if (k=m){
        x2=k;
        if(a=c)x1=a;else y1=b;
        if(x2>x1)put+=x2-x1;else put+=x1-x2;
    }else{
        y2=l;
        if(a=c)x1=a;else y1=b;
        if(y2>y1)put+=y2-y1;else put+=y1-y2;
        }
*/



    return 0;
    }
