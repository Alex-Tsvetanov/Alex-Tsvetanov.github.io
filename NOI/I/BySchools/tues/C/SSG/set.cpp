#include<iostream>
using namespace std;


bool h(int ind,int f[],int s,int ix){

    if(ix<s){
        if(ind==f[ix]){
            return true;
        }else{
            h(ind,f,s,ix+1);
        }

    }
    return false;
}


int main(){
    int N;
    cin>>N;
    //N=5;
    int ifg[N];
    int isg[N];

    /*ifg[0]=2;
    ifg[1]=2;
    ifg[2]=9;
    ifg[3]=15;
    ifg[4]=10;
    isg[0]=7;
    isg[1]=4;
    isg[2]=12;
    isg[3]=20;
    isg[4]=12;*/

    int rfg[N];
    int rsg[N];




    //cout<<rdfs;

    int rdf[N*2];


    int M=0;
    //cout<<h(ifg[0],rdf,rdfs,0)<<endl;



    for(int oh = 0; oh<N;oh++){
        cin>>ifg[oh]>>isg[oh];
        rdf[oh]=ifg[oh];
        rdf[oh]=isg[oh];
    }



    for(int c = 0;c<N;c++){

        if(c==0){
            //cout<<M<<endl;
            rfg[c]=ifg[c];
            rsg[c]=isg[c];

        }else{
            if(h(ifg[c],rdf,N,0) || h(isg[c],rdf,N,0)){
                continue;
            }else{
                rfg[c]=ifg[c];
                rsg[c]=isg[c];
                M++;
            }

        }
        //cin>>i[c][0]>>i[c][1];
    }

    cout<<M<<endl;

    /*for(int rrr=0;rrr<M;rrr++){
        cout<<rfg[rrr]<<" "<<rsg[rrr]<<endl;
    }*/

    for(int ct = 0;ct<=M;ct++){

        if(!(h(ifg[ct],rdf,N,0) || h(isg[ct],rdf,N,0))){
            //cout<<M<<endl;
            cout<<rfg[ct]<<" "<<rsg[ct]<<endl;
        }else{
            continue;
        }
        //cin>>i[c][0]>>i[c][1];
    }


    return 0;
}
