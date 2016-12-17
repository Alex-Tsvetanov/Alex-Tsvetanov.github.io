#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int min = 0;
	int max = 0;

	int hs;
	cin >> hs; // Ignore first number
	for(int i = 1; i < N; i++) {
		cin >> hs;

		// Minimum
		if(hs == i)
			min++;
		else if(hs < min)
			min = hs;

		// Maximum
		if(hs)
			max++;
		if(hs > max)
			max = hs;
	}
	cout << max << endl << min << endl;
	return 0;
}
