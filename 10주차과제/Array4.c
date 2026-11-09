#include <stdio.h>

int main(void) {
    int num;
    int count[10] = {0};

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        count[num / 10]++;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}