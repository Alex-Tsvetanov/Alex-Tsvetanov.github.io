#include <iostream>
using namespace std;
unsigned long long int M,N;
int main()
{
    cin >> M;
    cin >> N;
    int x[M-N],y,z,i,broika=0;

    for(i=N;i<M;i++){
        while(x[i]>N && x[i]<M){
            while(z=y+1 && z>0 && y>0){
                if(x[i]=z*y){
                    broika=broika+1;
                }
            }
        }
    }
    return 0;
}
