#include<iostream>
using namespace std;

struct segment{
    int x1;
    int x2;
    int y1;
    int y2;
    int leftx;
    int lefty;
    int rightx;
    int righty;
    int deltay;
    int deltax;
    bool flipped;
    };
int main()
{

    int switcher = 0;
    int differentSlopes=0;
    int n;
    bool done[101];
    cin>>n;
    segment otsechki[101];
   // int xData1[n], yData1[n], xData2[n], yData2[n];
    for(int i=0; i<n; i++){
       // cin>>xData1[i];
       // cin>>yData1[i];
        //cin>>xData2[i];
        //cin>>yData2[i];
        cin>>otsechki[i].x1;
        cin>>otsechki[i].y1;
        cin>>otsechki[i].x2;
        cin>>otsechki[i].y2;
        done[i] = 0;
    }

    for(int i=0; i<n; i++)
    {
     // cout<<"x2 "<<otsechki[i].x2<<" x1 "<<otsechki[i].x1<<'\n';
        if(otsechki[i].x1 == otsechki[i].x2)
        {
           // cout<<i<<'\n';
            done[i] = 1;
          //  cout<<"donei "<<done[i]<<'\n';
                if(switcher == 0){
                    differentSlopes++;
                    switcher = 1;
                }
        }
    } //vsichki s naklon 90/-90

    for(int i=0; i<n; i++)
    {
        if(done[i] == false){
                if(otsechki[i].x1 < otsechki[i].x2)
                {
                    otsechki[i].leftx = otsechki[i].x1;
                    otsechki[i].lefty = otsechki[i].y1;
                    otsechki[i].rightx = otsechki[i].x2;
                    otsechki[i].righty = otsechki[i].y2;
                }else{
                    otsechki[i].leftx = otsechki[i].x2;
                    otsechki[i].lefty = otsechki[i].y2;
                    otsechki[i].rightx = otsechki[i].x1;
                    otsechki[i].righty = otsechki[i].y1;
                    }
                otsechki[i].deltax = otsechki[i].rightx - otsechki[i].leftx;
        otsechki[i].deltay = otsechki[i].righty - otsechki[i].lefty;
                }

    }


    for(int i=0; i<n; i++)
    {
    if(done[i] == 0){

        differentSlopes++;
        done[i] = 1;
        for(int j = 0; j<n; j++)
        {
            if((otsechki[i].deltax == otsechki[j].deltax && otsechki[i].deltay == otsechki[j].deltay) && done[j] == 0)
            {
                    done[j] = 1;

            }
        }
    }
    }
    cout<<differentSlopes<<'\n';


    return 0;
}
