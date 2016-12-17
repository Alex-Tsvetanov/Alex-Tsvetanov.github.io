#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	unsigned int minF = 0;
	unsigned int maxF = 0;
	unsigned int f;

	for(int i = 0; i<n; i++)
	{
		cin >> f;
		if(f == i && i > 0) {
			minF++;
		}

		if(f > maxF) {
			maxF = f;
		} else if(f > 0){
			maxF++;
		}
	}

	cout << maxF << endl << minF << endl;
}
