#include<iostream>
#include<string>

using namespace std;

int main(){
    int p,n;
    cin>>p>>n;

    string strf1,strf2;
    cin>>strf1>>strf2;
        if(p!=10){
        cout<<1;
        return 0;
    }
    string a,b;
    if(strf1.size()!=1){
        a+=strf1[strf1.size()-2];
        a+=strf1[strf1.size()-1];
    }else{
        a+=strf1[strf1.size()-1];
    }
    if(strf1.size()!=1){
        b+=strf2[strf2.size()-2];
        b+=strf2[strf2.size()-1];
    }else{
        b+=strf2[strf2.size()-1];
    }
    int f1,f2;
    if(a.size()-2==0){
         f1=(int)a[a.size()-1]-48 + ((int)a[a.size()-2]-48)*10;
    }else{
         f1=(int)a[a.size()-1]-48;
    }
    if(b.size()-2==0){
         f2=(int)b[b.size()-1]-48 + ((int)b[b.size()-2]-48)*10;
    }else{
         f2=(int)b[b.size()-1]-48;
    }

    for(int i=0;i<n-2;i++){
            int k=f1;
            f1=f2;
            f2+=k;
            f1=f1%100;
            f2=f2%100;
    }
    cout<<f2/10;

    return 0;
}
