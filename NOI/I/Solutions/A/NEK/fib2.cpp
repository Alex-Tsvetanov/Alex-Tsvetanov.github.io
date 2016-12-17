#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;


vector <unsigned long long int>a;


int main()
{
   int p,n;
   cin>>p>>n;
   int b;
   cin>>b;
   a.push_back(b);
   cin>>b;
   a.push_back(b);
   if(p==10){
    for(int i=0;i<n-2;i++){
        a.push_back(a[i]+a[i+1]);
    }
    a[a.size()-1]=a[a.size()-1]/10;
    cout<<a[a.size()-1]%10<<endl;
   }
   else cout<<"A"<<endl;

}
