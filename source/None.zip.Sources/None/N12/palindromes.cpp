#include<iostream>
using namespace std;
int main(){
       long long n,chisla,chisla2,pali,cifri[10],br,zames=0;
       cin>>n;
       for(int a=n-1;a>=0 and a<n;a--){
                for(int b=n-1;b>=0 and b<n;b--){
                         pali=a*b;
                         for(br;pali!=0;br++){
                                cifri[br]=pali%10;
                                pali=pali/10;
                         }
                         for(int k=0;k<br;k++){
                                zames=(zames+cifri[k])*10;
                         }
                         zames=zames/10;
                         if(zames=a*b){
                                                if(a>b){
                                                                chisla=b;
                                                                chisla2=a;
                                                }
                                                if(a<b){
                                                                chisla=a;
                                                                chisla2=b;
                                                }

                                                 a=n;
                                                 b=n;
                         }
                }
       }
cout<<chisla<<chisla2<<zames;
       return 0;
}
