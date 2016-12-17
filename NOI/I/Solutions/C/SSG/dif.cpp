#include<iostream>
using namespace std;

int pow(int a){
    return a*a;
}

int main(){
    int in;
    cin>>in;
    int tp = pow(in);
    int r[tp][2];

    int p = 0;
    for(int a=0;a<tp;a++){

        for(int b = 0;b<a;b++){

            if(pow(a)-pow(b)==in){
                r[p][0] = pow(a);
                r[p][1] = pow(b);
                p+=1;
            }else{
                continue;
            }
        }
    }
    cout<<p<<endl;
    for(int i = 0;i<p;i++){
        cout<<r[i][0]<<" "<<r[i][1]<<endl;
    }
    return 0;
}


