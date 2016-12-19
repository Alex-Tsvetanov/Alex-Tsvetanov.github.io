#include <iostream>

const int MAXN = 1006;
int inp[MAXN];
int dp[MAXN];

int main() {
	std::ios_base::sync_with_stdio(false);

	int len;
	std::cin >> len;
	for(int i = 0;i < len;i ++) std::cin >> inp[i];

	dp[len] = 0;
	dp[len + 1] = 0;
	dp[len + 2] = 0;
	for(int idx = len - 1;idx >= 0;idx --) {
		dp[idx] = inp[idx] + std::min(std::min(dp[idx + 1], dp[idx + 2]), dp[idx + 3]);
	}

	if(len > 3) {
		std::cout << std::min(std::min(dp[0], dp[1]), dp[2]) << std::endl;
	} else {
		std::cout << std::min(std::min(inp[0], inp[1]), inp[2]) << std::endl;
	}
	return 0;
}
