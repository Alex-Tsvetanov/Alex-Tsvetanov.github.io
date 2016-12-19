#include<iostream>
#include<vector>

using namespace std;

int symbol(char s){
    int d;
    if(s >= '0' && s <= '9'){
        d = s - '0';
    }
    else{
        d = s - 'A' + 10;
    }
}

struct N{
    int d, e;
    N(int d = 0, int e = 0){
        this -> d = d;
        this -> e = e;
    }
    void scan(){
        string tmp;
        cin >> tmp;

        e = symbol(tmp[tmp.size()-1]);
        d = 0;
        if(tmp.size() >= 2){
            d = symbol(tmp[tmp.size()-2]);
        }
    }
    void print(){
        cout << d << ' ' << e << '\n';
    }
};

int p;

N operator+(N a, N b){
    N c = a;
    c.d += b.d;
    c.e += b.e;
    if(c.e >= p){
        c.e -= p;
        c.d ++;
    }
    if(c.d >= p){
        c.d -= p;
    }
    return c;
}

bool operator!=(N a, N b){
    return a.d != b.d || a.e != b.e;
}

vector<N> v;

char printSymbol(int a){
    int c;
    if(a < 10){
        c = (char)(a + '0');
    }
    else{
        c = (char)(a + 'A' - 10);
    }
}

int div(string a, int divisor){
    int rem = a[0] - '0';
    for(int i = 1; i < a.size(); i ++){
        if(rem < divisor){
            rem *= 10;
            rem += a[i] - '0';
        }
        else{
            rem %= divisor;
        }
    }
    return rem % divisor;
}

int main(){

    cin >> p;
    string n;
    cin >> n;

    N a, b, A, B;
    a.scan();
    b.scan();

    A = a;
    B = b;

    v.push_back(a);
    v.push_back(b);

    do{
        N c = a + b;
        a = b;
        b = c;
        v.push_back(c);
    }while(a != A || B != b);

    v.pop_back();
    v.pop_back();

    int rem = div(n, v.size());

    if(rem == 0){
        cout << printSymbol(v[v.size()-1].d) << '\n';
    }
    else{
        cout << printSymbol(v[rem-1].d) << '\n';
    }

    return 0;
}
