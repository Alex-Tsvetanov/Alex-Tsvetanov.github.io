#include <iostream>
#include <algorithm>
using namespace std;
int manhatun(int a1,int b1,int a2,int b2)
{
    return (abs(a1-a2)+abs(b1-b2));
}
int orientaciq(int a1,int b1,int a2, int b2)
{
    if (b1 == b2) return 1; // horizontalna
    else if (a1 == a2) return 2; // vertikalna
    else;
}
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    int answer;
    if(orientaciq(x1, y1, x2, y2) == 1 and orientaciq(x3, y3, x4, y4) == 1)
    {
        if(y1 != y3)
        {
            answer = abs(y1 - y3);
        }
        else answer = min(min(abs(x1-x3),abs(x1-x4)),min(abs(x2-x3),abs(x2-x4)));
    }
    else if(orientaciq(x1, y1, x2, y2) == 2 and orientaciq(x3, y3, x4, y4) == 2)
    {
        if(x1 != x3)
        {
            answer = abs(x1 -x3);
        }
        else answer = min(min(abs(y1-x3),abs(y1-y4)),min(abs(y2-y3),abs(y2-y4)));
    }
    else if((orientaciq(x1, y1, x2, y2) == 1 and orientaciq(x3, y3, x4, y4) == 2) or (orientaciq(x1, y1, x2, y2) == 2 and orientaciq(x3, y3, x4, y4) == 1))
    {
        if((y1 < y3 and y1 > y4) or (y1 > y3 and y1 < y4) and (y3 < y2 and y3 > y1) or (y3 > y2 and y3 < y1)
           or (x1 < x3 and x1 > x4) or (x1 > x3 and x1 < x4) and (x3 < x2 and x3 > x1) or (x3 > x2 and x3 < x1)
          )
        {
            answer = min(abs(x1-x3),abs(y1-y3));
        }
        else
        {
            answer = min(  min(manhatun(x1,y1,x3,y3),manhatun(x1,y1,x4,y4)), min(manhatun(x2,y2,x3,y3),manhatun(x2,y2,x4,y4))  );
        }
    }
cout << answer;
// tova e moq kod naistina
return 0;
}
