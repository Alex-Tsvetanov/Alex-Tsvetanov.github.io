#include<iostream>
using namespace std;
int main(){
    short n[2], k, fin=0;
    char v[2];
    bool fA;
    cin>>n[0]>>v[0]>>n[1]>>v[1]>>k;
    bool bkA[n[0]+n[1]];
    fA = v[0] == 'A';
    for(short c=0;c<n[0]+n[1];c++){
        bkA[c] = fA?c<n[0]:c>=n[0];
        if(bkA[c] && c<k) fin++;
    }
    cout<<fin;
    return 0;
}
