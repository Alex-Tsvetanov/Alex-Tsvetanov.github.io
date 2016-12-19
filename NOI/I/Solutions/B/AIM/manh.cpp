#include <iostream>
#include <cmath>
using namespace std;

bool razp(int A[],int A1[]){
    if(*(A+1)==*(A1+1))return 1;
    else return 0;
}
void format(int A[],int A1[]){
    if(A[0]>A1[0])swap(A[0],A1[0]);
    if(A[1]>A1[1])swap(A[1],A1[1]);
}
void tochki(int A[],int A1[],int B[],int B1[]){
    if(razp(A,A1)){
       if(razp(B,B1)){
            if(B[0]>A[0]&&B[0]<A1[0]){
                cout<<fabs(B[1]-A[1]);
            }
            if(B[0]>A1[0])cout<<fabs(B[0]-A1[0])+fabs(B[1]-A1[1]);
            if(B[0]<A[0])cout<<fabs(B[0]-A[0])+fabs(B[1]-A[1]);
       }
       else {
            if(B[1]>A[1]){
                if(B[0]>A1[0]){
                    cout<<fabs(B[0]-A1[0])+fabs(B[1]-A1[1]);
                    return;
                }
                if(B[0]<A[0]){
                    cout<<fabs(B[0]-A[0])+fabs(B[1]-A[1]);
                    return;
                }
                cout<<fabs(B[0]-A[0]);
                return;}
            if(B1[1]<A[1]){
                if(B1[0]>A1[0]){
                    cout<<fabs(B1[0]-A1[0])+fabs(B1[1]-A1[1]);
                    return;
                }
                if(B1[0]<A[0]){
                    cout<<fabs(B1[0]-A[0])+fabs(B1[1]-A[1]);
                    return;
                }
                cout<<fabs(B1[1]-A[1]);
                return;
            }
                if(B1[0]<A[0]){
                    cout<<fabs(B[0]-A[0]);
                    return;
                }
                if(B1[0]>A1[0]){
                    cout<<fabs(B[0]-A1[0]);
                    return;
                }
                cout<<0;
       }



    }
    else {
        swap(A[0],A[1]);
        swap(B[0],B[1]);
        swap(A1[0],A1[1]);
        swap(B1[0],B1[1]);
        tochki(A,A1,B,B1);
        return;
    }

}
int main(){
    int A[2],A1[2],B[2],B1[2];
    cin>>A[0]>>A[1]>>A1[0]>>A1[1]>>B[0]>>B[1]>>B1[0]>>B1[1];
    format(A,A1);
    format(B,B1);
    tochki(A,A1,B,B1);
    return 0;
}
