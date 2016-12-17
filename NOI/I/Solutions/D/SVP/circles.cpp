#include<iostream>
using namespace std;
int main(){
    char z;
    long long a, b, c,s;
    cin>>a;
    cin>>b;
    cin>>z;
    if(z=='+'){
        c=a+b;
    }
    if(z=='-'){
        c=a-b;
    }
    if(z=='*'){
        c=a*b;
    }
char A=c-'0';
for(int i=0;;i++){s+=i*2;
}
for(int i=0;;i++){s+=i;
}
for(int i=0;;i++){s+=i;
}
for(int i=0;;i++){s+=i;
}
cout<<s;
return 0;
}
