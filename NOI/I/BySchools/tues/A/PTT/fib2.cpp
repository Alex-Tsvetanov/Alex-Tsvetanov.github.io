#include<stdio.h>
#include<string>
#include<cmath>
#define phi 1.61803398875
using namespace std;
int P;
double N;
double a1;
double a2;
int toI(int a){
    int returns;
    returns=a%16;
    if(a>=16){
        returns+=((a-returns)/16)*P;
    }
    return returns;
}

long long unsigned fib(double x){
    return (pow(phi,x)-pow(1-phi,x))/sqrt(5);
}
int main(){
    scanf("%d %d",&P,&N);
    long long unsigned a;
    long long unsigned b;
    scanf("%x %x",&a,&b);
    printf("%x\n",a);
    a1=toI(a%(16*16));
    printf("%x\n",b);
    a2=toI(b%(16*16));
    long long res=((long long )(((fib(N-1)%(P*P))*a2)+((fib(N-2)%(P*P))*a1)))%(P*P);
    res-=res%P;
    res/=P;
    printf("%x",res);
}
