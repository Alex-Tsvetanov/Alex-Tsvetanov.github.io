#include<iostream>
using namespace std;
int A[1024],zimash[1024], nezimash[1024],n;
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
for(int i=0;i<n;i++)
{
        zimash[i]=A[i];

        int minn=1000*100+9;
        if(i-1>=0 && zimash[i-1]<minn)
            minn=zimash[i-1];
        if(i-2>=0 && zimash[i-2]<minn)
            minn=zimash[i-2];
        if(i-3>=0 && zimash[i-3]<minn)
            minn=zimash[i-3];
        if(i>=3)
          zimash[i]+=minn;

    nezimash[i]=min(zimash[i-1], zimash[i-2]);
}
/*for(int i=0;i<n;i++)
    cout<<zimash[i]<<" ";
cout<<endl;
for(int i=0;i<n;i++)
    cout<<nezimash[i]<<" ";
cout<<endl;*/
int otg=zimash[n-1];
otg=min(otg,zimash[n-2]);
otg=min(otg,zimash[n-3]);
cout<<otg<<endl;



return 0;
}
