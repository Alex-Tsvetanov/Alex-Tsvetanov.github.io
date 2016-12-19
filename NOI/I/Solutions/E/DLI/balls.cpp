#include<iostream>
using namespace std;
int main()
{
    long long stoinost1,stoinost2,broinabukviA,broinabukviB,vzetibukvi,vzetiAta;
    char b1,b2;
    cin>>stoinost1>>b1;
    cin>>stoinost2>>b2;
    cin>>vzetibukvi;
    if(b1=='A')
    {
        broinabukviA=stoinost1;
        broinabukviB=stoinost2;
        if(broinabukviA>=vzetibukvi)
        {
            vzetiAta=broinabukviA-(broinabukviA-vzetibukvi);
        }
        else
        {

            vzetiAta=broinabukviA;
        }
        cout<<vzetiAta<<endl;
    }
    else
    {
        broinabukviA=stoinost2;
        broinabukviB=stoinost1;
        if(vzetibukvi>broinabukviB)
        {
            vzetiAta=broinabukviA-(broinabukviA-(vzetibukvi-broinabukviB));

            cout<<vzetiAta<<endl;
        }
        else if(broinabukviB>=vzetibukvi) cout<<"0"<<endl;
    }

    return 0;
}
