#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for(int k=0; k<n; k++){
    cin>>arr[k];
}
int j=n-1, i=0;
int otg=0;

int sumj=0, sumi=0, reshi=i, reshj=j;



while(i<j+1){
    while(sumi<=sumj&&i<=j){

        sumi+=arr[i];
        if(sumi==sumj){
            if(sumi>otg){ otg=sumi; reshi=i; reshj=j+1; }
    }

        i++;

}

    while(sumj<=sumi&& j>=i){

        sumj+=arr[j];
        if(sumj==sumi){
            if(sumi>otg){ otg=sumi; reshj=j; reshi=i-1;}
        }

        j--;

    }
}
if(otg==0){
cout<<otg<<endl;
return 0;
}

cout<<reshi+1+n-reshj<<endl;
return 0;

}
