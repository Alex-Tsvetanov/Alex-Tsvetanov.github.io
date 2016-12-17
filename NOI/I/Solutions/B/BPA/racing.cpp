#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int a;
int parseSeq(int arr[], int ind, int sum){
    if(a<ind+2) return sum;
    int sum1 = sum;
    if(ind+1<a){
        sum1 = parseSeq(arr,ind+1,sum+arr[ind+1]);
    }
    int sum2 = sum;
    if(ind+2<a){
        sum2 = parseSeq(arr,ind+2,sum+arr[ind+2]);
    }
    int sum3 = sum;
    if(ind+3<a){
        sum3 = parseSeq(arr,ind+3,sum+arr[ind+3]);
    }
    return min(min(sum1,sum2),sum3);
}

int main(){

    cin>>a;
    int arr[a+2];
    for(int i = 0; i<a; i++){
        cin>>arr[i];
    }
    if(a==1){
        arr[a] = 101;
        arr[a+1] = 101;
    }else if(a==2){
        arr[a+1] = 101;
    }
    if(a<=2){cout<<min(arr[0],min(arr[1],arr[2]));}else{
    int sum1 = parseSeq(arr,-1,0);
    cout<<sum1;
    }
}
