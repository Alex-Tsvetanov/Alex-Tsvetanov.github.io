#include<iostream>
using namespace std;
int poleX,poleY,N,T;
int sq[11011][4];
int pointX[11011],pointY[11011];
long long sqTotalLice[11011];
long long sqLice[11011];
int sqIn[11011];
int findSq(int x,int y){
    int i=y-1;
    int res=0;
    bool foundSq=false;
    for(;i>0&&!foundSq;i--){
        int add=0;
        for(int j=1;j<=N&&!foundSq;j++){
            if(i==sq[j][1]&&sq[j][0]<=x&&x<=sq[j][0]+sq[j][2]){
                foundSq=true;
                res=j;
                break;
            }
            if(i==sq[j][1]+sq[j][3]&&sq[j][0]<=x&&x<=sq[j][0]+sq[j][2]){
                add=sq[j][3];
                break;
            }
        }

        i-=add;
    }
    return res;
}
int main(){
    cin>>sq[0][2]>>sq[0][3]>>N;
    sq[0][0]=0;sq[0][1]=0;
    sqTotalLice[0]=sq[0][2]*sq[0][3];
    sqLice[0]=sqTotalLice[0];
    for(int i=1;i<=N;i++){
        for(int j=0;j<4;j++){
            cin>>sq[i][j];
        }
        sqTotalLice[i]=sq[i][2]*sq[i][3];
        sqLice[i]=sqTotalLice[i];
    }
    for(int i=1;i<=N;i++){
        sqIn[i]=findSq(sq[i][0],sq[i][1]);

    }
    for(int i=1;i<=N;i++){
        sqLice[sqIn[i]]-=sqTotalLice[i];
    }
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>pointX[i]>>pointY[i];
    }
    for(int i=0;i<T;i++){
        cout<<sqLice[ findSq(pointX[i],pointY[i]) ];
        if(i+1!=T){
            cout<<endl;
        }
    }
    return 0;
}
