#include<iostream>
using namespace std;
int main (){
       long long data[4] , mesec[4] , den[4][2] , i;
       //Opredelqne na datata:
       for(i=0 ; i<4 ; i=i+1){
              cin>>den[i];
              if(den[i][1]=='/' || den[i][2]=='/'){
                     cin>>mesec[i];
              }
       }
return 0;
}
