#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    pair< int,int > A,B,C,D;
    cin>>A.first>>A.second>>B.first>>B.second;
    cin>>C.first>>C.second>>D.first>>D.second;
    if(A.first==B.first){
        if(C.first==D.first){
            /// I DVETE usporedni |
            int bestDist=1000;
            for(int i=min(A.second,B.second);i<=max(A.second,B.second);i++){
                for(int j=min(C.second,D.second);j<=max(C.second,D.second);j++){
                    int newChislo=abs(i-j);
                    if(newChislo<bestDist){
                        bestDist=newChislo;
                    }
                }
            }
            cout<<( abs(A.first-C.first) ) + (bestDist) ;
        }
        if(C.second==D.second){
            /// 1: usporedno |;
            /// 2: usporedno -

            int bestSum=10000;
            for(int i=min(A.second,B.second);i<=max(A.second,B.second);i++){
                for(int j=min(C.first,D.first);j<=max(C.first,D.first);j++){
                    int newChislo = abs(i-C.second) + abs(j-A.first);
                    if(newChislo<bestSum)bestSum=newChislo;
                }
            }
            cout<<bestSum;
        }
    }
    if(A.second==B.second){
        if(C.first==D.first){
            /// 1: usporedno -;
            /// 2: usporedno |;
            int bestSum=10000;
            for(int i=min(A.first,B.first);i<=max(A.first,B.first);i++){
                for(int j=min(C.second,D.second);j<=max(C.second,D.second);j++){
                    int newChislo = abs(i-C.first) + abs(j-A.second);
                    if(newChislo<bestSum)bestSum=newChislo;
                }
            }
            cout<<bestSum;
        }
        if(C.second==D.second){
            /// I DVETE: usporedni -
            int bestDist=1000;
            for(int i=min(A.first,B.first);i<=max(A.first,B.first);i++){
                for(int j=min(C.first,D.first);j<=max(C.first,D.first);j++){
                    int newChislo=abs(i-j);
                    if(newChislo<bestDist){
                        bestDist=newChislo;
                    }
                }
            }
            cout<<( abs(A.second-C.second) ) + (bestDist) ;
        }
    }
    cout<<endl;
    return 0;
}
