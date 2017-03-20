#include<iostream>
using namespace std;
int n;
int find_size(long int chislo)
{
    if(chislo < 10){
        return 1;
    }
    if(chislo < 100){
        return 2;
    }
    if(chislo < 1000){
        return 3;
    }if(chislo < 10000){
        return 4;
    }if(chislo < 100000){
        return 5;
    }if(chislo < 1000000){
        return 6;
    }else{
        return 7;
    }
}
bool breakF = false;
long int chislo;
int m1, m2;
long int chislo2;
char sChislo[1000000];
int main()
{
    cin>>n;
    int sizeC;
    for(int i = n - 1;i > 0;i --){
        for(int j  = i;j > 0;j --){
            chislo = i * j;
            m1 = j;
            m2 = i;
            chislo2 = chislo;
            sizeC = find_size(chislo);
            for(int z = 0;chislo != 0;z++){
                sChislo[z] = chislo % 10;
                chislo /= 10;
            }
            int j2 = sizeC;
            for(int i2 = 0;i2 < sizeC  / 2;i2++){
                --j2;
                if(sChislo[i2] != sChislo[j2]){
                    break;
                }
                if(i2 == sizeC / 2 - 1){
                    breakF = true;
                }
            }
            if(breakF){
                break;
            }
        }
        if(breakF){
            break;
        }
    }
    cout<<m1<<' '<<m2<<"\n";
    cout<<chislo2;
    cout<<"\n";
    return 0;
}
