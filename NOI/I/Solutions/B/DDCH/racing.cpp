#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> v;
std::vector<int> memo;

int sum = 1000000;

int brum(int curr) {
    if(memo[curr] != 0)
        return memo[curr];
    if(curr <= 2) {
        return v[curr];
    }
    int res = std::min(brum(curr - 1), std::min(brum(curr - 2), brum(curr - 3))) + v[curr];
    return memo[curr] = res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    v.resize(n+1);
    memo.resize(n+1);
    for(int i = 0; i < n; i++) {
        int curr;
        std::cin >> curr;
        v[i] = curr;
    }
    if(n == 1)
        std::cout << v[0];
    else if(n == 2)
        std::cout << std::min(v[0], v[1]);
    else
        std::cout << brum(n);
    std::cout << std::endl;
    return 0;
}
