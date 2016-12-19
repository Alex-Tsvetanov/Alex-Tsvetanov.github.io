#include<iostream>
#include<cstring>
using namespace std;
string a,b,c;
int p,n;
void novo()
{
    c.resize(1);
    c.at(0)=0;
    for(int i=0;i<a.size();i++)
    {
        if(i>=c.size())
        {
            c.push_back(a.at(i)+b.at(i));
            int br=c.at(i);
            c.at(i)%=p;
            if(c.at(i)!=br)
            {
                c.push_back(1);
            }
        }
        else
        {
            c.at(i)+=a.at(i)+b.at(i);
            cout<<i<<" "<<(int)c.at(i)<<endl;
            int br=c.at(i);
            c.at(i)%=p;
            if(c.at(i)!=br)
            {
                c.push_back(1);
            }
        }
    }
    for(int i=a.size();i<b.size();i++)
    {
        if(i>=c.size())
        {
            c.push_back(b.at(i));
        }
        else
        {
            c.at(i)+=b.at(i);
            int br=c.at(i);
            c.at(i)%=p;
            if(c.at(i)!=br)
            {
                if(i+1>=c.size())
                {
                    c.push_back(1);
                }
                else
                {
                    c.at(i+1)+=1;
                }
            }
        }
    }
    a=b;
    b=c;
}
void start(string a,string b)
{
    for(int i=0;i<a.size();i++)
    {
        if(a.at(i)<60)
        {
            a.at(i)-=48;
        }
        else
        {
            a.at(i)-=(65+10);
            cout<<(int)a.at(i)<<endl;
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b.at(i)<60)
        {
            b.at(i)-=48;
        }
        else
        {
            b.at(i)-=(65+10);
        }
    }
}
int main()
{
    cin>>p>>n;
    cin>>a;
    cin>>b;
    start(a,b);
    for(int i=0;i<n;i++)
    {
        novo();
    }
    for(int i=0;i<c.size();i++)
    {
        cout<<(int)c.at(i)<<" ";
    }
}
