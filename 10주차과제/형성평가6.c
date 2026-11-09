#include <stdio.h>

int main() {
    int a[101];
    int n = 0, cnt = 0, sum = 0;
    while (n < 101) {
        scanf("%d", &a[n]);
        if (a[n] == 0) break;
        n++;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            cnt++;
            sum += a[i];
        }
    }
    printf("Multiples of 5 : %d\n", cnt);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", cnt == 0 ? 0.0 : (double)sum / cnt);
    return 0;
}