#include<iostream>
using namespace std;
long long a , b , x , i ;
int main ()
{
    cin>>a>>b;
    for (i=a; i<=b; i++)
    {
        if (i%2==0)
        {
            if (i%6==0)
            {
                x++;
            }
        }

    }
    cout<<x;
    return 0;
}
