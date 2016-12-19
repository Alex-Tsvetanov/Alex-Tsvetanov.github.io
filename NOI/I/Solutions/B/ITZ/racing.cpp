#include<iostream>
using namespace std;

int main ()
{
    int n;
    int sum = 0;
    cin >> n;
    bool goneThrough[n];
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        goneThrough[i] = 0;
    }
    for(int i = 1; i < n-1; i++)
    {
        if((a[i] >= (a[i-1] + a[i+2])) && (a[i+1] >= (a[i-1] + a[i+2]))) {sum += a[i-1] + a[i+2]; goneThrough[i-1] = 1; goneThrough[i] = 1; goneThrough[i+1] = 1; goneThrough[i+2] = 1; }
    }
    int save = 0;
    if(goneThrough[2] && !goneThrough[0]) sum -= a[0];
    for(int i = save; i < n; i++)
    {
        if(goneThrough[i])
        {
            int path1 = 0;
            int path2 = 0;
            int path3 = 0;
            for(int j = save; j <= i; j+=3)
            {
                path1 += a[j];
            }
            for(int j = save+1; j <= i; j+=3)
            {
                path2 += a[j];
            }
            for(int j =save+2; j <= i; j+=3)
            {
                path3 += a[j];
            }
            int path= min(min(path1,path2),path3);
            goneThrough[i] = 0; goneThrough[i+1] = 0; goneThrough[i+2] = 0; goneThrough[i+3] = 0;
            save = i+4;
            sum += path;
        }
    }

            int path1 = 0;
            int path2 = 0;
            int path3 = 0;
            for(int j = save; j < n; j+=3)
            {
                path1 += a[j];
            }
            for(int j = 1+save; j < n; j+=3)
            {
                path2 += a[j];
            }
            for(int j = 2+save; j < n; j+=3)
            {
                path3 += a[j];
            }
            int path= min(min(path1,path2),path3);
            sum += path;
            cout << sum << endl;
    return 0;
}
