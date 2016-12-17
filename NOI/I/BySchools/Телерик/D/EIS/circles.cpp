#include<iostream>
using namespace std;
int main (){
long long a,b,chislo,proverqvano,brCircles=0,p;
char dejstvie;
cin>>a>>b>>dejstvie;
if(dejstvie=='+'){
    chislo=a+b;
}
if(dejstvie=='-'){
    chislo=a-b;
}
if(dejstvie=='*'){
    chislo=a*b;
}
p=chislo;
if(chislo!=0){
    while(chislo>0){
        proverqvano=chislo%10;
        chislo=chislo/10;
        if(proverqvano==0 || proverqvano==6 || proverqvano==9){
            brCircles++;
        }
        if(proverqvano==8){
            brCircles=brCircles+2;
        }
    }
}else{
    brCircles=1;
}
cout<<brCircles<<endl;

return 0;
}
