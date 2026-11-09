#include <stdio.h>

int main() {
    int a[100];
    int n = 0;
    while (n < 100) {
        scanf("%d", &a[n]);
        if (a[n] == 0) break;
        n++;
    }
    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("%d", max + min);
    return 0;
}