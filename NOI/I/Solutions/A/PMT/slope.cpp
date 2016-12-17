#include <stdio.h>
#include <algorithm>
using namespace std;

struct tan{
    int a;
    int b;
};

struct point{
    int x;
    int y;
};

struct line{
    point l;
    point r;
};

tan  res[100];
int num = 0;

void read(int&);
void readPoint(point&);
void readLine(line&);
void gcd(tan& c);
void addTan(tan& z);

int main(){
    int n;
    read(n);
    line a;
    tan z;
    bool add;

    for(int i = 0; i < n;  i++){
        add = true;
        readLine(a);

        if(a.l.x == a.r.x){
            z.a = 0;
            z.b = 0;
        } else {
            z.a = a.r.y - a.l.y;
            z.b = a.r.x - a.l.x;

            gcd(z);
        }

        for(int p = 0;  p < num;  p++){
            if(z.a == res[p].a){
                if(z.b == res[p].b){
                    add = false;
                    break;
                }
            }
        }

        if(add)
            addTan(z);


    }

    printf("%d", num);

    return 0;
}


void read(int& a){
    scanf("%d", &a);
}

void readPoint(point& a){
    read(a.x);
    read(a.y);
}

void readLine(line& a){
    readPoint(a.l);
    readPoint(a.r);
}

void gcd(tan& c){
    int g = __gcd(c.a, c.b);
    c.a /= g;
    c.b /= g;
}

void addTan(tan& z){
    res[num] = z;
    num ++;
}

