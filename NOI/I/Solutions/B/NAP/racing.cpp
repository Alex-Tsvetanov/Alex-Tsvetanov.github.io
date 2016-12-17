#include <iostream>
using namespace std;
int minn(int a, int b, int c){
        int minx=100000;
        if(a<minx){ minx=a;}
        if(b<minx){minx=b;}
        if(c<minx){minx=c;}
        return minx;

}



int main(){
int n, minsbor=100000;
cin>>n;
const int m=n+2;
int arr[m];
for(int i=0; i<m; i++){
    arr[i]=101;
}

for (int i=0; i<n; i++){
    cin>>arr[i];
}

for(int i=0; i<3; i++){
    int sbor=arr[i];


    for(int j=i; j<n-2;){
        int curr=minn(arr[j+1], arr[j+2],arr[j+3]);
        sbor+=curr;

    if(curr==arr[j+1]){
        j+=1;
    }
    else if(curr==arr[j+2]){
        j+=2;
    }
    else{
        j+=3;
    }


    }
    if(sbor<minsbor){
        minsbor=sbor;
    }
}
cout<<minsbor<<endl;
return 0;



}
