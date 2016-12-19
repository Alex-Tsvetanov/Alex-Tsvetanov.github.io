#include<iostream>
using namespace std;
int main(){
    long long a,b,obA,obB,obCh,ch;
    cin>>a>>b;
    if(a>b){
        ch=a*10+b;
    }
    if(a<b){
        ch=b*10+a;
    }
    if(a==b){
        ch=a*10+b;
    }
    if(a==1 || a==8){
        obA=a;
    }
    if(b==1 || b==8){
        obB=b;
    }
    if(a==6){
        obA=9;
    }
    if(a==9){
        obA=6;
    }
    if(b==6){
        obB=9;
    }
    if(b==9){
        obB=6;
    }
    if(obA>obB){
        obCh=obA*10+obB;
    }
    if(obA<obB){
        obCh=obB*10+obA;
    }
    if(obA==obB){
        obCh=obB*10+obA;
    }
    if(obCh<=ch){
        cout<<ch;
    }else{
        cout<<obCh;
    }
    cout<<endl;
return 0;
}
