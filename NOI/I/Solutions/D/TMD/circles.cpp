#include<iostream>
using namespace std;
int main(){
	long long a,b,c,br=0;
	char zn;
	cin>>a>>b>>zn;
	if(zn=='+'){
		c=a+b;
	}
	if(zn=='-'){
		c=a-b;
	}
	if(zn=='*'){
		c=a*b;
	}
	if(c==0){
		br=1;
	}else{
		while(c!=0){
			if(c%10==0 or c%10==6 or c%10==9){
				br++;
			}
			if(c%10==8){
				br=br+2;
			}
			c=c/10;
		}
	}
	cout<<br<<endl;
	return 0;
}
