#include<iostream>
using namespace std;
int main(){
long long chisloto1,chisloto6,chisloto8,chisloto9,chislo1,chislo2;
chisloto1=1;
chisloto6=6;
chisloto8=8;
chisloto9=9;
cin>>chislo1;
cout<<" ";
cin>>chislo2;
cout<<endl;
if(chislo1==chisloto1){
chislo1=chisloto1;
}
if(chislo1==chisloto6){
chislo1=chisloto9;
}
if(chislo1==chisloto8){
chislo1=chisloto8;
}
if(chislo1==chisloto9){
chislo1=chisloto9;
}
if(chislo2==chisloto1){
chislo2=chisloto1;
}
if(chislo2==chisloto6){
chislo2=chisloto9;
}
if(chislo2==chisloto8){
chislo2=chisloto8;
}
if(chislo2==chisloto9){
chislo2=chisloto9;
}
if(chislo1>chislo2){
cout<<chislo1<<chislo2<<endl;
}
else{
cout<<chislo2<<chislo1<<endl;
}
return 0;
}
