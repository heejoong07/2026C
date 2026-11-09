#include <stdio.h>

int main() {
    int a[101];
    int n = 0;
    while (n < 101) {
        scanf("%d", &a[n]);
        if (a[n] == 0) break;
        n++;
    }
    printf("%d\n", n);
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) printf("%d ", a[i] * 2);
        else printf("%d ", a[i] / 2);
    }
    return 0;
}