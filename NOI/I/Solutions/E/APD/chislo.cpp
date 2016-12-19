#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    if ((a==1 or a==8 or a==6 or a==9)  and  (b==1 or b==8 or b==6 or b==9))
    {
        if(a==6)
        {
            a=9;
        }
        if (b==6)
        {
            b=9;
        }
        if(a<b)
        {
            swap(a,b);
        }
        cout<<a<<b<<endl;
    }
    return 0;
}
