#include <iostream>

using namespace std;

int main()
{
    int employees = 0;
    cin >> employees;

    int handshakes[employees];
    int min_handshakes = 0;
    int max_handshakes = employees;

    int friends[employees] = {0};

    for(int i = 0; i < employees; i++)
    {
        cin >> handshakes[i];
    }

    int best_option = 0;
    for(int i = 0; i < employees; i++)
    {
        int best_friends = 0;
        for(int j = 0; j < i; j++)
        {
            if(friends[j] > best_friends)
            {
                best_option = j;
                best_friends = friends[j];
            }
        }

        if(handshakes[i] != 0)
        {
            for(int j = 0; j < handshakes[i]; j++)
            {
                friends[best_option]++;

                for(int l = best_option - 1; l > 0; l--)
                {
                    if(friends[l] > best_option)
                    {
                        best_option = friends[l];
                    }
                }
            }
        }
    }

    for(int i = 0; i < employees; i++)
        cout << friends[i] << " ";
    return 0;
}
