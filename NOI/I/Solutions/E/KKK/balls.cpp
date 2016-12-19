#include <iostream>
using namespace std;
int main()
{
    long long broi,broia,broib,turseno,slucai,losho;
    char vid;
    cin>>broi>>vid;
    if(vid=='A')
    {
        broia=broi;
        slucai=1;
    }
    else
    {
        broib=broi;
        slucai=2;
    }
    cin>>broi>>vid;
    if(vid=='A')
    {
        broia=broi;
    }
    else
    {
        broib=broi;

    }
    cin>>turseno;
    if(slucai==1)
    {
        if(broia<turseno)
        {
            cout<<broia;

        }
        else
        {
            cout<<turseno;

        }
    }
    else
    {
        if(broia+broib<turseno)
        {
            cout<<broia;
        }
        if(broib>turseno)
        {
            cout<<"0";
        }
        if(broib<turseno && turseno<broia+broib)
        {
            cout<<turseno-broib;
        }
    }
    cout<<endl;
    return 0;
}
