#include<iostream>
#include<set>
#include<vector>
using namespace std;

typedef long long int INT;
set<INT> s;
vector<INT> v;

int main()
{
   INT x;
   cin >> x;

   INT m=1+(x+1)/2;
   for(INT a=0;a<=m;a++) s.insert(a*a);

   for(INT a=0;a<=m;a++)
    if(s.count(a*a-x)==1) v.push_back(a);

   int c=v.size();
   cout << c << endl;
   for(int i=0;i<c;i++)
   {
     INT a=v[i];
     cout << a*a << " " << a*a-x << endl;
   }
}
