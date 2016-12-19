#include<iostream>
using namespace std;
int main () {
    if(true){
        char pass1[4], pass2[4];
        long long sb1 = 0, sb2 = 0;
        for(long long i = 0 ; i < 4 ; i ++){
            cin>>pass1[i];
            if(pass1[i] >= 'A' && pass1[i] <= 'Z'){
                sb1 += (pass1[i] - 'A' + 1) * 2;
            }
            if(pass1[i] >= 'a' && pass1[i] <= 'z'){
                sb1 += pass1[i] - 'a' + 1;
            }
            if(pass1[i] >= '0' && pass1[i] <= '9'){
                sb1 += pass1[i] - '0';
            }
        }
        for(long long a = 0 ; a < 4 ; a ++){
            cin>>pass2[a];
            if(pass2[a] >= 'A' && pass2[a] <= 'Z'){
                sb2 += (pass2[a] - 'A' + 1) * 2;
            }
            if(pass2[a] >= 'a' && pass2[a] <= 'z'){
                sb2 += pass2[a] - 'a' + 1;
            }
            if(pass2[a] >= '0' && pass2[a] <= '9'){
                sb2 += pass2[a] - '0';
            }
        }
        if(sb1 == sb2){
            cout<<"0";
        }
        if(sb1 > sb2){
            for(long long x = 0 ; x < 4 ; x ++){
                cout<<pass1[x];
            }
            cout<<" "<<sb1;
        }
        if(sb2 > sb1){
            for(long long s = 0 ; s < 4 ; s ++){
                cout<<pass2[s];
            }
            cout<<" "<<sb2;
        }
        cout<<"\n";
    }
    return 0;
}
