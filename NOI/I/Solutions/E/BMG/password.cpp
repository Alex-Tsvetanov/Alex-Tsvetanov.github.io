#include<iostream>
using namespace std;
int main(){
char a,b;
char a1;
long long c,d,l,k,m,n,p,h=0,j=0,v,r;
long long l1,k1;
char b1;
long long c1,d1;
cin>>a1>>b1>>c1>>d1;
cin>>a>>b>>c>>d;
if(c==1 || c==2 || c==3 || c==4 || c==5 || c==6 || c==7 || c==8 || c==9) {
c=c*2;
}
if(d==1 || d==2 || d==3 || d==4 || d==5 || d==6 || d==7 || d==8 || d==9) {
d=d*2;
}
if(c1==1 || c1==2 || c1==3 || c1==4 || c1==5 || c1==6 || c1==7 || c1==8 || c1==9) {
c1=c1*2;
}
if(d1==1 || d1==2 || d1==3 || d1==4 || d1==5 || d1==6 || d1==7 || d1==8 || d1==9) {
d1=d1*2;
}

if(a=='A'){
l=2;
}
if(a=='B'){
l=4;
}
if(a=='C'){
l=6;
}
if(a=='D'){
l=8;
}
if(a=='E'){
l=10;
}
if(a=='F'){
l=12;
}
if(a=='H'){
l=14;
}
if(a=='I'){
l=16;
}
if(a=='J'){
l=18;
}
if(a=='K'){
l=20;
}
if(a=='L'){
l=22;
}
if(a=='M'){
l=24;
}
if(a=='N'){
l=26;
}
if(a=='O'){
l=28;
}
if(a=='P'){
l=30;
}
if(a=='Q'){
l=32;
}
if(a=='R'){
l=34;
}
if(a=='S'){
l=36;
}
if(a=='T'){
l=38;
}
if(a=='U'){
l=40;
}
if(a=='V'){
l=42;
}
if(a=='W'){
l=44;
}
if(a=='X'){
l=46;
}
if(a=='Y'){
l=48;
}
if(a=='Z'){
l=50;
}
if(b=='a'){
k=1;
}
if(b=='b'){
k=2;
}
if(b=='c'){
k=3;
}
if(b=='d'){
k=4;
}
if(b=='e'){
k=5;
}
if(b=='f'){
k=6;
}
if(b=='h'){
k=7;
}
if(b=='i'){
k=8;
}
if(b=='j'){
k=9;
}
if(b=='k'){
k=10;
}
if(b=='l'){
k=11;
}
if(b=='m'){
k=12;
}
if(b=='n'){
k=13;
}
if(b=='o'){
k=14;
}
if(b=='p'){
k=15;
}
if(b=='q'){
k=16;
}
if(b=='r'){
k=17;
}
if(b=='s'){
k=18;
}
if(b=='t'){
k=19;
}
if(b=='u'){
k=20;
}
if(b=='v'){
k=21;
}
if(b=='w'){
k=22;
}
if(b=='u'){
k=23;
}
if(b=='y'){
k=24;
}
if(b=='z'){
k=25;
}
if(a1=='A'){
l1=2;
}
if(a1=='B'){
l1=4;
}
if(a1=='C'){
l1=6;
}
if(a1=='D'){
l1=8;
}
if(a1=='E'){
l1=10;
}
if(a1=='F'){
l1=12;
}
if(a1=='H'){
l1=14;
}
if(a1=='I'){
l1=16;
}
if(a1=='J'){
l1=18;
}
if(a1=='K'){
l1=20;
}
if(a1=='L'){
l1=22;
}
if(a1=='M'){
l1=24;
}
if(a1=='N'){
l1=26;
}
if(a1=='O'){
l1=28;
}
if(a1=='P'){
l1=30;
}
if(a1=='Q'){
l1=32;
}
if(a1=='R'){
l1=34;
}
if(a1=='S'){
l1=36;
}
if(a1=='T'){
l1=38;
}
if(a1=='U'){
l1=40;
}
if(a1=='V'){
l1=42;
}
if(a1=='W'){
l1=44;
}
if(a1=='X'){
l1=46;
}
if(a1=='Y'){
l1=48;
}
if(a1=='Z'){
l1=50;
}
if(b1=='a'){
k1=1;
}
if(b1=='b'){
k1=2;
}
if(b1=='c'){
k1=3;
}
if(b1=='d'){
k1=4;
}
if(b1=='e'){
k1=5;
}
if(b1=='f'){
k1=6;
}
if(b1=='h'){
k1=7;
}
if(b1=='i'){
k1=8;
}
if(b1=='j'){
k1=9;
}
if(b1=='k'){
k1=10;
}
if(b1=='l'){
k1=11;
}
if(b1=='m'){
k1=12;
}
if(b1=='n'){
k1=13;
}
if(b1=='o'){
k1=14;
}
if(b1=='p'){
k1=15;
}
if(b1=='q'){
k1=16;
}
if(b1=='r'){
k1=17;
}
if(b1=='s'){
k1=18;
}
if(b1=='t'){
k1=19;
}
if(b1=='u'){
k1=20;
}
if(b1=='v'){
k1=21;
}
if(b1=='w'){
k1=22;
}
if(b1=='x'){
k1=23;
}
if(b1=='y'){
k1=24;
}
if(b1=='z'){
k1=25;
}

r=l+k+c+d-17;
v=l1+k1+c1+d1;
int mx=max(r,v);
if(r>v){
cout<<a<<b<<c<<d<<" "<<mx;
}
else{
cout<<a1<<b1<<c1<<d1<<" "<<mx;
}

return 0;
}