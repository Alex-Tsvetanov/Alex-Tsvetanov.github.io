#include<iostream>
#include<vector>
using namespace std;
struct slujitel{
int index;
int priqteli;
};
/*
int finder(int n, slujitel *start){
    int inexToGiveFriends;
for(int j=1; j<n; j++)
    {
        if(slujitel[j-1].priqteli > slujitel[j].priqteli)
        {
         indexToGiveFriends = j-1
        }else
        {
            indexToGiveFriends = j;
        }
        if(slujitel[j-1].priqteli > slujitel[j].priqteli)
        {
            indexToGiveFriends = j-1;
        }
}
return indexToGiveFriends;
}*/

int main(){

int n;
cin>>n;
vector<int> susedstvaNaPriqtelstva[n];
slujitel slujiteli[n];
int spisuk[n];

for(int i=0; i<n; i++)
{
    cin>>spisuk[i];
    slujiteli[i].priqteli = spisuk[i];
    slujiteli[i].index =i;
}
int givefriends;



for(int i=2; i<n; i++)
{
    for(int k=0; k<slujiteli[i].priqteli; k++)
    {

        for(int j=0; j<i-1; j++)
    {
        int maxN = 0;
        if(maxN < slujiteli[j].priqteli)
        {
         maxN = slujiteli[j].priqteli;
         givefriends= j;
        }
        if(maxN == slujiteli[j].priqteli)
        {
            givefriends= 0;
        }

        //cout<<givefriends<<" "<<maxN<<'\n';
}
    //cout<<givefriends<<'\n';

    susedstvaNaPriqtelstva[givefriends].push_back(1);
    for(int a=0; a<n; a++){
        slujiteli[a].priqteli += susedstvaNaPriqtelstva[slujiteli[a].index].size();
    }
    }

}
int maxFriends = 0;
int minFriends = 1<<30;
for(int i = 0; i<n; i++)
{
    //cout<<slujiteli[i].priqteli<<'\n';
    maxFriends = max(slujiteli[i].priqteli, maxFriends);
    minFriends = min(slujiteli[i].priqteli, minFriends);
}

cout<<maxFriends<<'\n';
cout<<minFriends<<'\n';
return 0;
}
