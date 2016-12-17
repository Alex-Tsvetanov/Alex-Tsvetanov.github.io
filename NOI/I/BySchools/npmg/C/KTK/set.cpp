#include<iostream>

using namespace std;
int main(){
    int nach[10000],kra[10000];
int n,nachalo[10000],krai[10000],i=0,j=0,brI=-1;
cin>>n;
for(i=0;i<n;i++){
    cin>>nachalo[i]>>krai[i];
}
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j!=i && nachalo[i]<=nachalo[j] && krai[i]>=krai[j]){
                brI++;
            }
        }
}
cout<<brI<<endl;
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j!=i && nachalo[i]<=nachalo[j] && krai[i]>=krai[j]){
                brI++;
                nach[brI]=nachalo[i];
                kra[brI]=krai[i];
                cout<<nach[brI]<<" "<<kra[brI]<<endl;
            }
        }
}

return 0;
}
