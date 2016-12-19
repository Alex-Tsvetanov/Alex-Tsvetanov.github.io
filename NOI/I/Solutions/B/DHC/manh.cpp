#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int ax, ay, bx, by, cx, cy, dx, dy, manh, womanh;
    cin>>ax>>ay>>bx>>by;
    cin>>cx>>cy>>dx>>dy;
    int ab=abs(ax-bx)+abs(ay-by);
    int cd=abs(cx-dx)+abs(cy-dy);
    int ac=abs(ax-cx)+abs(ay-cy);
    int ad=abs(ax-dx)+abs(ay-dy);
    int bc=abs(bx-cx)+abs(by-cy);
    int bd=abs(bx-dx)+abs(by-dy);
    int kiofte=(ac+ad-cd)/2;
    int kebab=(bc+bd-cd)/2;
    manh=min(kiofte, kebab);
    int krenvirsh=(ac+bc-ab)/2;
    int nadenitsa=(ad+bd-ab)/2;
    womanh=min(krenvirsh, nadenitsa);
    cout<<min(manh, womanh)<<endl;
    return 0;
}
