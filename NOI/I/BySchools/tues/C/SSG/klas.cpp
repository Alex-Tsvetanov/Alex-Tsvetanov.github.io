#include<iostream>
using namespace std;

int main()
{
    int gc,bc,hl,h;
    gc = 0;
    bc = 0;
    h=0;
    hl=0;

    string in;
    cin>>in;

    for(int i = 0; i<sizeof(in); i++)
    {
        if(i==0)
        {
            if(in[i]=='+')
            {
                gc++;
            }
            else if(in[i]=='-')
            {
                bc++;
            }
        }
        else if(i!=0)
        {
            if(in[i]=='+')
            {
                gc++;
                hl+=gc+bc;
            }
            else if(in[i]=='-')
            {
                h+=bc;
                hl+=2*gc;
                bc++;
            }
        }
    }

    cout<<h<<" "<<hl;
    return 0;
}
































