#include <iostream>
using namespace std;
int main(){
long long stoinost1=0,stoinost2=0;
char s[4],s1[4];
for(long long ivav=0;ivav<4;ivav++){
    cin>>s[ivav];
    if(s[ivav]>='a' and s[ivav]<='z'){
        stoinost1=stoinost1+((s[ivav]-'a')+1);
    }
    if(s[ivav]>='A' and s[ivav]<='Z'){
        stoinost1=stoinost1+(((s[ivav]-'A')+1)*2);
    }
    if(s[ivav]>='0' and s[ivav]<='9'){
        stoinost1=stoinost1+(s[ivav]-'0');
    }
}
for(long long ivav=0;ivav<4;ivav++){
    cin>>s1[ivav];
    if(s1[ivav]>='a' and s1[ivav]<='z'){
        stoinost2=stoinost2+((s1[ivav]-'a')+1);
    }
    if(s1[ivav]>='A' and s1[ivav]<='Z'){
        stoinost2=stoinost2+(((s1[ivav]-'A')+1)*2);
    }
    if(s1[ivav]>='0' and s1[ivav]<='9'){
        stoinost2=stoinost2+(s1[ivav]-'0');
    }
}
if(stoinost1>stoinost2){
    for(long long izi=0;izi<4;izi++){
        cout<<s[izi];
    }
    cout<<" "<<stoinost1<<"\n";
}
if(stoinost1<stoinost2){
    for(long long izi=0;izi<4;izi++){
        cout<<s1[izi];
    }
    cout<<" "<<stoinost2<<"\n";
}
if(stoinost1==stoinost2){
    cout<<"0"<<endl;
}
return 0;
}
/*Ac59qv71*/
