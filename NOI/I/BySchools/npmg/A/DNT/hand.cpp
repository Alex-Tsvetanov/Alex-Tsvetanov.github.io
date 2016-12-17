#include<iostream>
#include<vector>
using namespace std;
vector<int> inp;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        inp.push_back(temp);
    }
    int maxShakes=0,minShakes=0;
    for(int i=0;i<n;i++){
        if(inp[i]>0){
            maxShakes++;
        }
        if(maxShakes<inp[i]){
            maxShakes=inp[i];
        }
        if(i==inp[i] && inp[i]!=0){
            minShakes++;
        }
        //cout<<maxShakes<<" "<<inp[i]<<endl;
    }
    cout<<maxShakes<<endl<<minShakes<<endl;
    return 0;
}
