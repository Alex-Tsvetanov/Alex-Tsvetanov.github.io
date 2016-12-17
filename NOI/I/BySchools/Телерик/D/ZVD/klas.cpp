#include<iostream>
using namespace std;
int main(){

long long momcheta,momicheta;
cin>>momcheta>>momicheta;
if(momicheta>2){
   cout<<momcheta/2<<" "<<momicheta*(momicheta-1);
}else{
   cout<<momcheta/2<<" "<<momicheta*(momicheta+1);
}
return 0;
}
