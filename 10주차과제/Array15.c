#include <stdio.h>

int main(void) {
    int dice[7] = {0};
    int num;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        dice[num]++;
    }

    for (int i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, dice[i]);
    }

    return 0;
}