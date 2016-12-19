#include<string>
#include<vector>
#include<set>
#include<iostream>
using namespace std;
int rem(vector<char> s, int n){
    int crnt=0;
    while(!s.empty()){
        while(crnt<n && (!s.empty())){
            crnt=10*crnt+s[s.size()-1]-'0';
            s.pop_back();
        }
        crnt%=n;
    }
    return crnt;
}
set<int> komb;
int dosega[100000];
int main(){
    int p;
    string n, f1, f2;
    cin>>p>>n>>f1>>f2;
    for(int i=0;i<n.size();i++){
        if(n[i]>='A'&&n[i]<='Z') n[i]='0'+n[i]-'A'+10;
    }
    char posl11='0', posl12='0', posl21='0', posl22='0';
    if(f1.size()>1){
        posl11=f1[f1.size()-2];
        if(posl11>='A' && posl11<='Z') posl11='0'+posl11-'A'+10;
    }
    if(f2.size()>1){
        posl21=f2[f2.size()-2];
        if(posl21>='A' && posl21<='Z') posl21='0'+posl21-'A'+10;
    }
    posl12=f1[f1.size()-1];
    posl22=f2[f2.size()-1];
    if(posl12>='A' && posl12<='Z'){
        posl12='0'+posl12-'A'+10;
    }
    if(posl22>='A' && posl22<='Z') posl22='0'+posl22-'A'+10;
    dosega[0]=(posl11-'0')*p+posl12-'0';
    dosega[1]=(posl21-'0')*p+posl22-'0';
    komb.insert(dosega[0]*1000+dosega[1]);
    int kombszminput=komb.size()-1;
    int i;
    for(i=2;i-1==komb.size();i++){
        char x=posl11, y=posl12;
        posl11=posl21;
        posl12=posl22;
        posl22=(posl12+y-'0'-'0')%p+'0';
        posl21=((posl12+y-'0'-'0')/p+(posl11+x-'0'-'0'))%p+'0';
        dosega[i]=(posl21-'0')*p+posl22-'0';
        komb.insert(dosega[i-1]*1000+dosega[i]);
    }
    int j;
    for(j=0;!(dosega[j]==dosega[i-2]&&dosega[j+1]==dosega[i-1]);j++){
    }
    vector<char> v;
    for(int i=n.size()-1;i>=0;i--){
        v.push_back(n[i]);
    }
    int res;
    for(res=rem(v, i-2)-j-1;res<0;res+=i){
    }
    dosega[res]/=p;
    dosega[res]%=p;
    if(dosega[res]<10){
        cout<<dosega[res]<<"\n";
    }else{
        char pochtiEGotovo='A'+dosega[res]-10;
        cout<<pochtiEGotovo<<"\n";
    }
    return 0;
}
