#include<iostream>
using namespace std;
pair<long long,long long> ans[1000000];
long long ansize=0;
int main(){
    long long c;
    cin>>c;
    for(long long i=c;i*i>=c;i--){
        if(c%i==0){
            long long d=c/i;
            if((i+d)%2==0){
                long long a=(i+d)/2;
                long long b=i-a;
                ans[ansize].first=a*a;
                ans[ansize].second=b*b;
                ansize++;
            }
        }
    }
    cout<<ansize<<endl;
    for(long long i=ansize-1;i>=0;i--){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
return 0;
}
