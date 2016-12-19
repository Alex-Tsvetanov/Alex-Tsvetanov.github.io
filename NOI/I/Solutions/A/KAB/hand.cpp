#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mass[n];
    int massmax[n],massmin[n];
    for(int a=0;a<n;a++)
    {
        cin>>mass[a];
        massmax[a]=mass[a];
        massmin[a]=mass[a];
        if(mass[a]>0)
        {
            for(int k=0;k<a;k++)
            {
                massmax[k]++;
            }
        }
        if(mass[a]==a)
        {
            for(int k=0;k<a;k++)
            {
                massmin[k]++;
            }
        }
    }
    int ma=massmax[0],mi=massmin[0];
    for(int a=0;a<n;a++)
    {
        if(ma<massmax[a])ma=massmax[a];
        if(mi>massmin[a])mi=massmin[a];
    }

cout<<ma<<endl<<mi<<endl;
return 0;
}
