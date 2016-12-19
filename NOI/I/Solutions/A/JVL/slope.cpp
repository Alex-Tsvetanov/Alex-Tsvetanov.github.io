#include<set>
#include<iostream>
using namespace std;
struct fraction{
    int a, b;
};

set<fraction> s;
bool operator<(fraction m, fraction n){
    if(m.a<n.a) return true;
    if(m.a>n.a) return false;
    if(m.b<n.b) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        if(x2>x1){
            x2^=x1;
            x1^=x2;
            x2^=x1;
            y2^=y1;
            y1^=y2;
            y2^=y1;
        }
        fraction f;
        f.a=y2-y1;
        f.b=x2-x1;
        if(f.b==0){
            f.a=0;
            s.insert(f);
            continue;
        }
        if(f.a==0){
            f.b=1;
            s.insert(f);
            continue;
        }
        for(int j=2;j<=min(f.a, f.b);j++){
            while(f.a%j==0 && f.b%j==0){
                f.a/=j;
                f.b/=j;
            }
        }
        s.insert(f);
    }
    cout<<s.size();
    return 0;
}
