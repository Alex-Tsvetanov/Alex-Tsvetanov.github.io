#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,x,y=0;
    string p;

    cin>>a>>b>>p;

    p.substr(0,'+');

        x=a+b;

        if(x%10==0 || x%10==6 || x%10==9) y++;



    cout<<y<<endl;

}
