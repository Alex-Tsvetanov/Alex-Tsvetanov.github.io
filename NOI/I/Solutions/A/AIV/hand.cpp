#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int workers[n];
    int minimum=-1;
    int maximum=0;

    for(int i=0;i<n;i++){
        cin>>workers[i];

        if(workers[i]==i){
            minimum++;
        }
        if(workers[i]==0){
            minimum=0;
        }

        if(workers[i]!=0){
            maximum++;
        }
        if(workers[i]!=0 and workers[i]>maximum){
            maximum=workers[i];
        }

    }
    cout<<maximum<<endl<<minimum;

    return 0;
}
