#include <iostream>
using namespace std;
int suma_na_chisla(int arr[], int from, int to)
{
    int sumichka = 0;
    for(int i = from; i <= to; i++)
    {
        sumichka+=arr[i];
    }
    return sumichka;
}
int main()
{
    int n;
    cin >> n;
    int masiv[n];
    for(int i = 0; i < n; i++) cin>>masiv[i];
  //  int otkude, dokude;
    //cin >> otkude >> dokude;
    //cout<<suma_na_chisla(masiv, otkude, dokude);
    int tekusht_broi, max_broi = 0;
    bool ima_li_otg = false;
    for(int i=0; i < n; i++)
    {
        int otrez = suma_na_chisla(masiv, 0, i);
        for(int p = i + 1; p < n; p++)
        {
            if(otrez == suma_na_chisla(masiv, p, n-1))
            {
                ima_li_otg = true;
                tekusht_broi = n + i - p + 1 ; /// i + 1 + n - 1 - j + 1
                if(tekusht_broi > max_broi)
                {
                    max_broi = tekusht_broi;
                }
            }
        }
    }

    cout << max_broi;
    cout << endl;
    /*
    if(ima_li_otg = false)
    {
        cout << 0;
    }
    else
    {
        cout << max_broi;
    }
    */
    return 0;
}
