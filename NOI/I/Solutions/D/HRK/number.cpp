#include<iostream>
using namespace std;
int main(){
long long nachalo,krai,purvo=2,vtoro=1,segashno,kolko=0,broqch,start;
cin>>nachalo>>krai;
if(nachalo%2==0){
    start=nachalo;
}else{
start=nachalo+1;
}

for(segashno=start;segashno<=krai;segashno=segashno+2){
        for(broqch=2;broqch<krai;broqch++){
                purvo=broqch;
                vtoro=broqch-1;
               if(purvo*vtoro==segashno){
                    kolko++;

        }else if(purvo*vtoro==krai){
            break;
        }
        }

}
cout<<kolko;
return 0;
}
