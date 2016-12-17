#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct line {
int x,y,x1,y1;
};

int manh_razst (int x1,int y1,int x2,int y2) {
return fabs(x1-x2)+fabs(y1-y2);
}

void EnterP(line &A) {
cin >> A.x >> A.y >> A.x1 >> A.y1;
}

int main () {
line A1,A2;
EnterP(A1);
EnterP(A2);
int min_razst,razst;
if (A1.y>A1.y1) swap(A1.y,A1.y1);
if (A2.y>A2.y1) swap(A2.y,A2.y1);
if (A2.x>A2.x1) swap(A2.x,A2.x1);
if (A1.x>A1.x1) swap(A1.x,A1.x1);
if (A1.x==A1.x1) {
    if (A2.x==A2.x1) {
    for (int i=A1.y;i<=A1.y1;i++) {
        for (int n=A2.y;n<=A2.y1;n++) {
        razst=manh_razst(A1.x,i,A2.x,n);
        min_razst=min(min_razst,razst);
    }
    }
}
else if (A2.y==A2.y1) {
    for (int i=A1.y;i<=A1.y1;i++) {
        for (int n=A2.x;n<=A2.x1;n++) {
        razst=manh_razst(A1.x,i,n,A2.y);
        min_razst=min(min_razst,razst);
        }
    }
}
}
else if (A1.y==A1.y1) {
    if (A2.x==A2.x1) {
    for (int i=A1.x;i<=A1.x1;i++) {
        for (int n=A2.y;n<=A2.y1;n++) {
        razst=manh_razst(i,A1.y,A2.x,n);
        min_razst=min(min_razst,razst);
        }
    }
}
else if (A2.y==A2.y1) {
    for (int i=A1.x;i<=A1.x1;i++) {
        for (int n=A2.x;n<=A2.x1;n++) {
        razst=manh_razst(i,A1.y,n,A2.y);
        min_razst=min(min_razst,razst);
        }
}
}
}
cout << min_razst << endl;
return 0;
}

