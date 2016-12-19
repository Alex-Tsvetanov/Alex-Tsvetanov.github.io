#include<iostream>
using namespace std;
int main(){
char a[8];
long long b,c,d[8],stoinost1,stoinost2;
for(b=0;b<8;b++){
    cin>>a[b];
    if('a'<=a[b] and a[b]<='z'){
        c=a[b];
        c=c-96;
        d[b]=c;
    }
    if('A'<=a[b] and a[b]<='Z'){
        c=a[b];
        c=(c-64)*2;
        d[b]=c;
    }
    if('0'<=a[b] and a[b]<='9'){
        c=a[b];
        c=c-48;
        d[b]=c;
    }
}
stoinost1=d[0]+d[1]+d[2]+d[3];
stoinost2=d[4]+d[5]+d[6]+d[7];
if(stoinost1>stoinost2){
    cout<<a[0]<<a[1]<<a[2]<<a[3]<<" "<<stoinost1;
}
if(stoinost1==stoinost2){
    cout<<0;
}
if(stoinost1<stoinost2){
    cout<<a[4]<<a[5]<<a[6]<<a[7]<<" "<<stoinost2;
}
return 0;
}

