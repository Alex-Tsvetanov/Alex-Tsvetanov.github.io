#include <iostream>
#include <cstring>
#include <array>
#include <cmath>
#include <cstdlib>
using namespace std;
main ()
{
    string str;
    getline (cin, str);
    //cout << str;
    char *charArray = new char[str.length() + 1];
    strcpy(charArray, str.c_str());
    int aCoordinates[strlen(charArray)];
    int j = 0;


    for(int i = 0; i < strlen(charArray); i++){
      if(charArray[i] != char(32)){
        aCoordinates[j] = charArray[i] - '0';
        j++;
      }
    }
    string str1;
    getline(cin,str1);
    char *charArray1 = new char[str1.length() + 1];
    strcpy(charArray1, str1.c_str());
    int bCoordinates[strlen(charArray1)];
    j = 0;
    for(int i = 0; i < strlen(charArray1); i++)
    {
      if(charArray1[i] !=char(32)){
        bCoordinates[j] = charArray1[i] - '0';
        j++;
      }
    }
    int hor_line[4];
    int ver_line[4];
    if(aCoordinates[1] == aCoordinates[3]){
        for (int i = 0 ; i< 4; i++){
            hor_line[i] = aCoordinates[i];}
        for (int i = 0 ; i< 4; i++){
        ver_line[i] = bCoordinates[i];}
    }else
        for (int i = 0 ; i< 4; i++){
        hor_line[i] = bCoordinates[i];}
        for (int i = 0 ; i< 4; i++){
        ver_line[i] = aCoordinates[i];}
    int vertDist;
    int horDist;
    if((hor_line[1] <= ver_line[1] && hor_line[1] >= ver_line[3]) ||(hor_line[1] >= ver_line[1] && hor_line[1] <= ver_line[3])) {
    vertDist = 0;}
    else if(abs(ver_line[1] - hor_line[1]) < abs(ver_line[3] - hor_line[1]))
        {vertDist = abs(ver_line[1] - hor_line[1]);}
  else{
    vertDist = abs(ver_line[3] - hor_line[1]);
  }


    if((ver_line[0] <= hor_line[0] && ver_line[0]>=hor_line[2]) ||(ver_line[0] >= hor_line[0] && ver_line[0]<=hor_line[2]))  {
    horDist = 0;}
    else if(abs(hor_line[0] - ver_line[0]) < abs(hor_line[2] - ver_line[0])){
    horDist = abs(hor_line[0] - ver_line[0]);}
    else{
    horDist = abs(hor_line[2] - ver_line[0]);
  }
	int result = horDist + vertDist;
	cout << result <<endl;
	/*for (int i = 0 ; i < 4; i++) {
	   cout << ver_line[i] <<endl;
  }
	for (int i = 0 ; i < 4; i++) {
    cout << hor_line[i] <<endl;
  }*/
}