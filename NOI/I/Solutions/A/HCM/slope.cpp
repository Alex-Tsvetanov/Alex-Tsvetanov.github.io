#include<iostream>
#include<set>
#include<math.h>
#include<stdlib.h>

using namespace std;

struct line{
    int x1,x2,y1,y2;
};

int main(){

    int n;
    cin >> n;

    line lines[n];

    for(int i=0;i<n;i++){
        cin >> lines[i].x1 >> lines[i].y1 >> lines[i].x2 >> lines[i].y2;
    }

    set<double> mas;

    for(int i=0;i<n;i++){

        int x1 = lines[i].x1;
        int y1 = lines[i].y1;
        int x2 = lines[i].x2;
        int y2 = lines[i].y2;

        if(x1 == x2){
            mas.insert(2.00);
        }else if(y1 == y2){
            mas.insert(0.00);
        }else if(x1 > x2){
            if(y1 > y2){
                mas.insert(atan((x1-x2)/(y1-y2)));
                ///cout << atan((x1-x2)/(y1-y2));
            }else{
                mas.insert(-atan((x1-x2)/(y2-y1)));
                ///cout << -atan((x1-x2)/(y2-y1));
            }
        }else{
            if(y1 > y2){
               mas.insert(-atan((x2-x1)/(y1-y2)));
               ///cout << -atan((x2-x1)/(y1-y2));
            }else{
                mas.insert(atan((x2-x1)/(y2-y1)));
                ///cout << atan((x2-x1)/(y2-y1));
            }
        }
    }


    cout << mas.size();

    return 0;
}
/*
6
3 1 6 2
3 2 6 3
1 2 1 3
2 1 2 3
1 4 4 5
6 4 5 5
*/
