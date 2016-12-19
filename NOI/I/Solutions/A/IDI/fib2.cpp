#include<iostream>
#include<string>
using namespace std;
const int MAXNUM=270;
bool useddig[MAXNUM][MAXNUM];
int mem[MAXNUM*MAXNUM];
int cntdig=0;
int p;
int num(string f){
    int answer=0;
    if(f.size()<2){
        f="0"+f;
    }
    for(int i=f.size()-2;i<f.size();i++){
        answer*=p;
        if(f[i]>='A'&&f[i]<='F'){
            answer+=10+f[i]-'A';
        }else{
            answer+=f[i]-'0';
        }
    }
    return answer;
}

int rem(string n,int num){
    int current=0;
    for(int i=0;i<n.size();i++){
        current*=10;
        current+=n[i]-'0';
        current%=num;
    }
    return current;
}

void ans(int number){
    if(number>=10){
        cout<<char('A'+number-10)<<"\n";
    }else{
        cout<<number<<"\n";
    }
}
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin>>p;
    string n,f1,f2;
    cin>>n>>f1>>f2;

    int prelast=num(f1),last=num(f2);
    mem[cntdig++]=prelast;
    while(!useddig[prelast][last]){
        useddig[prelast][last]=true;
        mem[cntdig++]=last;
        int helper=last;
        last+=prelast;
        last%=(p*p);
        prelast=helper;
    }
    cntdig--;

    int order=rem(n,cntdig);
    order=(order+cntdig-1)%cntdig;
    ans((mem[order]/p)%p);
    return 0;
}
