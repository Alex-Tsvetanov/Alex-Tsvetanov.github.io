#include <iostream>
using namespace std;

int main()
{
    int n, nachalo = 0, krai = 0, spec_n = 0,spec_k = 0, j, nai_golqm_broi;
    cin >> n;
    int broichisla[n];

    for (int i = 0; i < n; i++)
    {
        cin >> broichisla[i];
    }

    j == n;

    for (int k = 1; k <= n; k++)
    {
        if ( k < j ) {
        if ( nachalo < krai) {
        nachalo = nachalo + broichisla[k - 1];
        } else if ( krai < nachalo ) {
        krai = krai + broichisla[j];
        j--;
        } else if ( nachalo == krai ) {
         nachalo = nachalo + broichisla[k - 1];
         krai = krai + broichisla[j];
         j--;
        }
        spec_n++;
            if ( nachalo == krai ) {
            nai_golqm_broi = k + spec_n;
            }
            if (nachalo < krai) {
            while ( nachalo < krai ) {
                   k++;
                   nachalo = nachalo + broichisla[k - 1];
                   if ( nachalo == krai ) {
                   nai_golqm_broi = k + spec_n;
                   break;
                   }
               }
            }
            if ( krai < nachalo ) {
            while ( krai < nachalo ) {
                spec_n++;
                krai = krai + broichisla[j];
                j--;
                if ( krai == nachalo ) {
                nai_golqm_broi = k + spec_n;
                break;
                }
            }
           }
        } else {
        cout << nai_golqm_broi << endl;
        break;
        }
    }
    return 0;
}
























/*if ( nachalo = krai )
        {
            cout << "yes" << " ";
        }
        else if ( krai < nachalo )
        {
            while ( krai < nachalo )
            {
                izd++;
                krai = krai + broichisla[n - izd];
            }
        }
        else if ( nachalo < krai )
        {
            while ( nachalo < krai )
            {
                izd++;
                nachalo = nachalo + broichisla[k + izd];
            }
        }*/
