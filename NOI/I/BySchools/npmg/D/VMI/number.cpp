#include<iostream>
using namespace std;
int number(int N,int M){
    int br = 0;
    int nto =0;
    int nto2 =0;
    for(int i=N;i<=M;i++){
       for(int j=1;j<i;j++){
        if(i%j == 0 && i/j == j+1 && i/j != nto || i%j == 0 && i/j == j-1 && i/j!=nto2){
            nto = j+1;
            nto2 = j;
            br++;
        }
       }
    }
    return br++;
}
int main(){
    int N,M;

    cin>>M>>N;
    cout<<number(M,N);
    cout<<endl;
    return 0;
}
