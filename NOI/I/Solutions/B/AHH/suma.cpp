#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;
int n, maxi = 0;
vector<int> A;
int binSearch(int L, int R, int num){
    int M;
    while(L <= R){
        int M = (L+R)/2;
        int k = A[n-1]-A[M-1];
        if(k==num)return M;
        if(k > num) L = M+1;
        else R = M-1;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);

    cin >> n;
    int k;
    cin >> k;
    A.push_back(k);
    for(int i = 1; i < n; i++){
        cin>>k,A.push_back(k), A[i]+=A[i-1];
    }

    for(int i = 0; i < n; i++){
        int j = binSearch(i+1, n-1, A[i]);
        //cout << i << " " << j <<  " " << A[n-1]-A[j-1] << " " << A[i]<<endl;
        if(j != -1){
            maxi = max(maxi, i+1+n-j);
        }
    }
    cout << maxi << endl;
}
