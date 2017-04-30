#include <iostream>
#include <vector>

using namespace std;

constexpr int N = 1000,
	          minVal = -1000,
		      maxVal = 1000,
			  absMinSum = -(N * minVal),
			  knapsackElements = N * maxVal + absMinSum + 1;

char knapsack [knapsackElements];
short arr [N];

int main ()
{
	cin.tie (nullptr);
	ios::sync_with_stdio (false);
	int n;
	cin >> n;

	int max_sum = 0;
	for (int i = 0 ; i < n ; i ++)
	{
		cin >> arr [i];
		if (arr [i] > 0) max_sum += arr [i];
	}

	//cout << "inputed" << endl;

	int sums = 0;

	knapsack [0 + absMinSum] = 1;
	vector <int> new_sums;
	for (int i = 0 ; i < n ; i ++)
	{
		//cout << "i = " << i << endl;
		for (int j = max_sum + absMinSum ; j >= 0 ; j --)
		{
			//cout << "j = " << j << endl;
			if (knapsack [j] and j + arr [i] < knapsackElements)
			{
				if (not knapsack [j + arr [i]] and j + arr [i] != 0 + absMinSum)
					new_sums.push_back (j + arr [i]);
				if (j + arr [i] == 0 + absMinSum and knapsack [j + arr [i]] == 1)
				{
					knapsack [j + arr [i]] = 2;
					sums ++;
					//cout << "0 == " << j + arr [i] << "\n";
				}
			}
		}
		for (auto& x : new_sums)
		{
			//cout << x << "\n";
			sums ++;
			knapsack [x] = 1;
		}
		new_sums.clear ();
	}
	cout << sums << "\n";
}
