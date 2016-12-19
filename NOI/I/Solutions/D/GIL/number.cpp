#include <iostream>
using namespace std;

int main()

{
    long long a,b,c,d,broi;
    cin>>a >>b;
    c = a;
    d = 2;
    broi = 0;
    while(c <= b)
    {
        if(!c%2)
        {
            d++;
        }
        while(d<c/2)
        {
            if(c==d*d+d)
            {
                broi++;
            }
            d++;
        }
        c++;
        d = 2;
    }
    cout<<broi;


    return 0;
}
