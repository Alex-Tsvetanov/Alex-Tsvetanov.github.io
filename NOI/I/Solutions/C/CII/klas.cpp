#include<iostream>
#include<cstring>
using namespace std;
string in;
long long m1,m2,r,zdrbepcekp;
int main()
{
    cin>>in;
    int l=in.size();
    for(int i=0;i<l;i++)
    {
        if(in[i]=='-')
        {
            r+=m1;
            zdrbepcekp+=2*m2;
            m1++;
        }
        else
        {
            if(m1+m2)
            {
                zdrbepcekp++;
            }
            zdrbepcekp+=m1+m2;
            m2++;
        }
    }
        cout<<r<<" "<<zdrbepcekp<<endl;
    return 0;
}
