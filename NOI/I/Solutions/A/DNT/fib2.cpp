#include<iostream>
using namespace std;
long long BaseNToDecimalLast2(string n,int base){
    int pow=1;
    long long res=0;
    for(int i=n.size()-1,j=0;i>=0 && j<2;i--,j++){
        if(n[i]>='0' && n[i]<='9'){
            res+=(n[i]-'0')*pow;
         }else if(n[i]>='A' && n[i]<='Z'){
            res+=(n[i]-'A'+10)*pow;

        }else{
            break;
        }
        pow*=base;
    }
    return res;
}
string DecToBaseN(int n,int base){
    string res="";
    while(n>0){
        int digit=n%base;
        if(digit>=0 && digit<=9){
            res.push_back(digit+'0');
        }
        if(digit>=10 && digit<=20){
            res.push_back(digit+'A'-10);
        }
        n/=base;
    }
    for(int i=0;i<res.size()/2;i++){
        char buf=res[i];
        res[i]=res[res.size()-i-1];
        res[res.size()-i-1]=buf;
    }
    return res;
}
int main(){
    int B;
    long long P;
    string f1,f2;
    cin>>B>>P;
    cin>>f1>>f2;
    int lastTwoDigitsMax=B*B*B;
    int c1=BaseNToDecimalLast2(f1,B)%lastTwoDigitsMax,c2=BaseNToDecimalLast2(f2,B)%lastTwoDigitsMax;
    int c3=c1+c2;
    if(P==2){
        c3=c2;
        string res=DecToBaseN(c3,B);
        char ans=res[res.size()-2];
        if((ans>='0' && ans<='9') || (ans>='A' && ans<='Z')){
            cout<<ans;
        }else{
            cout<<"0";
        }
        cout<<endl;
        return 0;
    }
    if(P==1){
        c3=c1;
        string res=DecToBaseN(c3,B);
        char ans=res[res.size()-2];
        if((ans>='0' && ans<='9') || (ans>='A' && ans<='Z')){
            cout<<ans;
        }else{
            cout<<"0";
        }
        cout<<endl;
        return 0;
    }
    //cout<<c1<<" "<<DecToBaseN(c1,B)<<endl;
    //cout<<c2<<" "<<DecToBaseN(c2,B)<<endl;
    for(long long i=3;i<P;i++){
        //cout<<c3<<" "<<DecToBaseN(c3,B)<<endl;
        c1=c2;
        c2=c3;
        c3=(c1+c2)%lastTwoDigitsMax;
    }
    //cout<<c3<<" "<<DecToBaseN(c3,B)<<endl;
    string res=DecToBaseN(c3,B);
    char ans=res[res.size()-2];
    if((ans>='0' && ans<='9') || (ans>='A' && ans<='Z')){
        cout<<ans;
    }else{
        cout<<"0";
    }
    cout<<endl;
    return 0;
}
