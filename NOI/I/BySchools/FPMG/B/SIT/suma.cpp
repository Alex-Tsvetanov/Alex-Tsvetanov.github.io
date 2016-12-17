#include<iostream>
using namespace std;
long long chisla[200000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
long long n,gl=0,suma=0,suma2=0,otg=0,a=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>chisla[i];
   gl+=chisla[i];
}
for(int i=0;suma<gl-suma;i++){
    if(i==0){
        suma=chisla[i];
    }else{
    suma+=chisla[i];
    }
    if(suma==gl-suma){
        cout<<n;
        goto kr;
    }
     suma2=gl-suma;
     a=0;
    for(int j=i+1;suma2>suma;j++){

a++;
        suma2-=chisla[j];

        if(suma2==suma){
            otg=n-a;

            goto sledv;
        }
    }
    sledv:;
}
cout<<otg;
kr:;
cout<<"\n";
return 0;
}
