#include <iostream>
using namespace std;
void Input(int *arr,int n){
    for(int i=0;i<n;i++)cin>>*(arr+i);
}

int task(int *arr,int n){
    int br=0;

}
int Task(int *arr,int n){
    int br=0;
    for(int i=0;i<n-1;i++){
        int sum1=0,prom=i+1;
        for(int v=0;v<=i;v++){
            sum1+=*(arr+v);
        }

        for(int j=i+1;j<=n;j++){
            int sum2=0;
            for(int w=j;w<n;w++){
                sum2+=*(arr+w);
            }
            if(sum1==sum2)prom+=n-j;

        }
        if(prom>br)br=prom;
    }
    return br;

}

int main(){
    int n;
    cin>>n;
    if(n<=2 && n>=200000)return 0;
    int arr[n];
    Input(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]>10000)return 0;
    }
    cout<<Task(arr,n);
    return 0;


}

