#include <iostream>

using namespace std;

int n;

int dst(int[], int, int);

int main(){
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int result = dst(arr, 0, 0);
    int temp = (n>1 ? dst(arr, 1, 0) : result);
    result = ( temp < result ? temp : result );
    temp = (n>2 ? dst(arr, 2, 0) : result);
    result = ( temp < result ? temp : result );
    cout<<result<<endl;
    /*cout<<"-1 "<<dst(arr, -1, 0)<<endl;

    cout<<dst(arr, 0, 0)<<" result"<<endl;
    cout<<dst(arr, 1, 0)<<" result"<<endl;
    cout<<dst(arr, 2, 0)<<" result"<<endl;*/
}

int dst(int arr[], int i, int curr){
    if(i>=n-1){
        curr+=arr[n-1];
        //if(i>n-1) cout<<"wat "<<i<<endl;
        return curr;
    }

    if(i>=0) curr+=arr[i];

    if(i==n-3) return curr;

    int dst1=999999, dst2=999999, dst3=999999;

    dst1 = (i+1<n ? dst(arr, i+1, curr) : curr);
    dst2 = (i+2<n ? dst(arr, i+2, curr) : curr);
    dst3 = (i+3<n ? dst(arr, i+3, curr) : curr);

    return (dst2 < dst1 ? (dst2 < dst3 ? dst2 : dst3) : (dst1 < dst3 ? dst1 : dst3) );
}
