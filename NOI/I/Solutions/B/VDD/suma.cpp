#include<iostream>
using namespace std;
int main()
{
    int s1=0;
    int s2=0;
    int b1=0;
    int b2=0;
    int maxi=0;
    int n;
    int i,j;
    cin>>n;
    int arr[n];
    bool used [n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        used[i]=false;
    }
    i=0;
    j=n-1;

    s1=arr[i];
    b1++;
    used[i]=true;
    s2=arr[j];
    b2++;
    used[j]=true;

    while(true)
    {

        if(s1==s2)
        {
            maxi=b1+b2;
            if(used[i+1]==true)
            {
                break;
            }
            b1++;
            s1=s1+arr[i+1];
            used[i+1]=true;
            i++;
        }
        else if(s1>s2)
        {
            if(used[i+1]==true)
            {
                break;
            }
            b2++;
            s2=s2+arr[j-1];
            used[j-1]=true;
            j--;
        }
        else if(s1<s2)
        {
            if(used[i+1]==true)
            {
                break;
            }
            b1++;
            s1=s1+arr[i+1];
            used[i+1]=true;
            i++;
        }
    }

    cout<<maxi;
    cout<<endl;







}
