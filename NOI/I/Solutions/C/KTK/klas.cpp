#include<iostream>
#include<string>

using namespace std;
int main(){
string dul;
int i=0,zdrta=0,rukost=0;
cin>>dul;
for(i=0;i<dul.size();i++){
    if(i!=0 && dul[i]=='+')
        zdrta+=i+1;
    if(i!=0 && dul[i]=='-'){
        for(int j=0;j<i;j++){
            if(dul[j]=='+')
                zdrta+=2;
            if(dul[j]=='-')
                rukost++;
        }
    }
}
cout<<rukost<<" "<<zdrta<<endl;

return 0;
}
