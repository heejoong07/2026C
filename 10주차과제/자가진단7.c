#include <stdio.h>

int main() {
    int a[10];
    int even = 0, odd = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1) even += a[i];
        else odd += a[i];
    }
    printf("sum : %d\n", even);
    printf("avg : %.1f\n", odd / 5.0);
    return 0;
}