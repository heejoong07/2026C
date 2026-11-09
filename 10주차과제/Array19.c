#include <stdio.h>

int main(void) {
    int score[4][3];
    int sum;
    int total = 0;

    for (int i = 0; i < 4; i++) {
        sum = 0;

        for (int j = 0; j < 3; j++) {
            scanf("%d", &score[i][j]);
            sum += score[i][j];
        }

        printf("%d\n", sum);
        total += sum;
    }

    printf("%d\n", total);

    return 0;
}