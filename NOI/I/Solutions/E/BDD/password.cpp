#include<iostream>
using namespace std;
int main (){
    long long sbor1,sbor2,vuvedeni,newv[8];
    char vhod[8],a[8];
    for(vuvedeni=0;vuvedeni<8;vuvedeni=vuvedeni+1){
        cin>>vhod[vuvedeni];
        a[vuvedeni]=vhod[vuvedeni];
    }
    for(vuvedeni=0;vuvedeni<8;vuvedeni=vuvedeni+1){
        if(vhod[vuvedeni]>='a' && vhod[vuvedeni]<='z'){
            newv[vuvedeni]=vhod[vuvedeni]-'a'+1;
        }else{
            if(vhod[vuvedeni]>='A' && vhod[vuvedeni]<='Z'){
                newv[vuvedeni]=(vhod[vuvedeni]-'A'+1)*2;
            }else{
                if(vhod[vuvedeni]>='0' && vhod[vuvedeni]<='9'){
                    newv[vuvedeni]=vhod[vuvedeni]-'0';
                }
            }
        }
    }
    sbor1=newv[0]+newv[1]+newv[2]+newv[3];
    sbor2=newv[4]+newv[5]+newv[6]+newv[7];
    if(sbor1>sbor2){
        cout<<a[0]<<a[1]<<a[2]<<a[3]<<" "<<sbor1;
    }
    if(sbor2>sbor1){
        cout<<a[4]<<a[5]<<a[6]<<a[7]<<" "<<sbor2;
    }
    if(sbor1==sbor2){
        cout<<0;
    }
return 0;
}
