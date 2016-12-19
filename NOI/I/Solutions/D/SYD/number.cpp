#include<iostream>
using namespace std;
int main(){
int a,b,c,d=0;
cin>>a>>b;
for(int i=a;i<=b;i++){
    for(int j=2;j<i;j++){
        if(i%j==0){
            c=i/j;
            if(c==j+1 or j==c+1){
                d++;
                break;
            }
        }
    }
}
cout<<d;
}
