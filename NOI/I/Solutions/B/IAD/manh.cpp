#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
    int ax, ay, bx, by;
    int mx, my, nx, ny;
    cin >> ax >> ay >> bx >> by;
    cin >> mx >> my >> nx >> ny;
    int a = abs(ax-mx)+abs(ay-my);
    int b = abs(ax-nx)+abs(ay-ny);
    int c = abs(bx-mx)+abs(by-my);
    int d = abs(bx-nx)+abs(by-ny);
    if(((ax < mx && bx > mx) || (ax > mx && bx < mx)) && ((my < ay && ny > ay) || (my > ay && ny < ay)) && mx == nx && ay == by) cout << 0 << endl;
    else if(((ay < my && by > my) || (ay > my && by < my)) && ((mx < ax && nx > ax) || (mx > ax && nx < ax)) && my == ny && ax == bx) cout << 0 << endl;
    else if(ay == by && my == ny && max(max(abs(ax-mx), abs(bx-mx)), max(abs(ax-nx), abs(bx-nx))) > abs(ax-bx)+abs(mx-nx)) cout << abs(ay-my)+min(min(abs(ax-mx), abs(bx-mx)), min(abs(ax-nx), abs(bx-nx))) << endl;
    else if(ax == bx && mx == nx && max(max(abs(ay-my), abs(by-my)), max(abs(ay-ny), abs(by-ny))) > abs(ay-by)+abs(my-ny)) cout << abs(ax-mx)+min(min(abs(ay-my), abs(by-my)), min(abs(ay-ny), abs(by-ny))) << endl;
    else if(ax == bx && mx == nx) cout << abs(ax-mx) << endl;
    else if(ay == by && my == ny) cout << abs(ay-my) << endl;
    else if(((ax < mx && bx > mx) || (ax > mx && bx < mx)) && mx == nx && ay == by) cout << min(abs(ay-my), abs(ay-ny)) << endl;
    else if(((mx < ax && nx > ax) || (mx > ax && nx < ax)) && ax == bx && my == ny) cout << min(abs(ay-my), abs(by-my)) << endl;
    else if(((my < ay && ny > ay) || (my > ay && ny < ay)) && mx == nx && ay == by) cout << min(abs(ax-mx), abs(bx-mx)) << endl;
    else if(((ay < my && by > my) || (ay > my && by < my)) && ax == bx && my == ny) cout << min(abs(ax-mx), abs(ax-nx)) << endl;
    else cout << min(min(a, b), min(c, d)) << endl;
}
