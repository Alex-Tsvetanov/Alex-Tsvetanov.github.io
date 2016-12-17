#include <iostream>
#include <cstring>
#include <array>
#include <cmath>
#include <cstdlib>
using namespace std;
main ()
  {
  int num_stops ;

  string num_stops_str;
  getline(cin, num_stops_str);

  num_stops = std::stoi( num_stops_str );
  int prices[num_stops];

  string str;
  getline(cin, str);

  char *charArray = new char[str.length() + 1];

  strcpy(charArray, str.c_str());

  int j = 0;
  for(int i = 0; i < strlen(charArray); i++){
    if(charArray[i] != char(32)){
      prices[j] = charArray[i] - '0';
      j++;
    }
  }

  cout << "prcies" << endl;

  for(int i; i< sizeof(prices); i ++ ){
    cout << prices[i];

  }
  cout << endl;


  int number_weight1 = 0;
  int number_weight2 = 0;
  int number_weight3 = 0;
  int final_price = 0;


  for(int i = 0; i < num_stops; i++){
    if(num_stops-i >= 3){
      int j = i;
      for(;j<num_stops && j < i + 2; j++){
        number_weight1 += prices[j];

      }
      i ++;
      j = i;
      for(;j<num_stops && j < i + 2; j++){
        number_weight2 += prices[j];
      }
      i++;
      j = i;
      for(;j<num_stops && j < i + 2; j++){
        number_weight3 += prices[j];
      }

      int smallest_weight = std::min(stdd::min(number_weight1, number_weight2), numb	er_weight3);
      int final_weight = 0;

      if(smallest_weight == number_weight3){
        i -=2;
      }else if(smallest_weight == number_weight2){
        i --;
      }
      final_weight = prices[i];

      final_price += final_weight;
    }
  }
  cout << final_price << endl;
}
