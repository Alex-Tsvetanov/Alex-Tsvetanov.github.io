#include<iostream>
#include<cmath>

int main()
{
    long long from, to;
    std::cin>>from>>to;
/*
        long long square = std::sqrt( 1+ 4*start );
    long long y1 = ( 1 + square ) /2;
    long long y2 = ( 1 - square ) /2;
*/
    long long sqr1 = std::sqrt( 1+4*from );
    long long sqr2 = std::sqrt( 1+4*to );

    long long y1f = ( 1 + sqr1 ) /2;
    long long y2f = ( 1 - sqr1 ) /2;

    long long y1t = ( 1 + sqr2 ) /2;
    long long y2t = ( 1 - sqr2 ) /2;

    long long yf = std::min( std::abs(y1f), std::abs(y2f) );
    long long yt = std::max( std::abs(y1t), std::abs(y2t) );

    while( yf*(yf+1) < from )
        yf++;
    while( yt*(yt+1) > to )
        yt--;

    //std::cout<<yt<<" "<<yf<<std::endl;
    std::cout<<yt-yf+1<<std::endl;
}
