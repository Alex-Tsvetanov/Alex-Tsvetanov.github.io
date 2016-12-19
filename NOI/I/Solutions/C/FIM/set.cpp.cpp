#include <iostream>

using namespace std;

int main()
{
    long long N, a, b, min1;
    int z[19999];
    cin >> N;
    for (long long c=0; c<2*N; c+=2)
    {
        cin >> a >> b;
        z[c]=a;
        z[c+1]=b;
    }
    min1=z[0];
    int max1=min1;
    for (long long c=0;c<2*N;c++)
    {
        if(z[c+1]<min1)
        {
            min1=z[c+1];
        }
        if(z[c+1]>max1)
        {
            max1=z[c+1];
        }
        if (c==2*(N-1))
        {
            cout << 1 << endl << min1 << " " << max1 << endl;
        }
    }
}
