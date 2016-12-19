#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int mas[n];
    int g = 0;

    for(int i=0;i<n;i++){
        cin >> mas[i];
        if(mas[i] >= 1)g++;
    }

    int mx = 0, mn = 200001;

    for(int i=0;i<n;i++){

        if(mas[i] >= 1) g--;

        int cur = mas[i] + g;

        if(cur > mx) mx = cur;

    }

    int k = 0;
    for(int i=n-1;i>=0;i--){

        int cur = k + mas[i];

        if(cur < mn) mn = cur;

        if(i <= mas[i]) k++;

    }

    cout << mx << '\n' << mn;

    return 0;
}
