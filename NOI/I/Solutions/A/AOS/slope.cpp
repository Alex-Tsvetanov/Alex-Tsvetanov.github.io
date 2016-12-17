#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int A[400];

    for(int i=0;i<n*4;i++)
    {
        cin>>A[i];
    }

    int temp[2],temp2,a,b,counter=0,j=0;
    double temp3,storage[100];

    for(int i=0;i<n*4;i+=4)
    {
        temp[0]=A[i];
        temp[1]=A[i+3];

        if(A[i+1]-A[i+3]!=0)
        {
            temp2=A[i+1]-A[i+3];
            a=abs(temp2);
            temp2=0;
        }else   if(A[i+1]-temp[1]!=0)
                {
                    temp2=A[i+1]-temp[1];
                    a=abs(temp2);
                    temp2=0;
                }else   if(temp[1]-A[i+3]!=0)
                        {
                            temp2=temp[1]-A[i+3];
                            a=abs(temp2);
                            temp2=0;
                        }else   a=0;

        if(temp[0]-A[i+2]!=0)
        {
            temp2=temp[0]-A[i+2];
            b=abs(temp2);
            temp2=0;
        }else   if(temp[0]-A[i]!=0)
                {
                    temp2=temp[0]-A[i];
                    b=abs(temp2);
                    temp2=0;
                }else   if(A[i+2]-A[i]!=0)
                        {
                            temp2=A[i+2]-A[i];
                            b=abs(temp2);
                            temp2=0;
                        }else   b=0;

        if((a==0)or(b==0))
        {
            storage[j]=0;
        }else
        {
            temp3=a*a+b*b;
            storage[j]=sqrt(temp3);
        }

        j++;
        a=b=0;
    }

    double temp4=storage[0];

    for(int i=1;i<n;i++)
    {
        if((storage[i]==0)and(temp4!=0))
        {
            counter++;
        }else   if((storage[i]!=temp4)and(storage[i]!=0))
                {
                    counter++;
                }
    }

    cout<<counter<<endl;

    return 0;
}
