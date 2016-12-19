#include<iostream>

int main()
{
    int p;
    long long n;
    std::cin>>p>>n;

    std::string input1, input2;
    std::cin>>input1>>input2;

    int f1[2], f2[2];

    if( input1.length() < 2 )
    {
        if( input1[0] >= '0' and input1[0] <= '9' )
            f1[1] = input1[0] - '0';
        else
            f1[1] = input1[0] - 'A' + 10;
        f1[0] = 0;
    }else
    {
        if( input1[input1.length()-2] >= '0' and input1[input1.length()-2] <= '9' )
            f1[0] = input1[input1.length() - 2] - '0';
        else
            f1[0] = input1[input1.length() - 2] - 'A' + 10;
        if( input1[input1.length()-1] >= '0' and input1[input1.length()-1] <= '9' )
            f1[1] = input1[input1.length() - 1] - '0';
        else
            f1[1] = input1[input1.length() - 1] - 'A' + 10;
    }
    if( input2.length() < 2 )
    {
        if( input2[0] >= '0' and input2[0] <= '9' )
            f2[1] = input2[0] - '0';
        else
            f2[1] = input2[0] - 'A' + 10;
        f2[0] = 0;
    }else
    {
        if( input2[input2.length()-2] >= '0' and input2[input2.length()-2] <= '9' )
            f2[0] = input2[input2.length() - 2] - '0';
        else
            f2[0] = input2[input2.length() - 2] - 'A' + 10;
        if( input2[input2.length()-1] >= '0' and input2[input2.length()-1] <= '9' )
            f2[1] = input2[input2.length() - 1] - '0';
        else
            f2[1] = input2[input2.length() - 1] - 'A' + 10;
    }

    long long i;
    for( i=2;i<n;i++ )
    {
        if( i%2 == 0 )
        {
            f1[1]+=f2[1];
            while( f1[1] >= p )
            {
                f1[1]-=p;
                f1[0]++;
            }
            f1[0]+=f2[0];
            while( f1[0] >= p )
            {
                f1[0]-=p;
            }
        }else
        {
            f2[1]+=f1[1];
            while( f2[1] >= p )
            {
                f2[1]-=p;
                f2[0]++;
            }
            f2[0]+=f1[0];
            while( f2[0] >= p )
            {
                f2[0]-=p;
            }
        }
    }

    if( i%2 == 1 )
    {
        if( f1[0] < 10 )
            std::cout<<f1[0];
        else
            std::cout<<(char) (f1[0]+'A'-10);
    }
    else
    {
        if( f2[0] < 10 )
            std::cout<<f2[0];
        else
            std::cout<<(char) (f2[0]+'A'-10);
    }
}
