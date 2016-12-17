#include <iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    int s1=0,s2=0;
    int maxCount=0;


    for(int i=0; i<n-1; i++){
        s1+=arr[i];

        for(int j=n-1; j>i; j--){
            s2+=arr[j];

            if(s1==s2){
                //cout<<" result "<<i<<" "<<j<<" "<<s1<<endl;

                maxCount = (i+1+n-j > maxCount ? i+1+n-j : maxCount);
            }
        }
        s2=0;
    }

    cout<<maxCount<<endl;

    return 0;

}
