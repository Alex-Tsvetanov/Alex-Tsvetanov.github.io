#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string zero_pad(string num, int length) {
	string res = num;

	while(res.length() < length)
		res = "0" + res;

	return res;
}

char num_to_char(int num) {
	if(num <= 9)
		return num + '0';
	else {
		return num - 10 + 'A';
	}
}

int char_to_num(char ch) {
	if(ch >= '0' && ch <= '9')
		return ch - '0';
	else
		return ch + 10 - 'A';
}

int add(char first_char, char second_char) {
	return char_to_num(first_char) + char_to_num(second_char);
}

string add(int base, const string passed_first_num, const string passed_second_num) {
	string result_num = "";

	string first_num = passed_first_num;
	string second_num = passed_second_num;

	if(first_num.length() > second_num.length()) {
		second_num = zero_pad(second_num, first_num.length());
	}
	else if(second_num.length() > first_num.length()) {
		first_num = zero_pad(first_num, second_num.length());
	}

	int overflow = 0;

	for(int i = 0; i < first_num.length(); i++) {
		char first_char = first_num[first_num.length() - i - 1];
		char second_char = second_num[second_num.length() - i - 1];

		int char_add_res = add(first_char, second_char) + overflow;
		result_num = num_to_char(char_add_res % base) + result_num;
		overflow = char_add_res / base;
	}

	if(overflow > 0)
		result_num = num_to_char(overflow) + result_num;

	return result_num;
}

int main() {
	int base;
	unsigned long long int number_in_sequence;

	string first_num;
	string second_num;

	cin >> base;
	cin >> number_in_sequence;
	cin >> first_num;
	cin >> second_num;

	string current_num;

	for(int i = 2; i < number_in_sequence; i++) {
		current_num = add(base, first_num, second_num);
		first_num = second_num;
		second_num = current_num;
	}

	if(current_num.length() < 2)
		cout << 0;
	else
		cout << current_num[current_num.length() - 2];

	return 0;
}
