#include<iostream>
using namespace std;
int main () {
    long long n, ch1 = 0, ch2 = 0, br1, br2, palin, help;
    cin>>n;
    long long ed1 = 0, ed2 = 0, ed3 = 0, ed4 = 0, ed5 = 0, ed6 = 0;
    for(br1 = n - 1 ; br1 > 0 ; br1 --){
        for(br2 = br1 ; br2 > 0 ; br2 --){
            palin = br1 * br2;
            ed1 = palin % 10;
            ed2 = (palin / 10) % 10;
            ed3 = (palin / 100) % 100;
            ed4 = (palin / 1000) % 1000;
            ed5 = (palin / 10000) % 10000;
            ed6 = (palin / 100000) % 100000;
            if(palin >= 100000){
                help = ed6  + ed5 * 10 + ed4 * 100 + ed3 * 1000 + ed2 * 10000 + ed1 * 100000;
            }else{
                if(palin >= 10000){
                    help = ed5  + ed4 * 10 + ed3 * 100 + ed2 * 1000 + ed1 * 10000;
                }else{
                    if(palin >= 1000){
                        help = ed4  + ed3 * 10 + ed2 * 100 + ed1 * 1000;
                    }else{
                        if(palin >= 100){
                            help = ed3  + ed2 * 10 + ed1 * 100;
                        }else{
                            if(palin >= 10){
                                help = ed2  + ed1 * 10;
                            }else{
                                help = ed1;
                            }
                        }
                    }
                }
            }
            if(palin == help){
                if(palin > ch1 * ch2){
                    ch1 = br1;
                    ch2 = br2;
                }else{
                    if(palin == ch1 * ch2){
                        if(br1<= br2){
                            if(ch1 >= br1){
                                ch1 = br1;
                                ch2 = br2;
                            }
                        }else{
                            if(ch1 >= br1){
                                ch1 = br1;
                                ch2 = br2;
                            }
                        }
                    }
                }
            }
        }
    }
    if(ch1 <= ch2){
        cout<<ch1<<" "<<ch2<<"\n"<<ch1 * ch2;
    }else{
        cout<<ch2<<" "<<ch1<<"\n"<<ch1 * ch2;
    }
    return 0;
}
