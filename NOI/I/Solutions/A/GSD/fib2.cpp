
//Compile with C++ 11 standard

#include <iostream>
#include <string>
using namespace std;

string base_convertion(int input_base, int output_base, long long number)
{
    string new_base_number = "";

    while(number != 0)
    {
        if(number % output_base <= 9)
        {
            new_base_number += to_string(number % output_base);
        }
        else
        {
            new_base_number += (int)'A' + (number % output_base) - 10;
        }

        number /= output_base;

    }

    string reversed_number = "";

    for(int i = new_base_number.length() - 1; i >= 0; i--)
    {
        reversed_number += new_base_number[i];
    }

    return reversed_number;
}


int main()
{
    int base, n_element;
    string first_num, second_num;

    cin >> base >> n_element;
    cin >> first_num >> second_num;

    long long next_num = 0;
    long long first = stoll(first_num, 0, base);
    long long second = stoll(second_num, 0, base);
    for(int i = 0; i < n_element - 2; i++)
    {
        next_num = first + second;
        first = second;
        second = next_num;
    }


    string final_number = base_convertion(10, base, next_num);
    if(final_number.length() <= 1)
    {
        final_number += final_number[0];
        final_number[0] = '0';
    }

    cout << final_number[final_number.length() - 2];

    return 0;
}
