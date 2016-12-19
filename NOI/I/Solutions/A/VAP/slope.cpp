#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main ()
{
    short nCountLines = 0;
    cin >> nCountLines;

    bool bHaveHorizontal = false;
    bool bHaveVertical = false;

    vector<short> vecRectX, vecRectY;

    for (short i = 0; i < nCountLines; i++)
    {
        short nX1 = 0, nY1 = 0;
        short nX2 = 0, nY2 = 0;

        cin >> nX1 >> nY1 >> nX2 >> nY2;

        if (nX1 == nX2)
            bHaveHorizontal = true;
        else if (nY1 == nY2)
            bHaveVertical = true;
        else
        {
            short nRectX, nRectY;

            nRectX = nX1 - nX2;
            nRectY = nY1 - nY2;

            for (short m = 0; m < 8; m++)
                for (short n = 2; n < 50; n++)
                    if (nRectX%n == 0 && nRectY%n == 0)
                    {
                        nRectX/=n;
                        nRectY/=n;
                    }

            if (nRectX < 0 && nRectY < 0)
            {
                nRectX*=-1;
                nRectY*=-1;
            }

            bool bDifferent = true;

            for (short j = 0; j < vecRectX.size(); j++)
                if (nRectX == vecRectX[j] && nRectY == vecRectY[j])
                    bDifferent = false;

            if (bDifferent)
            {
                vecRectX.push_back(nRectX);
                vecRectY.push_back(nRectY);
            }

        }
    }

    cout << vecRectX.size() + bHaveHorizontal + bHaveVertical;

    cout << endl;

    return 0;
}
