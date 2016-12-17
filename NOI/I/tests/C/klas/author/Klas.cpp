#include <iostream>
using namespace std;
string s;
int boys, girls, hello, shake;
int main ()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            if (boys + girls == 0)
            {
                girls++;
                continue;
            }
            hello++;
            hello+=boys+girls;
            girls++;
        }
        else
        {
            shake+=boys;
            hello+= 2*girls;
            boys++;
        }
    }
    cout << shake << " " << hello << endl;
    return 0;
}
