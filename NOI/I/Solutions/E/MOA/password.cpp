#include <iostream>
using namespace std;
int main()
{
    char a, b, x[1-1], y[1-1];
    int i=0, j=0, sumx=0, sumy=0;
    cin >> x>> y;
    while(i<4) {
        if(a>='a' and a<='z') {
            sumx=sumx+(a-'a'+1);
        } else if(a<='A' and a>='Z') {
            sumx=sumx+((a-'A'+1)*2);
        } else if(a==1 or a==2 or a==3 or a==4 or a==5 or a==6 or a==7 or a==8 or a==9) {
            sumx=sumx+a;
        }
        i++;

    }
    while(j<4) {
        if(b>='a' and b<='z') {
            sumy=sumy+(b-'a'+1);
        } else if(b<='A' and b>='Z') {
            sumy=sumy+((b-'A'+1)*2);
        } else if(b==1 or b==2 or b==3 or b==4 or b==5 or b==6 or b==7 or b==8 or b==9) {
            sumy=sumy+b;
        }
                j++;


    }

    if(sumx > sumy) {
        cout << x << " " << sumx << endl;
    } else if( sumy >sumx) {
        cout << y << " " << sumy<< endl;
    } else if(sumx == sumy) {
        cout << 0 << endl;
    }


    return 0;
}
