#include <iostream>
#include <cmath>
#include <utility>
#include <algorithm>

#define x first
#define y second
#define start first
#define end second

int manh(std::pair<int, int> a, std::pair<int, int> b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

int main() {
    std::pair<std::pair<int, int>, std::pair<int, int> >  a1, a2;
    std::cin >> a1.start.x >> a1.start.y >> a1.end.x >> a1.end.y;
    std::cin >> a2.start.x >> a2.start.y >> a2.end.x >> a2.end.y;
    int ans = 1000000;
    if(a1.start.x == a1.end.x) {
        if(a1.start.y > a1.end.y)
            std::swap(a1.start, a1.end);
        if(a2.start.x == a2.end.x) {
            if(a2.start.y > a2.end.y)
                std::swap(a2.start, a2.end);
            for(int i = a1.start.y; i <= a1.end.y; i++) {
                for(int j = a2.start.y; j <= a2.end.y; j++) {
                    int curr = manh(std::make_pair(a1.start.x, i), std::make_pair(a2.start.x, j));
                    if(curr < ans)
                        ans = curr;
                }
            }
        } else {
            if(a2.start.x > a2.end.x)
                std::swap(a2.start, a2.end);
            for(int i = a1.start.y; i <= a1.end.y; i++) {
                for(int j = a2.start.x; j <= a2.end.x; j++) {
                    int curr = manh(std::make_pair(a1.start.x, i), std::make_pair(j, a2.start.y));
                    if(curr < ans)
                        ans = curr;
                }
            }
        }
    } else {
        if(a1.start.x > a1.end.x)
            std::swap(a1.start, a1.end);
        if(a2.start.x == a2.end.x) {
            if(a2.start.y > a2.end.y)
                std::swap(a2.start, a2.end);
            for(int i = a1.start.x; i <= a1.end.x; i++) {
                for(int j = a2.start.y; j <= a2.end.y; j++) {
                    int curr = manh(std::make_pair(i, a1.start.y), std::make_pair(a2.start.x, j));
                    if(curr < ans)
                        ans = curr;
                }
            }
        } else {
            if(a2.start.x > a2.end.x)
                std::swap(a2.start, a2.end);
            for(int i = a1.start.x; i <= a1.end.x; i++) {
                for(int j = a2.start.x; j <= a2.end.x; j++) {
                    int curr = manh(std::make_pair(i, a1.start.y), std::make_pair(j, a2.start.y));
                    if(curr < ans)
                        ans = curr;
                }
            }
        }
    }
    std::cout << ans << std::endl;
    return 0;
}
