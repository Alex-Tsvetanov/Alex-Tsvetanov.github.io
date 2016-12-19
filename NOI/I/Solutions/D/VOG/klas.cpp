#include <iostream>
using namespace std;

int main () {
 long long momcheta,momicheta,rukostiskane=0,zdr=0;
 cin >> momcheta >> momicheta;
 if (momcheta==0){
    zdr=momicheta*(momicheta-1);
 }
 if (momicheta==0){
    for(long long a=momcheta-1;a>=0;a--){
        rukostiskane=rukostiskane+a;
    }
 }

 if (momicheta>0 && momcheta>0){
    for(long long a=momcheta-1;a>=0;a--){
        rukostiskane=rukostiskane+a;
    }
    zdr=momicheta*(momicheta-1);zdr=momicheta*(momicheta-1);
    zdr=zdr+momcheta*(momicheta*2);
 }

 cout << rukostiskane << " " << zdr << endl;

 return 0;
}
