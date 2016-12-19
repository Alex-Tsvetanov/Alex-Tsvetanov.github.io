#include <iostream>
#include <cmath>
#include <set>
int gcd(int a, int b) {
    if (a < b) return gcd(b, a);
    if (b == 0) return a;

    return gcd(b, a % b);
}

struct frac {
    int x, y;
};

frac reduce(const frac &f) {
    int g = gcd(std::abs(f.x), std::abs(f.y));
    return frac{f.x / g, f.y / g};
}

bool operator < (const frac &a, const frac &b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int main() {
    std::ios::sync_with_stdio(false);
    int n;
    std::cin >> n;

    frac a[n], b[n];
    std::set<frac> s;
    for (int i = 0;i < n; i++) {
        std::cin >> a[i].x >> a[i].y;
        std::cin >> b[i].x >> b[i].y;

        if (a[i].x > b[i].x) {
            std::swap(a[i], b[i]);
        }
        frac f = reduce(frac{b[i].x - a[i].x, b[i].y - a[i].y});
        //std::cout << f.x << " " << f.y << std::endl;
        s.insert(f);
    }
    std::cout << s.size() << std::endl;
}
/*
6
3 1 6 2
3 2 6 3
1 2 1 3
2 1 2 3
1 4 4 5
6 4 5 5
*/
