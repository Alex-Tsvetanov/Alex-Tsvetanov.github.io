//Task: password
//Author: Bistra Taneva
#include<iostream>
using namespace std;
int main()
{   int s1=0, s2=0;
    char a1, a2, a3, a4, b1, b2, b3, b4;
    cin>>a1>>a2>>a3>>a4;
    cin>>b1>>b2>>b3>>b4;
    if(a1>='a'&&a1<='z')s1+=a1-'a'+1;
    if(a1>='0'&&a1<='9')s1+=a1-'0';
    if(a1>='A'&&a1<='Z')s1+=2*(a1-'A'+1);
    if(a2>='a'&&a2<='z')s1+=a2-'a'+1;
    if(a2>='0'&&a2<='9')s1+=a2-'0';
    if(a2>='A'&&a2<='Z')s1+=2*(a2-'A'+1);
    if(a3>='a'&&a3<='z')s1+=a3-'a'+1;
    if(a3>='0'&&a3<='9')s1+=a3-'0';
    if(a3>='A'&&a3<='Z')s1+=2*(a3-'A'+1);
    if(a4>='a'&&a4<='z')s1+=a4-'a'+1;
    if(a4>='0'&&a4<='9')s1+=a4-'0';
    if(a4>='A'&&a4<='Z')s1+=2*(a4-'A'+1);
    if(b1>='a'&&b1<='z')s2+=b1-'a'+1;
    if(b1>='0'&&b1<='9')s2+=b1-'0';
    if(b1>='A'&&b1<='Z')s2+=2*(b1-'A'+1);
    if(b2>='a'&&b2<='z')s2+=b2-'a'+1;
    if(b2>='0'&&b2<='9')s2+=b2-'0';
    if(b2>='A'&&b2<='Z')s2+=2*(b2-'A'+1);
    if(b3>='a'&&b3<='z')s2+=b3-'a'+1;
    if(b3>='0'&&b3<='9')s2+=b3-'0';
    if(b3>='A'&&b3<='Z')s2+=2*(b3-'A'+1);
    if(b4>='a'&&b4<='z')s2+=b4-'a'+1;
    if(b4>='0'&&b4<='9')s2+=b4-'0';
    if(b4>='A'&&b4<='Z')s2+=2*(b4-'A'+1);
    if(s1>s2)cout<<a1<<a2<<a3<<a4<<" "<<s1<<endl;
    if(s1<s2)cout<<b1<<b2<<b3<<b4<<" "<<s2<<endl;
    if(s2==s1)cout<<"0"<<endl;
return 0;
}
