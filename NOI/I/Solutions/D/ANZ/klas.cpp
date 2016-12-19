#include <iostream>
using namespace std;
int main (){
long long N, M, i, broiRakostiskania=0, broiZdravei=0, n=0, m=0;
cin>>N>>M;
for(i=0;i<N+M;i++){
    if(n<N){
        broiRakostiskania=broiRakostiskania+n;
        broiZdravei=broiZdravei+m;
        n++;
    }
    if(m<M){
        broiZdravei=broiZdravei+n+m;
        m++;
    }
}
cout<<broiRakostiskania*2<<" "<<broiZdravei*2;
return 0;
}
