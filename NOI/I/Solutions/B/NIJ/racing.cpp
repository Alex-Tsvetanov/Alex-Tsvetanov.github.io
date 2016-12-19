#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ceni[n];
    for(int i=0; i<n; i++)
    {
        cin>>ceni[i];
    }
    int minsuma=1000000;
    for(int j=0; j<3; j++)
    {
        int counter=j;
        int suma=0;
        while(counter<n-3)
        {
            int mincena=1000000;
            int min_u;
            for(int u=0; u<3; u++)
            {
                if(ceni[counter+u]<mincena)
                {
                    mincena=ceni[counter+u];
                    min_u=u;
                }
            }
            suma=suma+mincena;
            counter=counter+min_u;
            counter++;
        }
        if(suma<minsuma)minsuma=suma;
    }
    cout<<minsuma;
    return 0;
}
