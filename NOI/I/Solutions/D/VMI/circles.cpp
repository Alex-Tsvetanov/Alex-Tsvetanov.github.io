#include<iostream>
using namespace std;
int main(){
int a1[1000];
a1[0]=0;
a1[1]=6;
a1[2]=8;
a1[3]=9;
int a2[4];
a2[0]=1;
a2[1]=1;
a2[2]=2;
a2[3]=1;
int a,b;
char c;
int br=0,br2=0;
cin>>a;
cin>>b;
cin>>c;
int a10 = 0;
for(int i=0;i<4;i++){
    if((int)a/10 == a1[i]){
        br+=a2[i];
    }
    a10=(int)a/10;
    if((int)(a/10)-a10 == a1[i]/10){
        br+=a2[i];
    }
}
for(int i=0;i<4;i++){
    if((int)b/10 == a1[i]){
        br2+=a2[i];
    }
    a10=(int)b/10;
    if((int)(b/10)-a10 == a1[i]/10){
        br2+=a2[i];
    }
}
if(c=='+'){
    cout<<br+br2;
}
if(c=='-'){
    cout<<br-br2;
}
if(c=='*'){
    cout<<br*br2;
}

    return 0;
}
