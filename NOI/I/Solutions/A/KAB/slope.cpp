#include<iostream>
using namespace std;
double mass[100];
bool es[100];
class seg
{
    public:
    int nx,ny,kx,ky;
};
int main()
{
    int n,r=0;;
    cin>>n;
    seg ots[n];
    for(int q=0;q<n;q++)
    {
        cin>>ots[q].nx>>ots[q].ny>>ots[q].kx>>ots[q].ky;
    }
    int maxi=0,mini=0,sreda=0;
    for(int p=0;p<n;p++)
    {
        if(ots[p].kx==ots[p].nx && ots[p].ny<ots[p].ky)
        {maxi=1;
        }else
        if(ots[p].kx==ots[p].nx && ots[p].ky<ots[p].ny)
        {mini=1;
        }else
        if(ots[p].ky==ots[p].ny)
        {sreda=1;
        }else
        {mass[r]= double (ots[p].ky-ots[p].ny)/(ots[p].kx-ots[p].nx);
        r++;
        }
    }
    int dr=0;

    for(int k=0;k<r;k++)
    {
        if(es[k]==0)
        {
            for(int y=k;y<r;y++)
            {
                if(mass[y]==mass[k]) es[y]=1;
            }
            dr++;
        }
    }
    cout<<dr+maxi+mini+sreda<<endl;
return 0;
}
