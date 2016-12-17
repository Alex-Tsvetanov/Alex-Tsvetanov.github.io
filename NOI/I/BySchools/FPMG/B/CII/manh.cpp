#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a1[4];
    int a2[4];
    int nmr=1000000000;
    int curr=0;
    int curr2=0;
    int nmr2=1000000000;
    int p;
    for (int i=0; i<4; i++)
    {
        cin>>a1[i];
    }
    for (int i=0; i<4; i++)
    {
        cin>>a2[i];
    }
    if(a1[0]==a1[2])
    {
        for(int i=0; i<abs(a2[0]-a2[2]+1); i++)
        {
            if(a2[0]>a2[2])
            {
                curr=abs(a1[0]-a2[2]-i)+abs(a1[1]-a2[3]);
                if(curr<nmr)
                {
                    nmr=curr;
                }
                curr=0;
            }
            else
            {
                curr=abs(a1[0]-a2[0]-i)+abs(a1[1]-a2[1]);
                if(curr<nmr)
                {
                    nmr=curr;
                }
                curr=0;
            }
        }
        for(int i=0; i<abs(a2[0]-a2[2]+1); i++)
        {
            if(a2[0]>a2[2])
            {
                curr2=abs(a1[2]-a2[2]-i)+abs(a1[3]-a2[3]);

                if(curr2<nmr2)
                {
                    nmr2=curr2;
                }

                curr2=0;
            }
            else
            {
                curr2=abs(a1[2]-a2[0]-i)+abs(a1[3]-a2[1]);

                if(curr2<nmr2)
                {
                    nmr2=curr2;
                }

                curr2=0;
            }
        }
    }else{
        for(int i=0;i<4;i++){
                p=a1[i];
                a1[i]=a2[i];
                a2[i]=p;
        }
        for(int i=0; i<abs(a2[0]-a2[2]+1); i++)
        {
            if(a2[0]>a2[2])
            {
                curr=abs(a1[0]-a2[2]-i)+abs(a1[1]-a2[3]);
                if(curr<nmr)
                {
                    nmr=curr;
                }
                curr=0;
            }
            else
            {
                curr=abs(a1[0]-a2[0]-i)+abs(a1[1]-a2[1]);
                if(curr<nmr)
                {
                    nmr=curr;
                }
                curr=0;
            }
        }
        for(int i=0; i<abs(a2[0]-a2[2]+1); i++)
        {
            if(a2[0]>a2[2])
            {
                curr2=abs(a1[2]-a2[2]-i)+abs(a1[3]-a2[3]);

                if(curr2<nmr2)
                {
                    nmr2=curr2;
                }

                curr2=0;
            }
            else
            {
                curr2=abs(a1[2]-a2[0]-i)+abs(a1[3]-a2[1]);

                if(curr2<nmr2)
                {
                    nmr2=curr2;
                }

                curr2=0;
            }
        }
    }
    if(nmr2<nmr)
    {
        nmr=nmr2;
    }
    cout<<nmr<<endl;
    return 0;
}
