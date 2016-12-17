#include<iostream>
#include<algorithm>
using namespace std;
struct LineEquation {
    int a,b;
} lines[100];
int x1,x2,y1,y2,n,counter=1;
bool mysrt(LineEquation f,LineEquation s)
{
    if(f.a<s.a) return true;
    if(f.a>s.a) return false;
    if(f.b<s.b) return true;
    if(f.b>s.b) return false;
}
int nod(int a,int b)
{
    int t;
    while(b>0)
    {
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>x1>>y1>>x2>>y2;
        lines[i].a=y2-y1;
        lines[i].b=x1-x2;
        int temp=nod(lines[i].a,lines[i].b);
        lines[i].a/=temp;
        lines[i].b/=temp;
    }
    sort(lines,lines+n,mysrt);
    for(int i=1;i<n;++i)
    {
        if(lines[i].a!=lines[i-1].a || lines[i].b!=lines[i-1].b) ++counter;
    }
    cout<<counter<<endl;
    return 0;
}

/*
6
3 1 6 2
3 2 6 3
1 2 1 3
2 1 2 3
1 4 4 5
6 4 5 5

*/
