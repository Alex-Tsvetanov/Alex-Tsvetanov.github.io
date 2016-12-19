#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct str
{
    long long from,to;
};
bool S(str a,str b)
{
    if(a.from==b.from)
    {
        return a.to<b.to;
    }
    return a.from<b.from;
}
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    vector <str> k;
    str g;
    long long n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>g.from>>g.to;
        k.push_back(g);
    }
    sort(k.begin(),k.end(),S);
    vector<str>res;
    long long mindosega=k[0].from,maxdosega=k[0].to;
    bool t;
    for(long long i=1; i<n; i++)
    {
        //cout<<i<<"aa\n";
        if((k[i].from>=mindosega)&&(k[i].from<=maxdosega))
        {
            if(k[i].to>maxdosega)
            {
                maxdosega=k[i].to;
            }
        }
        else
        {
            g.from=mindosega;
            g.to=maxdosega;
            res.push_back(g);
            //cout<<"pushing in"<<mindosega<<" "<<maxdosega<<"\n";

            mindosega=k[i].from;
            maxdosega=k[i].to;
        }
    }
    //cout<<"pushing out"<<mindosega<<" "<<maxdosega<<"\n";
    g.from=mindosega;
    g.to=maxdosega;
    res.push_back(g);
    cout<<res.size()<<endl;
    for(long long i=0; i<res.size(); i++)
    {
        cout<<res[i].from<<" "<<res[i].to<<"\n";
    }
    return 0;
}
