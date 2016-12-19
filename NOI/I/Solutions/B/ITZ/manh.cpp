#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int bx1,by1,ex1,ey1,bx2,by2,ex2,ey2;
    cin >> bx1 >> by1 >> ex1 >> ey1 >> bx2 >> by2 >> ex2 >> ey2;
    bool hor1=0, hor2=0;
    if(by1 == ey1) hor1 = 1;
    if(by2 == ey2) hor2 = 1;
    if(hor1 && hor2)
    {
        if(max(bx1, ex1) < min(bx2, ex2)) {cout << min(bx2, ex2) - max(bx1,ex1) + abs(by1 - by2) << endl; return 0;}
        if(max(bx2, ex2) < min(bx1, ex1)) {cout << min(bx1, ex1) - max(bx2,ex2) + abs(by1 - by2) << endl; return 0;}
        cout << abs(by1 - by2) << endl; return 0;
    }
    if(!hor1 && !hor2)
    {
        if(max(by1, ey1) < min(by2, ey2)) {cout << min(by2, ey2) - max(by1,ey1) + abs(bx1 - bx2) << endl; return 0;}
        if(max(by2, ey2) < min(by1, ey1)) {cout << min(by1, ey1) - max(by2,ey2) + abs(bx1 - bx2) << endl; return 0;}
        cout << abs(bx1 - bx2) << endl; return 0;
    }
    if(!hor1 && hor2)
    {
        if(bx1 > min(bx2,ex2) && bx1 < max(bx2,ex2) && max(by1,ey1) < by2) {cout << by2 - max(by1,ey1) << endl; return 0;}
        if(bx1 > min(bx2,ex2) && bx1 < max(bx2,ex2) && min(by1,ey1) > by2) {cout << min(by1,ey1) - by2<< endl; return 0;}
        if(bx1 < min(bx2,ex2) && max(by1,ey1) < by2) {cout << by2 - max(by1, ey1) + min(bx2, ex2) - bx1<< endl; return 0;}
        if(bx1 < min(bx2,ex2) && min(by1,ey1) > by2) {cout << min(by1, ey1) - by2 + min(bx2, ex2) - bx1<< endl; return 0;}
        if(bx1 > max(bx2,ex2) && max(by1,ey1) < by2) {cout << -max(by1, ey1) + by2 -max(bx2, ex2) + bx1<< endl; return 0;}
        if(bx1 > max(bx2,ex2) && min(by1,ey1) > by2) {cout << min(by1, ey1) - by2 -max(bx2, ex2) + bx1<< endl; return 0;}
    }
    if(!hor2 && hor1)
    {
        if(bx2 > min(bx1,ex1) && bx2 < max(bx1,ex1) && max(by2,ey2) < by1) {cout << by1 - max(by2,ey2)<< endl; return 0;}
        if(bx2 > min(bx1,ex1) && bx2 < max(bx1,ex1) && min(by2,ey2) > by1) {cout << min(by2,ey2) - by1<< endl; return 0;}
        if(bx2 < min(bx1,ex1) && max(by2,ey2) < by1) {cout << by1 - max(by2, ey2) + min(bx1, ex1) - bx2<< endl; return 0;}
        if(bx2 < min(bx1,ex1) && min(by2,ey2) > by1) {cout << min(by2, ey2) - by1 + min(bx1, ex1) - bx2<< endl; return 0;}
        if(bx2 > max(bx1,ex1) && max(by2,ey2) < by1) {cout << -max(by2, ey2) + by1 -max(bx1, ex1) + bx2<< endl; return 0;}
        if(bx2 > max(bx1,ex1) && min(by2,ey2) > by1) {cout << min(by2, ey2) - by1 -max(bx1, ex1) + bx2<< endl; return 0;}
    }

    return 0;
}
