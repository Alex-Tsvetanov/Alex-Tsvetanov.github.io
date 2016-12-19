#include <iostream>
using namespace std;
int main () {
        int n,izhod = 0;
        cin >> n;
        int num[n],st[n-1],en[n-1];
        for (int i = 0; i < n; i++){
                cin >> num[i];
        }

        for (int i = 0; i < n-1; i++){
                st[i] =0;
                en[i] = 0;
        }

        for (int i = 0; i <n-1;i++){
                for (int j = 0; j <= i; j++){
                        st[i] += num[j];
                }
        }
        for (int i = 0; i <n-1;i++){
                for (int j = 0; j <= i; j++){
                        en[i] += num[n-j  -1];
                }
        }
        for (int i = 0; i < n - 1; i ++){
                for (int j = 0; j < n - 1; j++){
                        if (st[i] == en[j]){
                                if (izhod < i + j && i+j <= n){
                                        izhod = i + j + 2;
                                }
                        }
                }
        }
        cout << izhod;
        return 0;
}
