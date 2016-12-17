#include<iostream>

using namespace std;
int main(){
int x,purChi=1,vtorChi=1;
int i=1,j=1,br=0;
cin>>x;
for(i=0;i<1000;i++){
purChi=i*i;
for(j=0;j<i;j++){
    vtorChi=j*j;
    if(purChi-vtorChi==x){
        br++;
    }
}
}
cout<<br<<endl;

for(i=0;i<1000;i++){
purChi=i*i;
for(j=0;j<i;j++){
    vtorChi=j*j;
    if(purChi-vtorChi==x){
        cout<<purChi<<" "<<vtorChi<<endl;
    }
}
}

return 0;
}
