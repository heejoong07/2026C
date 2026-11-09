#include <stdio.h>

int main() {
    long long a[10];
    for (int i = 0; i < 10; i++) {
        scanf("%lld", &a[i]);
    }
    long long max = a[0], min = a[0];
    for (int i = 1; i < 10; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("%lld %lld", max, min);
    return 0;
}