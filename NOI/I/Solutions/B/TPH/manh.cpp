#include <iostream>
using namespace std;
int main () {
        double x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double x3,x4,y3,y4;
        cin >> x3 >> y3 >> x4 >>y4;
        bool vert1,vert2;
        if (x1 == x2){
                vert1 = 1;
                if (y1 > y2){
                        int i = y2;
                        y2 = y1;
                        y1 = i;
                }
        } else {
                vert1 = 0;
                if (x1 > x2){
                        int i = x2;
                        x2 = x1;
                        x1 = i;
                }
        }
        if (x3 == x4){
                vert2 = 1;
                if (y3 > y4){
                        int i = y4;
                        y4 = y3;
                        y3 = i;
                }
        } else {
                vert2 = 0;
                if (x3 > x4){
                         int i = x4;
                        x4 = x3;
                        x3 = i;
                }
        }


        if (vert1 == 1 && vert2 == 1){
                if ((y1 <= y3 && y2 >= y4)||(y3 <= y1 && y4 >= y2)){
                        if (x1 >= x3){
                                cout << x1-x3;
                        } else {
                                cout << x3-x1;
                        }
                } else if (y1 <= y3 && y2 <= y4){
                        if (y2 >= y3){
                                if (x1 >= x3){
                                        cout << x1-x3;
                                } else {
                                        cout << x3-x1;
                                }
                        } else {
                                if (x1 >= x3){
                                        cout << x1 - x3 + y3 - y2;
                                } else {
                                        cout << x3 - x1 + y3 - y2;
                                }
                        }
                } else   if (y1 >= y3 && y2 >= y4) {
                        if (y4 >= y1){
                                if (x1 >= x3){
                                        cout << x1-x3;
                                } else {
                                        cout << x3-x1;
                                }
                        } else {
                                 if (x1 >= x3){
                                        cout << x1 - x3 + y1 - y4;
                                } else {
                                        cout << x3 - x1 + y1 - y4;
                                }
                        }
                }
        } else if (vert1 == 0 && vert2 == 0){
                 if ((x1 <= x3 && x2 >= x4)||(x3 <= x1 && x4 >= x2)){
                        if (y1 >= y3){
                                cout << y1-y3;
                        } else {
                                cout << y3-y1;
                        }
                } else if (x1 <= x3 && x2 <= x4){
                        if (x2 >=x3){
                                if (y1 >= y3){
                                        cout << y1-y3;
                                } else {
                                        cout << y3-y1;
                                }
                        } else {
                                if (y1 >= y3){
                                        cout << y1 - y3 + x3 - x2;
                                } else {
                                        cout <<y3 - y1 + x3 - x2;
                                }
                        }
                } else   if (x1 >= x3 && x2 >= x4) {
                        if (x4 >= x1){
                                if (y1 >= y3){
                                        cout << y1-y3;
                                } else {
                                        cout << y3-y1;
                                }
                        } else {
                                 if (y1 >= y3){
                                        cout << y1 - y3 + x1 - x4;
                                } else {
                                        cout << y3 - y1 + x1 - x4;
                                }
                        }
                }
        } else if (vert1 == 0 && vert2 == 1) {
                if (y1 <= y4 && y1 >= y3){
                        if (x1 <= x3 && x3 <= x2){
                                cout << 0;
                        } else if (x2 < x3 && x1 < x3){
                                cout << x3 - x2;

                        } else {
                                cout << x1 - x3;

                        }
                } else if (y1 >= y4 &&  y1 >= y3) {
                        if (x1 <= x3 && x3 <= x2){
                                cout << y1 - y4;
                        } else  if (x2 < x3 && x1 < x3){
                                cout << x3 - x2 + y1 - y4;
                        } else {
                                cout << x1 - x3 + y1 - y4;
                        }
                } else if (y1 <= y4 &&  y1 <= y3) {
                         if (x1 <= x3 && x3 <= x2){
                               cout << y3-y1;
                        }  else  if (x2 < x3 && x1 < x3){
                                cout << y3-y1 + x3 - x2;
                        } else {
                                cout << x1 - x3 + y3 - y1;
                        }
                }
        } else {
                  if (x1 <= x4 && x1 >= x3){
                        if (y1 <= y3 && y3 <= y2){
                                cout << 0;
                        } else if (y2 < y3 && y1 < y3){
                                cout << y3 - y2;

                        } else {
                                cout << y1 - y3;

                        }
                } else if (x1 >=x4 &&  x1 >= x3) {
                        if (y1 <= y3 && y3 <= y2){
                                cout << x1 - x4;
                        } else  if (y2 < y3 && y1 < y3){
                                cout << y3 - y2 + x1 - x4;
                        } else {
                                cout << y1 - y3 + x1 - x4;
                        }
                } else if (x1 <= x4 &&  x1 <=x3) {
                         if (y1 <= y3 && y3 <= y2){
                               cout << x3-x1;
                        }  else  if (y2 < y3 && y1 < y3){
                                cout << x3-x1 + y3 - y2;
                        } else {
                                cout << y1 - y3 + x3 - x1;
                        }
                }
        }
        return 0;
}
