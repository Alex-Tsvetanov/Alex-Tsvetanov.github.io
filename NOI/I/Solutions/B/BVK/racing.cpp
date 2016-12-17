#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> sumi;
    int N;
    int suma1=0;int suma2=0;int suma3=0;
    cin >> N;
    int arr[N];
    for (int i = 0; i<N; i++){
        cin >> arr[i];
    }
    for (int i = 0; i< N ; i+=3){
        suma1+=arr[i];
    }
    for (int i = 1; i < N; i+=3){
        suma2+=arr[i];
    }
    for (int i = 2; i < N; i+=3){
        suma3+=arr[i];
    }
    sumi.push(suma1);
    sumi.push(suma2);
    sumi.push(suma3);
    sumi.pop();
    sumi.pop();
    int otg = sumi.top();
    cout << otg << endl;

    return 0;
}
