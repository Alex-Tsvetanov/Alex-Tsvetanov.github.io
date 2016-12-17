#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int leftsum[n + 1];
    leftsum[0] = 0;
    int rightsum[n + 1];
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += p[i];
    }
    for(int i = 1; i <= n; i++){
        leftsum[i] = leftsum[i-1] + p[i-1];
        rightsum[i] = sum - leftsum[i];
    }
    int i = 1;
    int maxval = 0;
    while(leftsum[i] <= rightsum[i]){
        for(int j = i; j <= n; j++){
            if(leftsum[i] == rightsum[j] && i+n-j > maxval)
            {
                maxval = i+n-j;
            }
        }
        i++;
    }
    cout << maxval << endl;
}
