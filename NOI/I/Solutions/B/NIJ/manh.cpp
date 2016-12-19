#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int X_a1_1,X_a1_2,X_a2_1,X_a2_2;
    int Y_a1_1,Y_a1_2,Y_a2_1,Y_a2_2;
    cin>>X_a1_1>>Y_a1_1>>X_a1_2>>Y_a1_2;
    cin>>X_a2_1>>Y_a2_1>>X_a2_2>>Y_a2_2;
    if(X_a1_1>X_a1_2)swap(X_a1_1,X_a1_2);
    if(Y_a1_1>Y_a1_2)swap(Y_a1_1,Y_a1_2);
    if(X_a2_1>X_a2_2)swap(X_a2_1,X_a2_2);
    if(Y_a2_1>Y_a2_2)swap(Y_a2_1,Y_a2_2);
    int min_length=1000000;
    if(X_a1_1==X_a1_2)
    {
        int x1=X_a1_1;
        int y2=Y_a2_1;
        for(int y1=Y_a1_1; y1<=Y_a1_2; y1++)
        {
            for(int x2=X_a2_1; x2<=X_a2_2; x2++)
            {
                int length = abs(x1-x2) + abs(y1-y2);
                if(length<min_length)min_length=length;
            }
        }
    }
    if(Y_a1_1==Y_a1_2)
    {
        int y1=Y_a1_1;
        int x2=X_a2_1;
        for(int x1=X_a1_1; x1<=X_a1_2; x1++)
        {
            for(int y2=Y_a2_1; y2<=Y_a2_2; y2++)
            {
                int length = abs(x1-x2) + abs(y1-y2);
                if(length<min_length)min_length=length;
            }
        }
    }
    cout<<min_length;
    return 0;
}
