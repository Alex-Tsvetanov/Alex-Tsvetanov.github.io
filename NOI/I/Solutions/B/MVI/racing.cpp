#include <iostream>
#include <vector>
using namespace std;

int Front[100000];

int main(){
    int n;
    cin >> n;
    int cena[n + 6];
    for(int i = 3; i < n + 2; i++){
        cin >> cena[i];
    }
    cena[0] = 0;
    cena[1] = 0;
    cena[2] = 0;
    cena[n+3] = 0;
    cena[n+4] = 0;
    cena[n+5] = 0;

    vector<int> p[n+6];
    for(int i = 0; i < n + 2; i++){
        p[i].push_back(i + 1);
        p[i].push_back(i + 2);
        p[i].push_back(i + 3);
    }

    bool used[n+100];
    for(int i = 0; i < n + 6; i++){
        used[i] = false;
    }
    int End = 0;
    Front[0] = 0;
    used[0] = true;

    int suma[n + 6];
    for(int i = 0; i < n + 6; i++){
        suma[i] = 100000;
    }
    suma[0] = 0;

    for(int i = 0; i < n + 6; i++){
        int curr = Front[i];
        for(int j = 0; j < p[curr].size(); j++){
            int sased = p[curr][j];
            if(used[sased] == false){
                used[sased] = true;
                if(suma[sased] > suma[curr] + cena[sased]){
                    suma[sased] = suma[curr] + cena[sased];
                }
                End++;
                Front[End] = sased;
            }
        }
    }
    int minsuma = 100000;
    for(int i = n + 3; i < n + 6; i++){
        if(suma[i] < minsuma){
            minsuma = suma[i];
        }
    }
    cout << minsuma << endl;
}
