#include <iostream>
using namespace std;
int main(){
  char simvol[8];
  long long zamestitels[8],broqch,sbor[2];
  for(broqch=0;broqch<8;broqch++){
  cin>>simvol[broqch];
  }
    for(broqch=0;broqch<8;broqch++){
  if(simvol[broqch]<='Z' and simvol[broqch]>='A'){
    zamestitels[broqch]=(simvol[broqch]-'A'+1)*2;
  }
else    if(simvol[broqch]<='z' and simvol[broqch]>='a'){
    zamestitels[broqch]=simvol[broqch]-'a'+1;
  }
 else   if(simvol[broqch]<='9' and simvol[broqch]>='0'){
    zamestitels[broqch]=simvol[broqch]-'0';
  }
  }
  sbor[0]=zamestitels[0]+zamestitels[1]+zamestitels[2]+zamestitels[3];
  sbor[1]=zamestitels[4]+zamestitels[5]+zamestitels[6]+zamestitels[7];
  if(sbor[0]>sbor[1]){
    cout<<simvol[0]<<simvol[1]<<simvol[2]<<simvol[3]<<" "<<sbor[0];
  }
  if(sbor[0]<sbor[1]){
    cout<<simvol[4]<<simvol[5]<<simvol[6]<<simvol[7]<<" "<<sbor[1];
    }
  if(sbor[0]==sbor[1]){
    cout<<"0";
  }
  return 0;
}
