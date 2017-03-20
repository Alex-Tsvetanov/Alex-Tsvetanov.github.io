#include<iostream>
using namespace std;
int main () {
    long long n, br, maximal = 0, help = 0;
    cin>>n;
    long long a[n] , b[n];
    bool daLiE = true;
    for(br = 0 ; br < n ; br ++){
        cin>>a[br]>>b[br];
    }
    for(br = 0 ; br < n ; br ++){
        help = 0;
        daLiE = true;
        while(daLiE == true || help + br + 1 < n){
            if((a[br + help + 1] <= a[br + help] && b[br + help + 1] <= b[br + help]) ||
             (a[br + help + 1] <= b[br + help] && b[br + help + 1] <= a[br + help])){
                help ++;
             }else{
                if(help >= maximal){
                    maximal = help;
                }
                    daLiE = false;
             }
            help ++;
        }
    }
    cout<<maximal<<"\n";
    return 0;
}
