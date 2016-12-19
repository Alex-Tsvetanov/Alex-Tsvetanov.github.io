#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, i, j, x1[100], y1[100], x2[100], y2[100], brnakloni=0;
    bool provereno[100];
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    for(i=0; i<n; i++){
        provereno[i] = false;
        if(x1[i] > x2[i]){
            swap(x1[i], x2[i]);
            swap(y1[i], y2[i]);
        }
        else if(x1[i] == x2[i] && y1[i] > y2[i]){
            swap(y1[i], y2[i]);
        }
    }
    for(i=0; i<n; i++){
        if(!provereno[i]){
            provereno[i] = true;
            brnakloni++;
            int len1x = x2[i] - x1[i], len1y = y2[i] - y1[i];
            for(j=i+1; j<n; j++){
                int len2x = x2[j] - x1[j], len2y = y2[j] - y1[j];
                if(len1x*len2y == len2x*len1y){
                    provereno[j] = true;
                }
            }
        }
    }
    cout << brnakloni << '\n';
    return 0;
}
