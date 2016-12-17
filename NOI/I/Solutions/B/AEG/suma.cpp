#include<iostream>
#include<cmath>
using namespace std;
int main() {
int n;
cin>>n;
int numbers[n], sum_begin=0, possition_begin=0, sum_end=0, possition_end=1, biggest_row=0, j=0, i2=0;
for(int i=0;i<n;i++)
cin>>numbers[i];
for(int i=0;i<n;i++) {
        if(i2+j<=n) {
        for(;i2<i && possition_end+possition_begin<=n;i2++) {
            sum_begin+=numbers[i2];
            possition_begin=i2;
        }
        for(j=possition_end;possition_end+possition_begin<=n;j++) {
            if(sum_end>=sum_begin) {
                    if(sum_end==sum_begin && sum_end!=0) {
                        biggest_row=possition_begin+possition_end;
                    }
            break;
            }
            sum_end+=numbers[n-j];
            possition_end=j+1;
        }
}
}
cout<<biggest_row;
return 0;
}
