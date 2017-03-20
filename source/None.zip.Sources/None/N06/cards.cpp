#include<iostream>
using namespace std;
long long chisla[200002],brPutiSreshtaniEdnakwiKartoni[1000000],naiGoliamBroiPutiSreshtanoChislo=0;
int main() {
	long long brChisla;
	cin>>brChisla;
	for(long long a=0; a<brChisla*2; a++) {
		cin>>chisla[a];
	}
	for(long long a=1; a<=brChisla*2; a++) {
		if(a%2==1 && brPutiSreshtaniEdnakwiKartoni[a]==brPutiSreshtaniEdnakwiKartoni[a+1]) {
		} else {
			brPutiSreshtaniEdnakwiKartoni[chisla[a]]++;
		}
	}
	for(long long a=0;a<brChisla*2 ;a++){
    if(brPutiSreshtaniEdnakwiKartoni[a]>naiGoliamBroiPutiSreshtanoChislo){
      naiGoliamBroiPutiSreshtanoChislo=brPutiSreshtaniEdnakwiKartoni[a];
    }
	}
	if(chisla[0]==chisla[1]){
    naiGoliamBroiPutiSreshtanoChislo++;
	}
	cout<<naiGoliamBroiPutiSreshtanoChislo;
	return 0;
}
