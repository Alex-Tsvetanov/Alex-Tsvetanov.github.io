#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int workers_max(int* workers, int workers_size, int* available_workers, int available_workers_size) {
	int max = 0;

	for(int i = 0; i < available_workers_size; i++)
		if(available_workers[i] != -1) {
			max = i;
			break;
		}

	for(int i = 0; i < available_workers_size; i++)
		if(available_workers[i] != -1 && workers[i] > workers[max])
			max = i;

	return max;
}

void recalculate(int* workers, int count) {
	for(int i = 1; i < count; i++) {
		int available_workers[i];

		for(int j = 0; j < i; j++)
			if(i != j)
				available_workers[j] = 1;

		for(int j = workers[i]; j > 0; j--) {
			int max_worker = workers_max(workers, count, available_workers, i);
			workers[max_worker]++;
			available_workers[max_worker] = -1;
		}
	}
}

int main() {
	int count;
	cin >> count;

	int workers[count];

	for(int i = 0; i < count; i++) {
		cin >> workers[i];
	}

	recalculate(workers, count);
	cout << *max_element(workers, workers + count) << endl;
	cout << *min_element(workers, workers + count);

	return 0;
}
