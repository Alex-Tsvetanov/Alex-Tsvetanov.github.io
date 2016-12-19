#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    for(i;i<n;i++){cin>>arr[i];}
  //for(int r=0;r<n;r++){arr[r]=r%10000;}
    i=1;
    int j=1,br=0,y;
    int sumai=arr[0],sumaj=arr[n-1];

    while(i<n-j)
    {
        if(sumai<sumaj)
        {
            y=0;
        }
        if(sumai>sumaj)
        {
            y=1;
        }
        if(sumaj==sumai&&br<i+n-j+1)
        {
            y=2;
        }
        if(y==1)
        {
            sumaj=sumaj+arr[n-j-1];
            j++;
        }
        if(y==0)
        {
            sumai=sumai+arr[i];
            i++;
        }
        if(y==2)
        {
            br=i+j;
            sumaj=sumaj+arr[n-j-1];
            sumai=sumai+arr[i];
            i++;
            j++;
        }
        //cout<<sumai<<" "<<sumaj<<" "<<br<<endl;
    }
    cout<<br;
}
