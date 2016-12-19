#include<iostream>
using namespace std;
int main(){
    cin.tie();
    long long a=0,b=0;
    string c;
    cin>>c;
    long long t=c.size();
    long long ans1=0,ans2=0;
    for(long long i=0;i<t;i++){
        if(c[i]=='-'){
            ans2+=2*a;
            ans1+=b;
            b++;
        }else{
            if(a+b>0){
                ans2++;
            }
            ans2+=a+b;
            a++;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
return 0;
}
