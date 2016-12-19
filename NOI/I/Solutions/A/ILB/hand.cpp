#include <iostream>
#include <map>

int main() {
    std::ios::sync_with_stdio(false);
    int n;
    std::cin >> n;

    int a[n];
    int morethan0 = 0, morethanself = 0;
    for (int i = 0;i < n; i++) {
        std::cin >> a[i];
        if (a[i] >= i) morethanself += 1;
        if (a[i] > 0) morethan0 += 1;
    }
    int min = 1e9, max = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] >= i) morethanself -= 1;
        if (a[i] > 0) morethan0 -= 1;

        max = std::max(max, a[i] + morethan0);
        min = std::min(min, a[i] + morethanself);
    }

    std::cout << max << "\n" << min << std::endl;
    return 0;
}
