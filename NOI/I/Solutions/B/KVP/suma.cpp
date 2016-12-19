#include <stdio.h>

int n, a[200000], br1, br2, s1, s2, izh;

int main () {
    scanf("%d", &n);
    for(int i = 0; i < n; i ++) {
        scanf("%d", a + i);
    }
    while(br1 + br2 <= n) {
        if(s1 == s2) izh = br1 + br2;
        if(izh == n) break;
        if(a[br1] == a[n - br2 - 1]) {
            if(br1 == n - br2 - 1) {
                if(s1 < s2) {
                    s1 += a[br1];
                    br1 ++;
                    if(s1 == s2) izh = br1 + br2;
                    break;
                } else {
                    s2 += a[n - br2 - 1];
                    br2 ++;
                    if(s1 == s2) izh = br1 + br2;
                    break;
                }
            }
            s1 += a[br1];
            s2 += a[n - br2 - 1];
            br1 ++;
            br2 ++;
        } else {
            if(a[br1] > a[n - br2 - 1]) {
                s2 += a[n - br2 - 1];
                br2 ++;
            } else {
                s1 += a[br1];
                br1 ++;
            }
        }
    }
    printf("%d\n", izh);
    return 0;
}
