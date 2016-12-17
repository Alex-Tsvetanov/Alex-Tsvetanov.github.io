 #include<iostream>
 using namespace std;
 int main(){
     char s1,s2;
    long long ch1,ch2,k;
    cin>>ch1>>s1;
    cin>>ch2>>s2;
    cin>>k;
    if(s1=='A'){
        if(k>ch1){
            cout<<ch1;
        }
        if(k<ch1){
            cout<<k;
        }
    }
    if(s1=='B'){
        if(k>ch1){
            cout<<k-ch1;
        }
        if(k<ch1){
            cout<<'0';
        }
    }
     return 0;
 }
