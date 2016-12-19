#include<iostream>
using namespace std;
char  f1[100],f2[100];
int d1[3],d2[3];
int main()
{
    int n;
    int p;
    cin>>p>>n;
    cin.get();
    cin.getline(f1,100,' ');
    cin.getline(f2,100);
    int k1;
    int k2;
    for(int a=0;a<100;a++)
    {
        if(f1[a]==0 || f1[a]==' ')
        {
            k1=a;
            break;
        }
    }
     for(int a=0;a<100;a++)
    {
        if(f2[a]==0)
        {
            k2=a;
            break;
        }
    }
    int n1=0,n2=0;
    for(int s=1;s<4 && s<k1+1;s++)
    {
        if(f1[k1-s]=='F'){ d1[s-1]=15;}
        if(f1[k1-s]=='E'){ d1[s-1]=14;}
        if(f1[k1-s]=='D'){ d1[s-1]=13;}
        if(f1[k1-s]=='C'){ d1[s-1]=12;}
        if(f1[k1-s]=='B'){ d1[s-1]=11;}
        if(f1[k1-s]=='A'){ d1[s-1]=10;}
        if(f1[k1-s]=='9'){ d1[s-1]=9;}
        if(f1[k1-s]=='8'){ d1[s-1]=8;}
        if(f1[k1-s]=='7'){ d1[s-1]=7;}
        if(f1[k1-s]=='6'){ d1[s-1]=6;}
        if(f1[k1-s]=='5'){ d1[s-1]=5;}
        if(f1[k1-s]=='4'){ d1[s-1]=4;}
        if(f1[k1-s]=='3'){ d1[s-1]=3;}
        if(f1[k1-s]=='2'){ d1[s-1]=2;}
        if(f1[k1-s]=='1'){ d1[s-1]=1;}
        if(f1[k1-s]=='0'){ d1[s-1]=0;}
    }
        for(int s=1;s<4 && s<k2+1;s++)
    {
        if(f2[k2-s]=='F'){ d2[s-1]=15;}
        if(f2[k2-s]=='E'){ d2[s-1]=14;}
        if(f2[k2-s]=='D'){ d2[s-1]=13;}
        if(f2[k2-s]=='C'){ d2[s-1]=12;}
        if(f2[k2-s]=='B'){ d2[s-1]=11;}
        if(f2[k2-s]=='A'){ d2[s-1]=10;}
        if(f2[k2-s]=='9'){ d2[s-1]=9;}
        if(f2[k2-s]=='8'){ d2[s-1]=8;}
        if(f2[k2-s]=='7'){ d2[s-1]=7;}
        if(f2[k2-s]=='6'){ d2[s-1]=6;}
        if(f2[k2-s]=='5'){ d2[s-1]=5;}
        if(f2[k2-s]=='4'){ d2[s-1]=4;}
        if(f2[k2-s]=='3'){ d2[s-1]=3;}
        if(f2[k2-s]=='2'){ d2[s-1]=2;}
        if(f2[k2-s]=='1'){ d2[s-1]=1;}
        if(f2[k2-s]=='0'){ d2[s-1]=0;}
    }
    n1=p*p*d1[2]+p*d1[1]+d1[0];
    n2=p*p*d2[2]+p*d2[1]+d2[0];
    int mass[n];
    mass[0]=n1;
    mass[1]=n2;
    for(int k=2;k<n;k++)
    {
        mass[k]=(mass[k-1]+mass[k-2])%(p*p);
    }
   int k=(mass[n-1]/p)%p;
   if(k<10) cout<<k;
   if(k==10) cout<<'A';
   if(k==11) cout<<'B';
   if(k==12) cout<<'C';
   if(k==13) cout<<'D';
   if(k==14) cout<<'E';
   if(k==15) cout<<'F';
   cout<<endl;
    return 0;
}
