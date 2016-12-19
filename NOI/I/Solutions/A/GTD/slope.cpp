#include<iostream>
using namespace std;
struct Otsechka{
int  x1 , y1 , x2 , y2 ;
void vuv();
double tang();
};
void Otsechka::vuv(){
    do{
        cin>>x1>>y1>>x2>>y2;
    }while(x1<1||x1>99||y1<1||y1>99||x2<1||x2>99||y2<1||y2>99||(x1==x2&&y1==y2));
}
double Otsechka::tang(){
 if(x1==x2)return 101.0;
 if(x1<x2)return((y2-y1)/double(x2-x1));
 if(x1>x2)return((x2-x1)/double(x1-x2));
}
int main()
{
    int n;
    do{
        cout<<"vuvedete broi otsechki:";
        cin>>n;
    }while(n<1||n>99);
    Otsechka A[n];
    double t[n];
    for(int i=0 ; i<n ; i++)
    {
        cout<<"koordinati na otsechka "<<i<<" :";
        A[i].vuv();
        t[i]=A[i].tang();
    }
    int br=1,mbr=1;
    for(int i=1 ; i<n ; i++)
    {
        mbr=1;
        for(int j=0 ; j<i ; j++)
        {
            if(t[j]==t[i])mbr++;
        }
        if(mbr==1)br++;
    }
    cout<<"razlichni nakloni :"<<br;
}
