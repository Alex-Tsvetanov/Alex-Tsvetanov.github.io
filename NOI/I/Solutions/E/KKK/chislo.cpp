#include <iostream>
using namespace std;
int main()
{
    long long ch1,ch2;
    cin>>ch1>>ch2;
    if(ch2==6)
    {
        ch2=9;
    }
    if(ch1==6)
    {
        ch1=9;
    }
    if(ch1<ch2 or ch1==ch2)
    {
        cout<<ch2<<ch1<<endl;
    }
    else
    {
        cout<<ch1<<ch2<<endl;
    }
    return 0;
}
