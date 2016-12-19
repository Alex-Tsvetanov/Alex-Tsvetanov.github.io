#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>


using namespace std;
int P;
unsigned long long N;
int tonum(char a)
{
    if(a>='0' and a<='9')return a-'0';
    return a-'A'+10;
}
int main()
{

    cin>>P>>N;
    string A;
    cin>>A;
    if(A.size()==1)A="0"+A;
    long long a = tonum(A[A.size()-1])+tonum(A[A.size()-2])*P;
    string B;
    cin>>B;
    if(B.size()==1)B="0"+B;
    long long b = tonum(B[B.size()-1])+tonum(B[B.size()-2])*P;
    //cout<<a<<" "<<b<<endl;
    for(int i=3;i<=N;i++)
    {
        //cout<<i<<"-"<<a+b<<"\n";

        if(i==N){cout<<(a+b)/10%10<<endl;return 0;}

        long long res=a+b;

        a=b;
        b=res;
        if(a>100000000)a%=100;
        if(b>100000000)b%=100;
    }



    return 0;
}
