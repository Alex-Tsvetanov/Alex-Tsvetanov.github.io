#include<iostream>
using namespace std;
int main(){
    long long a, b, res, output=0;
    char c;
    cin >> a >> b >> c;
    if(c=='+')res=a+b;
    else if(c=='-')res=a-b;
    else if(c=='*')res=a*b;
    while(res>0){
        switch(res%10){
            case 6:output++;break;
            case 9:output++;break;
            case 0:output++;break;
            case 8:output+=2;
        }
        res/=10;
    }
    cout << output << endl;
    return 0;
}
