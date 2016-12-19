#include <iostream>

const int MAXN = 200031;
long long input[MAXN];

int main() {
	std::ios_base::sync_with_stdio(false);

	long long len;
	std::cin >> len;

	for(long long i = 0;i < len;i ++) std::cin >> input[i];

	long long idxL = 0, idxR = len - 1, sumL, sumR, best = 0;

	sumL = input[0];
	sumR = input[len - 1];

	while(idxL < idxR) {
		if(sumL == sumR) {
			best = idxL + 1 + (len - idxR);
			idxL ++;
			idxR --;
			sumL += input[idxL];
			sumR += input[idxR];
		} else if(sumL < sumR) {
			idxL ++;
			sumL += input[idxL];
		} else {
			idxR --;
			sumR += input[idxR];
		}
	}

	std::cout << best << std::endl;

	return 0;
}
