#include<iostream>
using namespace std;
int main (){
long long n,m,i,p=1,j,br=0;
cin>>m>>n;
for(i=m; i<=n; i++){
    while(p*p<=i){
        p++;
    }
    for(j=2; j<=p; j++){
        if(i%j==0){
            if(i/j==j+1){
                br++;
                j=p;
            }
        }
    }
}
cout<<br<<endl;
return 0;
}
