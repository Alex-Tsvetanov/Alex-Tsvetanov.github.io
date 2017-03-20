#include<iostream>
using namespace std;
int main(){
                long long n,kolko=0,kolko1;
                cin>>n;
                long long karti[n][2];
                for(int g=0;g<n;g++){
                                for(int k=0;k<2;k++){
                                                cin>>karti[g][k];
                                }
                }
                for(int g=0;g<n;g++){
                                for(int k=0;k<2;k++){
                                                if(karti[g][k]==karti[g+1][k]){
                                                                kolko++;
                                                }
                                                else{
                                                                kolko=0;
                                                }
                                }
                }
                cout<<kolko;
                return 0;
}
