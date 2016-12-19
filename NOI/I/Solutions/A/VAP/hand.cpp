#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main ()
{
    int nCount = 0;
    cin >> nCount;

    vector<int> vecPeople;

    for (int i = 0 ; i < nCount; i++)
    {
        int nPerson;
        cin >> nPerson;

        vecPeople.push_back(nPerson);
    }

    int nMaxFriends = 0;
    int nMinFriends = vecPeople.size();
    int k = 0;

    for (int i = 0; i < vecPeople.size(); i++)
    {
        if (nMinFriends > vecPeople[i])
        {
            nMinFriends = vecPeople[i];

            for (int j = i+1 ; j < vecPeople.size(); j++)
                if (vecPeople[j] >= j)
                {
                    nMinFriends++;
                    k = j;
                    break;
                }

            i = k;
        }

    }

    int nZeros = 0;

    for (int i = 0; i < vecPeople.size(); i++)
        if (vecPeople[i] == 0)
            nZeros++;

    for (int i = 0; i < vecPeople.size(); i++)
    {
        if (vecPeople[i] == 0)
            nZeros--;

        if (nMaxFriends < ( vecPeople[i] + vecPeople.size() - i - nZeros - 1))
            nMaxFriends =  vecPeople[i] + vecPeople.size() - i - nZeros - 1;
    }

    cout << nMaxFriends;
    cout << endl;
    cout << nMinFriends;
    cout << endl;

    return 0;
}
