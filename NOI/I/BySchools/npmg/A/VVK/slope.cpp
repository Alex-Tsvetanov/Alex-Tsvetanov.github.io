#include<iostream>
#include<cmath>
using namespace std;
short int Slope(short int[][4],short int);
double sin_pos(short int,short int);
int main(){
short int n,a[150][4];
cin>>n;
for(short int i=0;i<n;i++){
    for(short int j=0;j<4;j++){
    cin>>a[i][j];
    }
}
cout<<Slope(a,n);
return 0;
}
short int Slope(short int a[][4],short int n){
    double used[100];
    short int counter=0;
    for(short int i=0;i<n;i++){
            if(a[i][0] == a[i][2]){
                used[counter++] = 90;
            }else if(a[i][1] == a[i][3]){
                used[counter++] = 0;
            }else{
                if(a[i][0] < a[i][2] && a[i][1] < a[i][3]){
                    used[counter++] = sin_pos(abs(a[i][2]-a[i][0]),abs(a[i][3]-a[i][1]));
                }else{
                    used[counter++] = -sin_pos(abs(a[i][2]-a[i][0]),abs(a[i][3]-a[i][1]));
                }
            }
    }
    short int all_counter =0;
            for(short int i=0;i<counter;i++){
                for(short int j=i;j>=0;j--){
                    if(used[i] == used[j-1]){
                        all_counter--;
                        break;
                    }
                }

                all_counter++;
            }
            return all_counter;
}
double sin_pos(short int x,short int y){
     double k = sqrt(x*x + y*y);
    return y/k;
}
/*
    Example:
6
3 1 6 2
3 2 6 3
1 2 1 3
2 1 2 3
1 4 4 5
6 4 5 5
            */
