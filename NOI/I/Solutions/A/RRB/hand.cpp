#include<iostream>
using namespace std;
int main(){
    int n, i, brhand[200000], maxbrzaI, minbrzaI, brpone1=0, brsvsichki=0, maximum=0, minimum=200001;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> brhand[i];
    }
    for(i=n-1; i>=0; i--){
        minbrzaI = brhand[i] + brsvsichki;
        maxbrzaI = brhand[i] + brpone1;
        if(brhand[i] > 0){
            brpone1++;
        }
        if(brhand[i] == i){
            brsvsichki++;
        }
        if(maximum < maxbrzaI){
            maximum = maxbrzaI;
        }
        if(minimum > minbrzaI){
            minimum = minbrzaI;
        }
    }
    cout << maximum << '\n' << minimum << '\n';
    return 0;
}
