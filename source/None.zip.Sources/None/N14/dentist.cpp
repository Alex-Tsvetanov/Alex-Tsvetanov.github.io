#include<iostream>
using namespace std;
int main(){
    int a[1000],b[1000];
    int i=0;
for(;cin;i++){
cin>>a[i]>>b[i];
}
int maxa=0,maxai=0;
for(int j=0;j<i;j++){
    if(a[j]>maxa){
        maxa=a[j];
        maxai=j;
    }
}
cout<<b[maxai];
    return 0;
}
