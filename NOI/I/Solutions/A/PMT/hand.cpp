#include <stdio.h>
#include <algorithm>
using namespace std;

struct res{
    int a;//min
    int b;//max
};

int x[200000];
res y[200000];
int n;

void read(int&);
void put(int&);
void count(int&);

int main(){
    read(n);
    for(int i = 0;  i < n;  i++){
        read(x[i]);
        put(i);
    }

    int p = 0;
    count(p);
    res k = y[0];

    for(p = 1;  p < n-1;  p++){
        count(p);

        k.a = min(k.a, y[p].a);
        k.b = max(k.b, y[p].b);
    }

    printf("%d\n%d", k.b, k.a);

    return 0;
}


void read(int& a){
    scanf("%d", &a);
}

void put(int& i){
    y[i].a = x[i];
    y[i].b = x[i];
}

void count(int& p){
    for(int q = p + 1;  q < n;  q++){
        if(x[q] == q)//min
            y[p].a++;

        if(x[q] > 0)//max
            y[p].b++;
    }
}

