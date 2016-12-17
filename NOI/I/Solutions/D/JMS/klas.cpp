#include <iostream>

using namespace std;

int main()
{
    int boys;
    int girls;
    long long hi;
    long long hs;


    cin >> boys >> girls;


    if(boys > 1){
hs = (boys*(boys-1))/2;
            hi = (girls+boys)*(girls+boys-1)-((boys)*(boys-1))/2;
}
else if(boys == 1){
        hs = 0;
 hi = (girls+boys)*(girls+boys-1);

}
else if(boys == 0){
hs = 0;
    hi = girls*(girls-1);

}
else if(boys == 1){
 hi = (girls+boys)*(girls+boys-1);

}



else if(boys == 1){
 hi = (girls+boys)*(girls+boys-1);

}
cout << hs<<" ";
cout << hi<<" ";

return 0;

cin.get();
}






































