#include<iostream>
using namespace std;
long int n;
long int maxLenght;
long int maxLenght2;
long int lastA, lastB;
int main()
{
    cin>>n;
    long int a[n], b[n];
    for(long int i = 0;i < n * 2;i ++){
        if(i % 2 == 0){
            cin>>a[i / 2];
        }else{
            cin>>b[i / 2];
        }
    }
    for(long int i = 0;i < n;i ++){
        maxLenght = 0;
        lastA = a[i];
        lastB = b[i];
        for(long int j = i + 1;j < n;j ++){
            if(lastA >= a[j]){
                if(lastB >= b[j]){
                    ++maxLenght;
                    lastA = a[j];
                    lastB = b[j];
                    continue;
                }else{
                    if(lastA >= b[j]){
                        if(lastB >= a[j]){
                            ++maxLenght;
                            lastA = b[j];
                            lastB = b[j];
                            continue;
                        }else{
                            break;
                        }
                    }else{
                        break;
                    }
                }
            }else{
                if(lastA >= b[j]){
                    if(lastB >= a[j]){
                        ++maxLenght;
                        lastA = b[j];
                        lastB = b[j];
                    }else{
                        break;
                    }
                }else{
                    break;
                }
            }
        }
        if(maxLenght > maxLenght2){
            maxLenght2 = maxLenght;
        }
    }
    maxLenght2++;
    cout<<maxLenght2;
    cout<<"\n";
    return 0;
}

