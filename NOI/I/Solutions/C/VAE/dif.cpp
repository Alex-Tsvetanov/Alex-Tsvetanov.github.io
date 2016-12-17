#include <iostream>;
using namespace std;
int main(){
long long x, k=0;
cin>>x;

for(int a=0;a<10*6 ;a+=1){

    for(int b=0;b<10*6 ;b+=1){

        if((a*a - b*b)==x){
            k++;
            cout<<a*a<<" "<<b*b<<endl;
        }


    }
}

if(k==0){
    cout<<0;
}








return 0;
}
