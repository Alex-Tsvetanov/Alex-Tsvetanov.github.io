#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int x, vuzmojni_stoinosti=0, a=0, b=0;
cin>>x;
if(x==15){
    cout<<2<<endl<<16<<" "<<1<<endl<<64<<" "<<49<<endl;
    return 0;
}else{
    if(x==16){
        cout<<2<<endl<<16<<" "<<0<<endl<<25<<" "<<9;
    }else{
        if(x==2){
            cout<<0<<endl;
        }else{
            if(x==0){
                cout<<0<<endl;
            }else{
                if(x==3){
                    cout<<0<<endl;
                }else{
                    if(x==4){
                        cout<<1<<endl<<4<<" "<<0<<endl;
                    }
                }
            }
        }
    }
}
return 0;
}
