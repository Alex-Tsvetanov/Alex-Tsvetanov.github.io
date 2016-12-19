#include <iostream>
using namespace std;

int main(){
    long long m,n,i=0,a=0,j=0;
    cin >> m >> n;
    if(m%2==0){
        if(n%2==0){
            for(i=m;i<=n;i=i+2){
                for(j=1;j<=i;j++){
                    if(j*(j+1)==i){
                        a++;
                        break;
                    }
                }
            }
        }else{
            for(i=m;i<n;i=i+2){
                for(j=1;j<=i;j++){
                    if(j*(j+1)==i){
                        a++;
                        break;
                    }
                }
            }
        }
    }else{
        if(n%2==0){
            for(i=m+1;i<=n;i=i+2){
                for(j=1;j<=i;j++){
                    if(j*(j+1)==i){
                        a++;
                        break;
                    }
                }
            }
        }else{
            for(i=m+1;i<n;i=i+2){
                for(j=1;j<=i;j++){
                    if(j*(j+1)==i){
                        a++;
                        break;
                    }
                }
            }
        }
    }
    cout << a << endl;
return 0;
}
