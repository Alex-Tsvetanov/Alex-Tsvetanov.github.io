#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    vector <int>vect;
    cin>>n;
    if(n<=0){cout<<"0"<<endl;}
    for(int i = 0; i<n; i++)
    {
        int a;
        cin>>a;
        vect.push_back(a);
    }

    return 0;
}
