#include<iostream>
using namespace std;
int main() {
    char first[5], second[5];
    long long fs=0, ss=0;
    long long i;

    cin>>first;
    cin>>second;
    ///first summing
    for(i=0; i<4; i++) {
        if(first[i]>='a'&&first[i]<='z') {
            fs+=first[i]-('a'-1);
        }

        if(first[i]>='A'&&first[i]<='Z') {
            fs+=(first[i]-('A'-1))*2;
        }

        if(first[i]>='0'&&first[i]<='9') {
            fs+=first[i]-'0';
        }
    }
    ///second summing
    for(i=0; i<4; i++) {
        if(second[i]>='a'&&second[i]<='z') {
            ss+=second[i]-('a'-1);
        }

        if(second[i]>='A'&&second[i]<='Z') {
            ss+=(second[i]-('A'-1))*2;
        }

        if(second[i]>='0'&&second[i]<='9') {
            ss+=second[i]-'0';
        }
    }
    if(fs==ss) {
        cout<<0<<endl;
        return 0;
    }
    if(fs>ss) {
        cout<<first<<' '<<fs<<endl;
        return 0;
    }
    if(fs<ss) {
        cout<<second<<' '<<ss<<endl;
        return 0;
    }
}

