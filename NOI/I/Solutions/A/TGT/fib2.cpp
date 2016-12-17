#include<iostream>
#include<string>
using namespace std;
int base;
unsigned long long n;
string f[3];
string reverseString(string a)
{
    int len=a.length();
    string reversed;
    for(int i=0;i<len;++i)
    {
        reversed.push_back(a[len-1-i]);
    }
    return reversed;
}
char toChar(int a)
{
    switch(a)
    {
        case 0: return '0';
        case 1: return '1';
        case 2: return '2';
        case 3: return '3';
        case 4: return '4';
        case 5: return '5';
        case 6: return '6';
        case 7: return '7';
        case 8: return '8';
        case 9: return '9';
        case 10: return 'A';
        case 11: return 'B';
        case 12: return 'C';
        case 13: return 'D';
        case 14: return 'E';
        case 15: return 'F';
    }
}
int toNum(char c)
{
    switch(c)
    {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'A': return 10;
        case 'B': return 11;
        case 'C': return 12;
        case 'D': return 13;
        case 'E': return 14;
        case 'F': return 15;
    }
}
void addNums()
{
    int len0=f[0].length(),len1=f[1].length(),i0=0,i1=0,over=0,sumOfDigits;
    f[2].clear();
    while(i0<len0 && i1<len1)
    {
        sumOfDigits=toNum(f[0][i0])+toNum(f[1][i1])+over;
        over=sumOfDigits/base;
        sumOfDigits%=base;
        f[2].push_back(toChar(sumOfDigits));
        ++i0;
        ++i1;
    }
    while(i0<len0)
    {
        sumOfDigits=toNum(f[0][i0])+over;
        over=sumOfDigits/base;
        sumOfDigits%=base;
        f[2].push_back(toChar(sumOfDigits));
        ++i0;
    }
    while(i1<len1)
    {
        sumOfDigits=+toNum(f[1][i1])+over;
        over=sumOfDigits/base;
        sumOfDigits%=base;
        f[2].push_back(toChar(sumOfDigits));
        ++i1;
    }
    if(over) f[2].push_back(toChar(over));
}
int main()
{
    cin>>base>>n>>f[0]>>f[1];
    if(n<3)
    {
        int len=f[n-1].length();
        if(len>1) cout<<f[n-1][len-2]<<endl;
        else cout<<"0\n";
    }
    n-=2;
    f[0]=reverseString(f[0]);
    f[1]=reverseString(f[1]);
    for(unsigned long long i=0;i<n;++i)
    {
        addNums();
        f[0]=f[1];
        f[1]=f[2];
        //cout<<f[1]<<endl;
    }
    cout<<f[1][1]<<endl;
    return 0;
}
