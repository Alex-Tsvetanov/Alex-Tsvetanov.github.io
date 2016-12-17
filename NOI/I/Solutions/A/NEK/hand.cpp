#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;


vector <int> ppl,ppl1;
int asdasd=-1;
//ppl.push_back(asdasd);
int maxi(int n)
{

    int asd=ppl[0];
    for(int i=0; i<n; i++)
    {
        if(asd<ppl[i])asd=ppl[i];

    }
    return asd;
}
int mini(int n)
{

    int asd=ppl1[0];
    for(int i=0; i<n; i++)
    {
        if(asd>ppl1[i])asd=ppl1[i];

    }
    return asd;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        ppl.push_back(k);
        ppl1.push_back(k);

        if(k>0)
        {

            for(int j=0; j<ppl.size()-1; j++)
            {

                ppl[j]++;
            }
            for(int j=ppl1.size()-2;j>=ppl1.size()-(k+1)&& j>=0;j--)
            {
               // cout<<j<<" >= "<<ppl1.size()-(k+2)<<endl;
                ppl1[j]++;
                //for(int k=0; k<n; k++)
                  //  {
                    //    cout<<ppl1[k]<<" ";

                  //  }
                   // cout<<endl;
            }

        }

    }



    cout<<maxi(n)<<endl<<mini(n)<<endl;

}
