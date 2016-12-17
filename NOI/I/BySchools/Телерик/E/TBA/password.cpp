#include <iostream>
using namespace std;
int main(){
    char sym[8];
    long long stoinosti[8];
    for(short int a=0;a<8;a++){
        cin>>sym[a];
        if(sym[a]>='a' and sym[a]<='z'){
            stoinosti[a]=sym[a]-'a'+1;
        }
        if(sym[a]>='A' and sym[a]<='Z'){
            stoinosti[a]=(sym[a]-'a'+1)*2;
        }
        if(sym[a]>='1' and sym[a]<='9'){
            stoinosti[a]=sym[a]-'0'+1;
        }
    }

return 0;
}
