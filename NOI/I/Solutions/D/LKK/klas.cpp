#include <iostream>
using namespace std;

int main ()
{
    long long N,M, rukost=0, zdr=0,kopie;
    cin >> N >> M;
kopie=M;

for (M=M-1;M>0;M=M-1) {
    zdr=zdr+(M*2);
}
    zdr=zdr+(kopie*N*2);
if (N>2){
for (N=N-1;N>0;N=N-1) {rukost=rukost+N;}}
    cout << rukost << " " << zdr;
    return 0;
}

