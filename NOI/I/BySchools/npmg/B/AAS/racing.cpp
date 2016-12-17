#include <cstdio>
#include <cstdlib>
#include <vector>

int stops;
std::vector<int> prices;

int min(int a, int b)
{
    return std::min(a,b);
}

int min(int a, int b, int c)
{
    return min(min(a,b),c);
}

int find_min_price()
{
    if(stops==3) return min(prices[0], prices[1], prices[2]);
    if(stops==2) return min(prices[0], prices[1]);
    if(stops==1) return prices[0];
}

int main(int argc, char** argv)
{
    int tmp, i, sum=0;
    scanf("%d", &stops);
    prices.resize(stops);

    for(i=0; i<stops; i++)
    {
        scanf("%d", &prices.at(i));
    }

    printf("%d", find_min_price());
}
