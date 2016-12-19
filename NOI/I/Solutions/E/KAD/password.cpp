#include<iostream>
using namespace std;
int main(){
    char a,b,c,d,a1,b1,c1,d1,sa,sb,sc,sd,sa1,sb1,sc1,sd1;
    cin>>a>>b>>c>>d>>a1>>b1>>c1>>d1;
    sa=a;
    sb=b;
    sc=c;
    sd=d;
    sa1=a1;
    sb1=b1;
    sc1=c1;
    sd1=d1;
    int n1,n2,n3,n4,x1,x2,x3,x4,sbor1,sbor2;
    if(a>='a' and a<='z'){
            a=a-('a'-1);
            n1=a;
    }else if(a>='A' and a<='Z'){
            a=(a-('A'-1))*2;
            n1=a;
    }else if(a>='0' and a<='9'){
            a=a-'0';
            n1=a;
    }
    if(b>='a' and b<='z'){
            b=b-('a'-1);
            n2=b;
    }else if(b>='A' and b<='Z'){
            b=(b-('A'-1))*2;
            n2=b;
    }else if(b>='0' and b<='9'){
            b=b-'0';
            n2=b;
    }
    if(c>='a' and c<='z'){
            c=c-('a'-1);
            n3=c;
    }else if(c>='A' and c<='Z'){
            c=(c-('A'-1))*2;
            n3=c;
    }else if(c>='0' and c<='9'){
            c=c-'0';
            n3=c;
    }
    if(d>='a' and d<='z'){
            d=d-('a'-1);
            n4=d;
    }else if(d>='A' and d<='Z'){
            d=(d-('A'-1))*2;
            n4=d;
    }else if(d>='0' and d<='9'){
            d=d-'0';
            n4=d;
    }
    if(a1>='a' and a1<='z'){
            a1=a1-('a'-1);
            x1=a1;
    }else if(a1>='A' and a1<='Z'){
            a1=(a1-('A'-1))*2;
            x1=a1;
    }else if(a1>='0' and a1<='9'){
            a1=a1-'0';
            x1=a1;
    }
    if(b1>='a' and b1<='z'){
            b1=b1-('a'-1);
            x2=b1;
    }else if(b1>='A' and b1<='Z'){
            b1=(b1-('A'-1))*2;
            x2=b1;
    }else if(b1>='0' and b1<='9'){
            b1=b1-'0';
            x2=b1;
    }
    if(c1>='a' and c1<='z'){
            c1=c1-('a'-1);
            x3=c1;
    }else if(c1>='A' and c1<='Z'){
            c1=(c1-('A'-1))*2;
            x3=c1;
    }else if(c1>='0' and c1<='9'){
            c1=c1-'0';
            x3=c1;
    }
    if(d1>='a' and d1<='z'){
            d1=d1-('a'-1);
            x4=d1;
    }else if(d1>='A' and d1<='Z'){
            d1=(d1-('A'-1))*2;
            x4=d1;
    }else if(d1>='0' and d1<='9'){
            d1=d1-'0';
            x4=d1;
    }
    sbor1=n1+n2+n3+n4;
    sbor2=x1+x2+x3+x4;
    if(sbor1>sbor2){
            cout<<sa<<sb<<sc<<sd<<" "<<sbor1<<endl;
    }
    if(sbor2>sbor1){
            cout<<sa1<<sb1<<sc1<<sd1<<" "<<sbor2<<endl;
    }
    if(sbor1==sbor2){
            cout<<0<<endl;
    }
return 0;
}
