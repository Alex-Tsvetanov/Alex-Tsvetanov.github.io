#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int a[1000][4];
bool used[1000];

int main()
{

    int n, i=0,br = 0;
    cin>>n;

    while(n>i)
    {
        cin>>a[i][0];
        cin>>a[i][1];
        cin>>a[i][2];
        cin>>a[i][3];
        i++;
    }
    int j;

    for(int i=0; i<n; i++)
    {
        int x=a[i][2]-a[i][0];
        int y=a[i][3]-a[i][1];


        if(x==0 and used[0]==false)
        {
            used[0]=true;
            br++;
            continue;
        }
        if(y==0 and used[101]==false)
        {
            used[101]=true;
            br++;
            continue;
        }
        if(!used[x])
        {
            used[x]=true;
            br++;
        }
    }
    cout<<br<<endl;
    return 0;
}
