#include <stdio.h>
#include <iostream>

using namespace std;

int n, a[1000], b[1000];

int main () {
    scanf("%d", &n);
    for(int i = 0; i < n; i ++) {
        scanf("%d", a + i);
        if(i >= 3) b[i] = min(min(a[i - 3] + b[i - 3], a[i - 2] + b[i - 2]), a[i - 1] + b[i - 1]);
    }
    printf("%d\n", min(min(a[n - 3] + b[n - 3], a[n - 2] + b[n - 2]), a[n - 1] + b[n - 1]));
    return 0;
}
