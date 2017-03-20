#include<iostream>
using namespace std;
int main() {
    long long kolkoSaMinali[22000];
    long long mesec[12]={0,31,59,90,120,151,181,212,243,273,304,334};
    long long start[4]={0,0,0,0},n;
    string data[4];
    for(int a=0; a<4; a++) {
        cin>>data[a];
        for(int b=0; data[a][b]!='/'; b++) {
            n=data[a][b]-'0';
            start[a]*=10;
            start[a]+=n;
            if(data[a][b+1]=='/') {
                n=b+2;
            }
        }
        for(int b=n; b<data[a].length(); b++) {
            if(n==b) {
                n=0;
            }
            n*=10;
            n+=data[a][b]-'0';
        }
        start[a]+=mesec[n-1];
        start[a]--;
    }
    for(int a=max(max(start[0],start[1]),start[2])+1; ; a++) {
        if((a-start[0])%23==0) {
            if((a-start[1])%28==0) {
                if((a-start[2])%33==0) {
                    if(a>start[3]) {
                        cout<<a-start[3];
                    } else {
                        cout<<a-start[3]+21252;
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
