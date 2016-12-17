#include <iostream>
using namespace std;
int main(){
    int muz=0;
    int zena=0;
    int zdravei=0, rukostiskane=0;
    char S[20000];
    cin>>S;
    char polove[20000];
    for(long broqch=0;broqch<=2000;broqch++){
        if(S[broqch]=='+'){
                if(muz!=0 or zena!=0){
                    zdravei=zdravei+zena+muz+1;
                }
                zena++;
        }
        if(S[broqch]=='-'){
                if(muz!=0 or zena!=0){
                    rukostiskane=rukostiskane+muz;
                    zdravei=zdravei+zena*2;
                }
                muz++;
        }
    }
    cout<<rukostiskane<<" "<<zdravei<<endl;
    cout<<endl;
    return 0;
}
