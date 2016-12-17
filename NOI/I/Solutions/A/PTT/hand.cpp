#include<stdio.h>
int N;
int main(){
    scanf("%i",&N);
    int mini=0;
    int maxi=0;
    for(int i=0;i<N;i++){
        int j;
        scanf("%i",&j);
        if(j!=0){
            maxi++;
            if(j==i){
                mini++;
            }
        }
        if(j>maxi){
            maxi=j;
        }
    }
    printf("%i\n%i",maxi,mini);
}
