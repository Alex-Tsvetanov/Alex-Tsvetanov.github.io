#include<iostream>
#include<queue>
#include<fstream>

struct story_t
{
    long long fun;
    long long old;
    story_t( int f, int o )
    {
        fun = f;
        old = o;
    }

   /* bool operator > ( const story_t &othr )
    {
        return fun > othr.fun;
    }
    bool operator < ( const story_t &othr )
    {
        return fun < othr.fun;
    }*/
};

bool operator < ( const story_t &a, const story_t &b )
{
    return a.fun < b.fun;
}

int main()
{
    long long n, k;
    std::cin>>n>>k;

    long long first, mul, add, mod;
    std::cin>>first>>mul>>add>>mod;

    std::priority_queue< story_t > q;
    q.push( {first, 0} );
    long long last = first;

    long long ans = 0;
    for( long long time = 0; time < n; time++ )
    {
        story_t fun = q.top();
        while( time - fun.old > k )
        {
            q.pop();
            fun = q.top();
        }
        ans+=fun.fun;
        last = (last*mul + add )%mod;
        q.push( { last, time } );
    }
    std::cout<<ans<<std::endl;

}
