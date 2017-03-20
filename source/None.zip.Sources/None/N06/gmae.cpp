#include<iostream>
using namespace std;
int main() {
	long long chislo1,obshtaSuma,suma=0,chislo,naiBliskoChislo=1;
	cin>>chislo1>>obshtaSuma;
	do {
		cin>>chislo;
		if(chislo%2==0) {
			suma+=chislo;
		}
		if(chislo1-chislo>naiBliskoChislo && chislo<chislo1) {
			naiBliskoChislo=chislo;
		}
		if(chislo>chislo1) {
			if(chislo-chislo1<naiBliskoChislo) {
				naiBliskoChislo=chislo;
			}
		}
		if(chislo==chislo1) {
				naiBliskoChislo=chislo;
			}
		cout<<chislo<<" "<<naiBliskoChislo<<endl;
	} while(suma<obshtaSuma);
	cout<<naiBliskoChislo<<' '<<suma;
	return 0;
}
