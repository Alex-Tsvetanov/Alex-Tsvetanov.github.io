#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int M;
    int chislo1min;
    int chislo2min;
    int chislo1max;
    int chislo2max;
    int chislo1;
    int chislo2;
    int broika=0;
    int broia4=M;

    cout<<"M=";
    cin>>M;
    cout<<"4islo 1 min=";
    cin>>chislo1min;
    cout<<"4islo 2 min=";
    cin>>chislo2min;
    cout<<"4islo 1 max=";
    cin>>chislo1max;
    cout<<"4islo 2 max=";
    cin>>chislo2max;
    cout<<chislo1min<<" "<<chislo2min<<endl;

    while(broia4>0){
        cout<<"4islo 1=";cin>>chislo1;
        cout<<"4islo 2=";cin>>chislo2;
        if(chislo1min<= chislo1) if( chislo2min<=chislo2) if(chislo1max>=chislo1) if(chislo2max>=chislo2) cout<<chislo1<<" "<<chislo2<<endl;
        broika++;
        broia4--;
    }
    cout<<chislo1max<<" "<<chislo2max<<endl;
    cout<<broika<<endl;
    return 0;
}
