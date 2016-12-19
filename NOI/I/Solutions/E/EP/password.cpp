#include <iostream>

using namespace std;

int main(){
    long long password1,password2,max1,p1,p2;
    char a,b,c,d;
    char a1,b1,c1,d1;
    cin>>a>>b>>c>>d>>a1>>b1>>c1>>d1;
    if(a=='A' or a=='B' or a=='C' or a=='D' or a=='E' or a=='F' or a=='G' or a=='H' or a=='I' or a=='J' or a=='K' or a=='L' or a=='M' or a=='N' or a=='O' or a=='P' or a=='Q' or a=='R' or a=='S' or a=='T' or a=='U' or a=='V' or a=='W' or a=='X' or a=='Y' or a=='Z'){
        if(b=='A' or b=='B' or b=='C' or b=='D' or b=='E' or b=='F' or b=='G' or b=='H' or b=='I' or b=='J' or b=='K' or b=='L' or b=='M' or b=='N' or b=='O' or b=='P' or b=='Q' or b=='R' or b=='S' or b=='T' or b=='U' or b=='V' or b=='W' or b=='X' or b=='Y' or b=='Z'){
           password1=(a-'A'+1)*2+(b-'A'+1)*2+(c-'0')+(d-'0');
        } else {
           password1=(a-'A'+1)*2+(b-'a'+1)+(c-'0')+(d-'0');
        }
    } else {
        if(b=='A' or b=='B' or b=='C' or b=='D' or b=='E' or b=='F' or b=='G' or b=='H' or b=='I' or b=='J' or b=='K' or b=='L' or b=='M' or b=='N' or b=='O' or b=='P' or b=='Q' or b=='R' or b=='S' or b=='T' or b=='U' or b=='V' or b=='W' or b=='X' or b=='Y' or b=='Z'){
           password1=(a-'a'+1)+(b-'A'+1)*2+(c-'0')+(d-'0');
        } else {
           password1=(a-'a'+1)+(b-'a'+1)+(c-'0')+(d-'0');
        }
    }
    if(a1=='A' or a1=='B' or a1=='C' or a1=='D' or a1=='E' or a1=='F' or a1=='G' or a1=='H' or a1=='I' or a1=='J' or a1=='K' or a1=='L' or a1=='M' or a1=='N' or a1=='O' or a1=='P' or a1=='Q' or a1=='R' or a1=='S' or a1=='T' or a1=='U' or a1=='V' or a1=='W' or a1=='X' or a1=='Y' or a=='Z'){
        if(b1=='A' or b1=='B' or b1=='C' or b1=='D' or b1=='E' or b1=='F' or b1=='G' or b1=='H' or b1=='I' or b1=='J' or b1=='K' or b1=='L' or b1=='M' or b1=='N' or b1=='O' or b1=='P' or b1=='Q' or b1=='R' or b1=='S' or b1=='T' or b1=='U' or b1=='V' or b1=='W' or b1=='X' or b1=='Y' or b1=='Z'){
           password2=(a1-'A'+1)*2+(b1-'A'+1)*2+(c1-'0')+(d1-'0');
        } else {
           password2=(a1-'A'+1)*2+(b1-'a'+1)+(c1-'0')+(d1-'0');
        }
    } else {
        if(b1=='A' or b1=='B' or b1=='C' or b1=='D' or b1=='E' or b1=='F' or b1=='G' or b1=='H' or b1=='I' or b1=='J' or b1=='K' or b1=='L' or b1=='M' or b1=='N' or b1=='O' or b1=='P' or b1=='Q' or b1=='R' or b1=='S' or b1=='T' or b1=='U' or b1=='V' or b1=='W' or b1=='X' or b1=='Y' or b1=='Z'){
           password2=(a1-'a'+1)+(b1-'A'+1)*2+(c1-'0')+(d1-'0');
        } else {
           password2=(a1-'a'+1)+(b1-'a'+1)+(c1-'0')+(d1-'0');
        }
    }
    if(password1==password2){
        cout<<0<<endl;
        return 0;
    }
    max1=max(password1,password2);
    if(max1==password1){
        cout <<a<<b<<c<<d<<" "<< max1 << endl;
    } else {
        cout <<a1<<b1<<c1<<d1<<" "<< max1 << endl;
    }
    return 0;
}
