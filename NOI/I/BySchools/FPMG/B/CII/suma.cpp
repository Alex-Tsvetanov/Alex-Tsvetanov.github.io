#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int adj[n];
    int maxn=0;
    int sbor=0;
    int sborvs=0;
    int sborj=0;
    int broqch=0;
    int sbork=0;
    for(int i =0; i<n; i++)
    {
        broqch++;
        cin>>adj[i];
    }
    for(int j=0; j<n; j++)
    {

        sborvs=adj[j]+sborvs;
    }

    for(int i=0; i<n-1; i++)
    {

        broqch=0;
        sbor=0;
        for(int k=0; k<=i; k++)
        {
            broqch++;
            sbor=sbor+adj[k];



        }

        for(int j=1; j<n; j++)
        {
            broqch++;

            for(int o=0;o<j;o++){

                sbork=sbork+adj[o];
            }

            sborj=sborvs-sbork;

            if(sbork==sbor)
            {

                cout<<"broqch="<<broqch<<endl;
                if (maxn<broqch)
                {
                    maxn=broqch;
                }

            }
            sbork=0;
            sborj=0;

        }
    }

    cout<<maxn<<endl;
    return 0;
}
