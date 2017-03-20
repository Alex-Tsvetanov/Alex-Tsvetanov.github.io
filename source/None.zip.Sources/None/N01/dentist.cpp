#include<iostream>
using namespace std;
int main () {
    long long broiPacienti=0,nachalo[10000],wreme[10000],krai[10000];
    while(cin) {
        cin>>nachalo[broiPacienti]>>wreme[broiPacienti];
        broiPacienti++;
    }
    for(int a=0; a<broiPacienti-1; a++) {
        for(int b=a+1; b<broiPacienti; b++) {
            if(nachalo[a]>nachalo[b]) {
                swap(nachalo[a],nachalo[b]);
                swap(wreme[a],wreme[b]);
            }
        }
    }
    for(int a=0; a<broiPacienti; a++) {
        cout<<nachalo[a]<<" "<<wreme[a]<<endl;
    }
    for(int a=0; a<broiPacienti; a++) {
        krai[a]=nachalo[a]+wreme[a];
        if(krai[a]>nachalo[a+1]) {
            nachalo[a+1]=krai[a];
        }
    }
    cout<<krai[broiPacienti-1]-nachalo[broiPacienti-1];
    return 0;
}
