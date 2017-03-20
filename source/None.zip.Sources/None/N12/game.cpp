#include<iostream>
using namespace std;
int main(){
                long long k,m,sbor=0,naiblizko,br,chislanaeva[200],na=0;
                cin>>m>>k;
                cin>>chislanaeva[0];
                bool pos;
                if(chislanaeva[0]%2==0){
                                                sbor=sbor+chislanaeva[0];
                                }
                                 naiblizko=chislanaeva[0];
                                 if(m>naiblizko){
                                                pos=0;
                                 }
                                 if(m<naiblizko){
                                                pos=1;
                                 }
                for(br=1;sbor<k and br<200;br++){
                                cin>>chislanaeva[br];
                                                if(chislanaeva[br]<m and m-chislanaeva[br]<m-naiblizko and pos==1){
                                                                naiblizko=chislanaeva[br];
                                                                pos=1;
                                                }
                                                if(chislanaeva[br]>m and chislanaeva[br]-m<m-naiblizko and pos==1){
                                                                naiblizko=chislanaeva[br];
                                                                pos=0;
                                                }
                                                if(chislanaeva[br]<m and m-chislanaeva[br]<naiblizko-m and pos==0){
                                                                naiblizko=chislanaeva[br];
                 #include<iostream>
using namespace std;
int main(){
                long long k,m,sbor=0,naiblizko,br,chislanaeva[200],na=0;
                cin>>m>>k;
                cin>>chislanaeva[0];
                bool pos;
                if(chislanaeva[0]%2==0){
                                                sbor=sbor+chislanaeva[0];
                                }
                                 naiblizko=chislanaeva[0];
                                 if(m>naiblizko){
                                                pos=0;
                                 }
                                 if(m<naiblizko){
                                                pos=1;
                                 }
                for(br=1;sbor<k and br<200;br++){
                                cin>>chislanaeva[br];
                                                if(chislanaeva[br]<m and m-chislanaeva[br]<m-naiblizko and pos==1){
                                                                naiblizko=chislanaeva[br];
                                                                pos=1;
                                                }
                                                if(chislanaeva[br]>m and chislanaeva[br]-m<m-naiblizko and pos==1){
                                                                naiblizko=chislanaeva[br];
                                                                pos=0;
                                                }
                                                if(chislanaeva[br]<m and m-chislanaeva[br]<naiblizko-m and pos==0){
                                                                naiblizko=chislanaeva[br];
                                                                pos=1;
                                                }
                                                if(chislanaeva[br]>m and chislanaeva[br]-m<naiblizko-m and pos==0){
                                                                naiblizko=chislanaeva[br];
                                                                pos=0;

                                                }
                                if(chislanaeva[br]%2==0){
                                                sbor=sbor+chislanaeva[br];
                                }
                                }
                 cout<<"\n"<<naiblizko<<" "<<sbor;
                return 0;
}
                                               pos=1;
                                                }
                                                if(chislanaeva[br]>m and chislanaeva[br]-m<naiblizko-m and pos==0){
                                                                naiblizko=chislanaeva[br];
                                                                pos=0;

                                                }
                                if(chislanaeva[br]%2==0){
                                                sbor=sbor+chislanaeva[br];
                                }
                                }
                 cout<<"\n"<<naiblizko<<" "<<sbor;
                return 0;
}
