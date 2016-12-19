#include<iostream>
using namespace std;
int main(){
    long long m , n , broi , i , p , ob6to=0;
    cin>>m>>n;
    broi=n-m+1;
    long long chislo[broi];
    bool del[broi];
    for(i=0 ; i<broi ; i=i+1){
        del[i]=false;
        chislo[i]=m+i;
    }
    for(i=0 ; i<broi ; i=i+1){
        for(p=0 ; p<chislo[i] ; p=p+1){
            if(chislo[i]==p*(p+1)){
                del[i]=true;
            }
        }
    }
    for(i=0 ; i<broi ; i=i+1){
        if(del[i]==true){
            ob6to=ob6to+1;
        }
    }
    cout<<ob6to;
return 0;
}
