#include<iostream>
using namespace std;

int main(){
    unsigned long long a, b, result, lenght = 0, circles = 0, digit[ 20 ];
    char symb;
    cin >> a >> b >> symb;
    if( symb == '*' ){result = a * b;}
    if( symb == '+' ){result = a + b;}
    if( symb == '-' ){result = a - b;}
    do{
        digit[ lenght ] = result % 10;
        if( digit[ lenght ] == 0 || digit[ lenght ] == 6 || digit[ lenght ] == 9 ){circles++;}
        if( digit[ lenght ] == 8 ){ circles += 2;}
        lenght ++;
        result /= 10;
    }
    while( result > 0 );
    cout << circles << "\n";
    return 0;
}
