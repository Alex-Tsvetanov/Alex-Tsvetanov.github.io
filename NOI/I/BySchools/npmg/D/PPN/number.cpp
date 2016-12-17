#include<iostream>
using namespace std;

int main() {

    long long M,N;
    cin >> M >> N;
    long long broi=0;
    /// брой "2-делители"

    long long i,j;
    for(i=M;i<N;i++){
        for(j=1;j<M;j++){
            if(i==j*(j+1) or i==j*(j-1)){
                broi++;
            }
        }
    }

    cout << broi << endl;


    return 0;
}
