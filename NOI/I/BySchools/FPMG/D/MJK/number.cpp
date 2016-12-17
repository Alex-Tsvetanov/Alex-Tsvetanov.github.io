#include<iostream>
using namespace std;
int main()
{
    int M,N,a=0,j;

    cin>>M>>N;

    for(int x=M;x<=N;x++){
        for(int i=1;i<x;i++){

            j=i+1;

            if(x==i*j) a++;
        }
    }

    cout<<a<<endl;

}
