#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;
vector<int> fr;
priority_queue<pair<int,int> > fr2;
int br=0;
void add(int kolko)
{
    priority_queue<pair<int,int> > temp;
    for(int i=0;i<kolko;i++)
    {
        pair<int,int> k;
        k=fr2.top();
        fr2.pop();
        k.first+=1;
        temp.push(k);
    }
    pair<int,int> k(kolko,br);
    for(int i=0;i<kolko;i++)
    {
        k=temp.top();
        temp.pop();
        fr2.push(k);
    }
    k.first=kolko;
    k.second=br;
    fr2.push(k);
    br++;
}
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        add(x);
    }
    pair<int,int> k;
    k=fr2.top();
    cout<<k.first<<" ";
    for(int i=0;i<br-1;i++)
    {
        fr2.pop();
    }
    k=fr2.top();
    cout<<k.first<<endl;
}
