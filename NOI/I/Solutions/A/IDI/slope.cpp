#include<iostream>
using namespace std;
int deltas[101][2];
bool gone[101];
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){

        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if(x>a){
            swap(x,a);
            swap(y,b);
        }
        if(x==a&&y>b){
            swap(y,b);
        }
        deltas[i][0]=a-x;
        deltas[i][1]=b-y;
    }
    int answer=0;
    for(int i=0;i<n;i++){
        if(!gone[i]){
            answer++;
            for(int j=i+1;j<n;j++){
                if(deltas[i][1]*deltas[j][0]==deltas[i][0]*deltas[j][1]){
                    gone[j]=true;
                }
            }
        }
    }
    cout<<answer<<"\n";
}
