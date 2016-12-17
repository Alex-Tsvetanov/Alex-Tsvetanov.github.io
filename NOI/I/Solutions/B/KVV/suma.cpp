#include<iostream>
#include<algorithm>
using namespace std;
int sumnachalo(int k,int a[])
{
    int s=0;
    for(int i=1; i<k+1; i++)
    {
        s=s+a[i];
    }
    return s;
}
int sumkrai(int j,int a[],int n)
{
    int s=0;
    for(int i=j; i<n+1; i++)
    {
        s=s+a[i];
    }


    return s;
}

int main()
{
    int n;

    cin>>n;
    int a[n];
    int b[n];
    for(int i=1; i<n+1; i++)
    {
        cin>>a[i];
    }
for(int i=1;i<n+1;i++){
   int j=i+1;
    while(sumnachalo(i,a)!=sumkrai(j,a,n)&&j<n+1){
        j++;


    }
   if(sumnachalo(i,a)==sumkrai(j,a,n))
   {
       b[i]=i+n-j+1;}else{

       b[i]=0;
       }
}
int x=0;
for(int i=1;i<n+1;i++){
   if(x<b[i]){
    x=b[i];

   }

}
cout<<x<<endl;
}

