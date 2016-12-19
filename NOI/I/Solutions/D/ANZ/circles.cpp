#include <iostream>
#include <cstring>
using namespace std;
long long prenos[20];
long long lenA, lenB, i, razlika, broi=0, j;
int main (){
char c, a[15], b[15], chislo[30];
bool stava=false;
cin>>a>>b>>c;
lenA=strlen(a);
lenB=strlen(b);
razlika=lenA-lenB;
if(c=='+'){
    for(i=lenA-1;i>=0;i--){
        if(a[i]-48+b[i-razlika]-48>9){ ///prenos
            prenos[i]=1;
            if(prenos[i+1]==1){
                chislo[i+1]=a[i]+b[i-razlika]+1-10;
            }else{
                chislo[i+1]=a[i]+b[i-razlika]-10;
            }
        }else{
            if(prenos[i+1]==1){
                chislo[i+1]=a[i]+b[i-razlika]+1;
            }else{
                chislo[i+1]=a[i]+b[i-razlika];
            }
        }
        chislo[i+1]=chislo[i+1]-48;
    }
}
if(c=='*'){
    for(j=lenA-1;i>=0;i--){
        for(i=lenA-1;i>=0;i--){
            if((a[i]-48)*(b[j-razlika]-48)>9){ ///prenos
                prenos[i]=(a[i]-48)*(b[j-razlika]-48)/10;
                if(prenos[i+1]>0){
                    chislo[i+1]=(a[i]-48)*(b[j-razlika]-48)+prenos[i+1]-10*prenos[i];
                }else{
                    chislo[i+1]=(a[i]-48)*(b[j-razlika]-48)-10*prenos[i];
                }
            }else{
                if(prenos[i+1]>0){
                    chislo[i+1]=(a[i]-48)*(b[j-razlika]-48)+prenos[i+1];
                }else{
                    chislo[i+1]=(a[i]-48)*(b[j-razlika]-48);
                }
            }
            chislo[i+1]=chislo[i+1]+48;
            cout<<a[j]<<" "<<b[i-razlika]<<" ";
            cout<<chislo[i+1]<<" ";
        }
    }
}
if(c=='-'){
    for(i=lenA-1;i>=0;i--){
        if(a[i]-48-b[i-razlika]-48+10<10){ ///prenos
            prenos[i]=1;
            if(prenos[i+1]==1){
                chislo[i+1]=a[i]-b[i-razlika]-1+10;
            }else{
                chislo[i+1]=a[i]-b[i-razlika]+10;
            }
        }else{
            if(prenos[i+1]==1){
                chislo[i+1]=a[i]-b[i-razlika]-1;
            }else{
                chislo[i+1]=a[i]-b[i-razlika];
            }
        }
        chislo[i+1]=chislo[i+1]+48;
    }
}
for(i=1;i<lenA+1;i++){
    if(chislo[i]>48 and chislo[i]<58){
        stava=true;
    }
    if(stava==true){
        if(chislo[i]=='0' or chislo[i]=='6' or chislo[i]=='9'){
            broi++;
    }
        if(chislo[i]=='8'){
            broi=broi+2;
        }
    }
}
cout<<broi;
return 0;
}
/// -48
