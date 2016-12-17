#include<iostream>
using namespace std;
char a[8];
long long b[8],sbor1,sbor2;
int i;
int main(){
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    cin>>a[4]>>a[5]>>a[6]>>a[7];
    for(i=0;i<8;++i){
        if(a[i]>='a' and a[i]<='z'){
            b[i]=a[i]-96;
        }
        if(a[i]>='A' and a[i]<='Z'){
            b[i]=(a[i]-64)*2;
        }
        if(a[i]>='0' and a[i]<='9'){
            b[i]=a[i]-'0';
        }
    }
    sbor1=b[0]+b[1]+b[2]+b[3];
    sbor2=b[4]+b[5]+b[6]+b[7];
    if(sbor1>sbor2){
        cout<<a[0]<<a[1]<<a[2]<<a[3]<<" "<<sbor1;
    }
    if(sbor2>sbor1){
        cout<<a[4]<<a[5]<<a[6]<<a[7]<<" "<<sbor2;
    }
    if(sbor1==sbor2){
        cout<<a[0]<<a[1]<<a[2]<<a[3]<<" "<<0;
    }
return 0;
}
