#include <iostream>
using namespace std;
int main () {
    char a,b,c,d,x,y,z,w;
    long long sbor1=0,sbor2=0;
    cin >> a >> b >> c >> d;
    cin >> x >> y >> z >> w;

     if (a<='9' and a>='0') {
        sbor1=sbor1+(a-'1'+1);
    }
    else if (a<='Z' and a>='A') {
        sbor1=sbor1+(a-'A'+1)*2;
    }
    else if (a<='z' and a>='a') {
        sbor1=sbor1+(a-'a'+1);
    }
     if (b<='9' and b>='0') {
        sbor1=sbor1+(b-'1'+1);
    }
    else if (b<='Z' and b>='A') {
        sbor1=sbor1+(b-'A'+1)*2;
    }
    else if (b<='z' and b>='a') {
        sbor1=sbor1+(b-'a'+1);
    }

     if (c<='9' and c>='0') {
        sbor1=sbor1+(c-'1'+1);
    }
    else if (c<='Z' and c>='A') {
        sbor1=sbor1+(c-'A'+1)*2;
    }
    else if (c<='z' and c>='a') {
        sbor1=sbor1+(c-'a'+1);
    }

     if (d<='9' and d>='0') {
        sbor1=sbor1+(d-'1'+1);
    }
    else if (d<='Z' and d>='A') {
        sbor1=sbor1+(d-'A'+1)*2;
    }
    else if (d<='z' and d>='a') {
        sbor1=sbor1+(d-'a'+1);
    }

    if (x<='9' and x>='0') {
        sbor2=sbor2+(x-'1'+1);
    }
    else if (x<='Z' and x>='A') {
        sbor2=sbor2+(x-'A'+1)*2;
    }
    else if (x<='z' and x>='a') {
        sbor2=sbor2+(x-'a'+1);
    }

    if (y<='9' and y>='0') {
        sbor2=sbor2+(y-'1'+1);
    }
    else if (y<='Z' and y>='A') {
        sbor2=sbor2+(y-'A'+1)*2;
    }
    else if (y<='z' and y>='a') {
        sbor2=sbor2+(y-'a'+1);
    }

     if (z<='9' and z>='0') {
        sbor2=sbor2+(z-'1'+1);
    }
    else if (z<='Z' and z>='A') {
        sbor2=sbor2+(z-'A'+1)*2;
    }
    else if (z<='z' and z>='a') {
        sbor2=sbor2+(z-'a'+1);
    }

     if (w<='9' and w>='0') {
        sbor2=sbor2+(w-'1'+1);
    }
    else if (w<='Z' and w>='A') {
        sbor2=sbor2+(w-'A'+1)*2;
    }
    else if (w<='z' and w>='a') {
        sbor2=sbor2+(w-'a'+1);
    }
    if (sbor1>sbor2) {
        cout << a << b << c << d << " " << sbor1 << endl;
    }
    else if (sbor2>sbor1) {
            cout << x << y << z << w << " " << sbor2 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}
