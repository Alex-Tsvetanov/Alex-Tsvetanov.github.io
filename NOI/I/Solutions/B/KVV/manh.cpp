#include<iostream>
using namespace std;

int modul(int a){
  int b;
if(a>0){
    b=a;
}
else{
  b=-a;
}
return b;
}
int min2(int a,int b){
int c;
if(a>b){
 c=b;

}else{
c=a;
}

return c;
}

 int min4(int a,int b,int c,int d){
 int x=min2(a,b);
 int y=min2(c,d);
 int z=min2(x,y);

 return z;
 }
int manhd(int x1,int y1,int x2,int y2){
int a=modul(x1-x2)+modul(y1-y2);


return a;
}


int main(){
int x1;
int x2;
int y1;
int y2;
int a1;
int a2;
int b1;
int b2;
cin>>x1>>y1>>x2>>y2;
cin>>a1>>b1>>a2>>b2;
int c;
if(a1>=a2){

}else{
c=a1;
a1=a2;
a2=c;

}
if(b1>=b2){

}else{
c=b1;
b1=b2;
b2=c;

}
if(x1>=x2){

}else{
c=x1;
x1=x2;
x2=c;

}
if(y1>=y2){

}else{
c=y1;
y1=y2;
y2=c;

}
if(x1==x2&&a1==a2){
  if(b1<=y1&&b1>y2||b2<=y1&&b2>y2||y1<=b1&&y1>b2||y2<=b1&&y2<b2){
    c=modul(x1-a1);
  }else{
  c=min4( manhd(x1,y1,a1,b1),manhd(x1,y1,a2,b2) ,manhd(x2,y2,a1,b1),manhd(x2,y2,a2,b2));

  }
}
else if(y1==y2&&b1==b2){
    if(a1<=x1&&a1>x2||a2<=x1&&a2>x2||x1<=a1&&x1>a2||x2<=a1&&x2<a2){
    c=modul(y1-b1);
  }else{
  c=min4( manhd(x1,y1,a1,b1),manhd(x1,y1,a2,b2) ,manhd(x2,y2,a1,b1),manhd(x2,y2,a2,b2));

  }
}
else if(x1==x2&&b1==b2){
     if(b1<=y1&&b1>y2){
        c=min2(modul(x1-a1),modul(x1-a2));
     }else{

      c=min4( manhd(x1,y1,a1,b1),manhd(x1,y1,a2,b2) ,manhd(x2,y2,a1,b1),manhd(x2,y2,a2,b2));
     }

}
else if(y1==y2&&a1==a2){
    if(a1<=x1&&x1>a2){
        c=min2(modul(y1-b1),modul(y2-b2));
    }else{

    c=min4( manhd(x1,y1,a1,b1),manhd(x1,y1,a2,b2) ,manhd(x2,y2,a1,b1),manhd(x2,y2,a2,b2));
    }


}
cout<<c<<endl;
}

