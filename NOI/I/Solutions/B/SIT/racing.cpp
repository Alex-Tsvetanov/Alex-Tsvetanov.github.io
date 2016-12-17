#include<iostream>
#include<algorithm>
using namespace std;
int chisla[1000];
int otg[1000];
int novi[3];
int main(){
        ios_base::sync_with_stdio(false);
    cin.tie(0);
int n,mal,cr=0;
cin>>n;

for(int i=0;i<n;i++){
    cin>>chisla[i];
    if(i<3){
        if(i==0){
            mal=chisla[i];
            cr=0;
        }else{
        if(mal>chisla[i]){
            mal=chisla[i];
            cr=i;
        }
        }
    }
}
if(n<3){
    cout<<0;
    goto kr;
}
for(int i=cr;i<3;i++){
    otg[i]=mal;
}
if(cr==1){
    otg[0]=chisla[0];
}
if(cr==2){
        if(otg[0]<otg[1]){
    otg[0]=chisla[0];
    otg[1]=chisla[0];
        }else{
        otg[0]=chisla[1];
    otg[1]=chisla[1];
        }
}
for(int i=3;i<n;i++){
    novi[0]=chisla[i]+chisla[i-3];
    if(i>=4){
     novi[1]=chisla[i-1]+chisla[i-4];
    }else{
    novi[1]=chisla[i-1];
    }
    if(i>=5){
      novi[2]=chisla[i-2]+chisla[i-5];
    }else{
    novi[2]=chisla[i-2];
    }

sort(novi,novi+3);
otg[i]=novi[0];
}
cout<<otg[n-1];
kr:;
cout<<"\n";
return 0;
}
