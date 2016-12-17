#include <iostream>
using namespace std;
int friends_max[200001];
int friends_min[200001];
int main ()
{
    int N;
    int a[200001];
    int index;
    bool IsItFound=false;
    cin>>N;
    for (int i=0; i<N; i++) cin>>a[i];
    for (int i=0; i<N; i++)
    {
        if (a[i]>0 and IsItFound) friends_max[index]++;
        else
        {
            if (a[i]>0 and !IsItFound and i!=a[i])
            {
                IsItFound=true;
                index=i;
                friends_max[index]++;
            }
              if (i==a[i] and i!=0 and IsItFound){
                for (int j=0; j<i; j++)
                {
                    friends_max[index]++;
                }
            }
            if (i==a[i] and i!=0 and !IsItFound)
            {
                for (int j=0; j<i; j++)
                {
                    friends_max[i]++;
                }
                IsItFound=true;
                index=i;
            }
        }
    }
    for (int i=0;i<N;i++){
if (a[i]==i and i!=0) friends_min[0]++;
    }
    cout<<friends_max[index]<<endl;
    cout<<friends_min[0]<<endl;
    return 0;
}
