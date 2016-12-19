#include<iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long m=0,f=0;
    long long zdrbepce=0,handshake=0;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='-')
        {
            handshake+=m;
            zdrbepce+=2*f;
            m++;
        }
        else if(a[i]=='+')
        {
            zdrbepce+=m+f+1;
            if(m+f==0)
            {
                zdrbepce--;
            }
            f++;
        }
    }
    cout<<handshake<<" "<<zdrbepce<<"\n";
    return 0;
}
