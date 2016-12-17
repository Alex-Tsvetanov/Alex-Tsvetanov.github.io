#include<iostream>
using namespace std;
int input[100][4];
int delta[100][2];
int NPairs[100];
bool compared[100];
bool areEqual(int dX1,int dY1,int dX2,int dY2){
    if(dX1==0 && dX2==0){
        return 1;
    }
    if(dY1==0 && dY2==0){
        return 1;
    }
    if(dX1==0 && dX2!=0){
        return 0;
    }
    if(dX2==0 && dX1!=0){
        return 0;
    }
    if(dY1==0 && dY2!=0){
        return 0;
    }
    if(dY2==0 && dY1!=0){
        return 0;
    }
    dX1*=dY2;
    dX2*=dY1;
    if(dX1==dX2){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>input[i][0]>>input[i][1]>>input[i][2]>>input[i][3];
        if(input[i][0]<=input[i][2]){
            delta[i][0]=input[i][2]-input[i][0];
            delta[i][1]=input[i][3]-input[i][1];
        }
        if(input[i][0]>input[i][2]){
            delta[i][0]=input[i][0]-input[i][2];
            delta[i][1]=input[i][1]-input[i][3];
        }
    }
    for(int i=0;i<n;i++){
        if(compared[i]==0){
            compared[i]=1;
            NPairs[i]++;
            for(int j=i;j<n;j++){
                if(areEqual(delta[i][0],delta[i][1],delta[j][0],delta[j][1]) && compared[j]==0){
                    compared[j]=1;
                    NPairs[i]++;
                    //cout<<delta[i][0]<<delta[i][1]<<delta[j][0]<<delta[j][1]<<endl;
                }
            }
        }
    }
    int maxRes=0;
    for(int i=0;i<n;i++){
        if(NPairs[i]>maxRes){
            maxRes=NPairs[i];
        }
    }
    cout<<maxRes<<endl;
    return 0;
}
