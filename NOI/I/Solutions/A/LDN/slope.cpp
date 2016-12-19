#include<iostream>
#include<cmath>
#include<vector>
struct point_t
{
    float x;
    float y;
};

float Distance( point_t from, point_t to)
{
    float ans = (to.x-from.x)*(to.x-from.x) + (to.y - from.y)*(to.y - from.y);
    //std::cout<<to.x-from.x <<" "<<to.y-from.y<<" "<<sqrt(ans)<<std::endl;
    ans = sqrt(ans);
    return ans;
}

std::vector<float> cosin;

int main()
{
    int n;
    std::cin>>n;
    for( int i=0;i<n;i++ )
    {
        point_t begin, end;
        std::cin>>begin.x>>begin.y>>end.x>>end.y;
        if( begin.x == end.x )
        {
            bool pushOne = true;
            for( int j=0;j<cosin.size();j++ )
            {
                if( cosin[j] == 1 )
                {
                    pushOne = false;
                    break;
                }
            }
            if( pushOne )
                cosin.push_back(1);
        }
        else
            {
            if( begin.y == end.y )
            {
                bool pushZero = true;
                for( int j=0;j<cosin.size();j++ )
                {
                    if( cosin[j] == 0 )
                    {
                        pushZero = false;
                        break;
                    }
                }
                if( pushZero )
                    cosin.push_back(0);
            }else
            {
                if( begin.x > end.x )
                    std::swap( begin, end );
                float tempcosin = (float) (end.x-begin.x)/Distance(begin, end);
                if( begin.y > end.y )
                    tempcosin*=-1;

                bool pushNew = true;
                for( int j=0;j<cosin.size();j++ )
                {
                    if( cosin[j] == tempcosin )
                    {
                        pushNew = false;
                        break;
                    }
                }

                if( pushNew )
                    cosin.push_back(tempcosin);
            }
        }
    }
    std::cout<<cosin.size()<<std::endl;
//    for( int i=0;i<cosin.size();i++ )
//        std::cout<<cosin[i]<<" ";
}
