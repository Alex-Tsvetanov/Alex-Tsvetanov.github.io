#include<iostream>
using namespace std;
int main (){
       char cifri1[160000];
       long long cifri[160000] , turseno , n , i;
       cin>>cifri1;
       for(i=0 ; i<160000 ; i=i+1){
              if(cifri1[i]!='\0'){
                     if(cifri1[i]=='0'){
                            cifri[i]=0;
                     }
                     if(cifri1[i]=='1'){
                            cifri[i]=1;
                     }
                     if(cifri1[i]=='2'){
                            cifri[i]=2;
                     }
                     if(cifri1[i]=='3'){
                            cifri[i]=3;
                     }
                     if(cifri1[i]=='4'){
                            cifri[i]=4;
                     }
                     if(cifri1[i]=='5'){
                            cifri[i]=5;
                     }
                     if(cifri1[i]=='6'){
                            cifri[i]=6;
                     }
                     if(cifri1[i]=='7'){
                            cifri[i]=7;
                     }
                     if(cifri1[i]=='8'){
                            cifri[i]=8;
                     }
                     if(cifri1[i]=='9'){
                            cifri[i]=9;
                     }
              }
       }
return 0;
}
