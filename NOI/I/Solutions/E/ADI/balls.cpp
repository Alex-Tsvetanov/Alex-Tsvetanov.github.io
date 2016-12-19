#include<iostream>
using namespace std;
int main () {
    if(true){
        char vid1, vid2;
        long long k, n1, n2, ost;
        cin>>n1>>vid1;
        cin>>n2>>vid2;
        cin>>k;
        if(vid1 == 'A'){
            if(k > n1){
                ost = k - n1;
                cout<<k - ost<<"\n";
                return 0;
            }else{
                ost = 0;
                cout<<k - ost<<"\n";
                return 0;
            }
        }else{
            if(k > n1){
                ost = k - n1;
                cout<<ost<<"\n";
                return 0;
            }else{
                ost = 0;
                cout<<ost<<"\n";
                return 0;
            }
        }
    }
    return 0;
}
