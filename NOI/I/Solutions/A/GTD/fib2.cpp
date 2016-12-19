#include<iostream>
using namespace std;
int fibn(int f1 , int f2 , int n)
{
    if(n==1) return f1;
    if(n==2) return f2;
    else return (fibn(f1,f2,n-1)+fibn(f1,f2,n-2));
}
int main()
{
    int p, n , f1 , f2;
    do{cin>>p>>n;}while(p<2||p>16||n<1);
    cin>>f1>>f2;
    cout<<(fibn(f1,f2,n)/10)%10;
}
