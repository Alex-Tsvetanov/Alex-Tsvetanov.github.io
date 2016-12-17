#include<iostream>
using namespace std;
long long bestSum=9999999;
long long n,a[1024];
void giveAnswer(int add,int currentPosition,int currentSum){
    if(add==0){
        giveAnswer(1,currentPosition+1,0);
        giveAnswer(2,currentPosition+2,0);
        giveAnswer(3,currentPosition+3,0);
    }else{
        currentSum+=a[currentPosition];
    }
    if(currentPosition>n){
        if(currentSum<bestSum)bestSum=currentSum;
        return;
    }
    if(add==1){
        giveAnswer(3,currentPosition+3,currentSum);
    }
    if(add==2){
        giveAnswer(2,currentPosition+2,currentSum);
        giveAnswer(3,currentPosition+3,currentSum);
    }
    if(add==3){
        giveAnswer(1,currentPosition+1,currentSum);
        giveAnswer(2,currentPosition+2,currentSum);
        giveAnswer(3,currentPosition+3,currentSum);
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    giveAnswer(0,0,0);
    cout<<bestSum<<endl;

    return 0;
}
