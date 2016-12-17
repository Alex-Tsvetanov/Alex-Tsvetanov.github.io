#include<iostream>
using namespace std;
void End(int,int,int);
int main(){
    short int p,q;
    cin>>p>>q;
    char a[127],b[127];
    long int sum[20];
    cin>>a>>b;
    ///Mapping for a
            sum[0] = 0;
        int counter=0;
        while(a[counter]!= '\0'){
            counter++;
        }
            int current = 0;
            for(int i=0;i<counter;i++){
                if(a[i] == 'A') current = 10;
                else if(a[i] == 'B') current = 11;
                else if(a[i] == 'C') current = 12;
                else if(a[i] == 'D') current = 13;
                else if(a[i] == 'E') current = 14;
                else if(a[i] == 'F') current = 15;
                sum[0]+= 10*i + current;
        }
    /// Mapping for b
        sum[1] = 0;
        counter=0;
        while(b[counter]!= '\0'){
            counter++;
        }
            current = 0;
            for(int i=0;i<counter;i++){
                if(b[i] == 'A') current = 10;
                else if(b[i] == 'B') current = 11;
                else if(b[i] == 'C') current = 12;
                else if(b[i] == 'D') current = 13;
                else if(b[i] == 'E') current = 14;
                else if(b[i] == 'F') current = 15;
                sum[1]+= 10*i + current;
        }
        ///end of mapping :D
        int v =0,s=1,swa,P=sum[1],K=sum[0];
        while(v<q-2){
            swa = P;
            P+=K;
            K = swa;
            v++;
        }
End(P,p,0);
return 0;
}
void End(int p,int a,int v){
    if(p==0) return;
    else{
        End(p/a,a,v);
        v++;
        if(v==2) cout<<p%a<<endl;
    }
}
