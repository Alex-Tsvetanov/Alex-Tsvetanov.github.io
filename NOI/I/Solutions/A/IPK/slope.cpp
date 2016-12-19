#include<iostream>
#include<cmath>
#include<set>
using namespace std;

set<double> s;

struct P{
    int x, y;
    P(int x = 0, int y = 0){
        this -> x = x;
        this -> y = y;
    }
    void scan(){
        cin >> x >> y;
    }
};

double sin(P a, P b){
    double A = b.x - a.x;
    double B = b.y - a.y;
    double C = sqrt(A * A + B * B);
    return B/C;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0 ; i< n; i ++){
        P a, b;
        a.scan();
        b.scan();
        if(a.x > b.x){
            swap(a, b);
        }
        if(a.x == b.x){
            s.insert(1);
            continue;
        }

        s.insert(sin(a, b));
    }

    cout << s.size() << "\n";

    return 0;
}
