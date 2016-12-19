#include <iostream>
using namespace std;
void Input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void case1(int arr[],int n){
    if(n<=3){
        int min=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]<min)min=arr[i];
        }
    cout<<min;
    }
    return;
}
int main(){
    int N;
    cin>>N;
    if(N>1000 && N<1)return 0;
    int arr[N];
    Input(arr,N);
    for(int i=0;i<N;i++){
        if(arr[i]>=100)return 0;
    }
    case1(arr,N);
    return 0;
}
