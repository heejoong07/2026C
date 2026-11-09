#include <stdio.h>

int main() {
    int a[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("sum = %d\n", sum);
    printf("avg = %.1f\n", sum / 10.0);
    return 0;
}