#include <stdio.h>

int main() {
    int a[100];
    int n = 0;
    while (n < 100) {
        scanf("%d", &a[n]);
        if (a[n] == 0) break;
        n++;
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    return 0;
}