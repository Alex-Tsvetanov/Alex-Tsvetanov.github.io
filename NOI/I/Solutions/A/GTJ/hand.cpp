#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>


using namespace std;

int main()
{
    int N;
    cin>>N;

    //     index, count
    pair < int,   int > max = make_pair(0,0);
    pair < int,   int > min = make_pair(0,0);
    cin>>max.second;
    for(int i=1;i<N;i++)
    {
        int a;
        cin>>a;
        if(a>max.second)max=make_pair(i,a);
        else if(a>0)
        {
            //cout<<i<<" "<<max.first<<" ";
            max.second++;
        }
        if(a<min.second)min=make_pair(i,a);
        else if(a>=i)
        {
            //cout<<i<<" "<<max.first<<" ";
            min.second++;
        }
    }

    cout<<max.second<<endl;
    cout<<min.second<<endl;
    return 0;
}
