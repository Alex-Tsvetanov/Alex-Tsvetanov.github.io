#include<iostream>

using namespace std;

int main(){
    int n, j, i, sumai, sumaj,sumamax,a,k,l;
    cin >> n;
    int arr[n];
    for (int t = 0; t < n; t++){
        cin >> a;
        arr[t] = a;
    }
    i = 0; j = n;
    while (i<j){
        sumai+=arr[i];
        i++;
        sumaj = arr[j];
        j++;
    }
    sumai+=arr[i];
    sumaj+=arr[j];
    sumamax = sumaj+sumai;
    cout << sumai << endl;










/*    int m = 0;
    int s = n;
    j = n;
    int broii = 0;
    int broij = 0;
    while(sumai!=sumaj){
        sumai=0;
        sumaj=0;
        for(k = m; k <= j; k++){
            sumai+=arr[k];
            broii++;
        }
        i = k;
        for(l = s; l>=i; l--){
            sumaj+=arr[l];
            broij++;
        }
        j=l;
        m++;
        s--;
    }
    if(broii>=broij){
        cout << broii << endl;
    }else{
        cout << broij << endl;
    }
*/
    return 0;
}
