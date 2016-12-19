#include <iostream>
#include <vector>
#include <map>

std::vector<int> v;
std::map<int, int> m;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    v.resize(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        v[i] = a;
        sum += a;
        m[sum] = i;
    }
    int sume = 0;
    int ans = 0;
    for(int i = n - 1; i > 0; i--) {
        sume += v[i];
        int blq = m[sume];
        if(blq != 0 && blq < i) {
            int curr = blq + 1 + n - i;
            if(curr > ans)
                ans=curr;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}
