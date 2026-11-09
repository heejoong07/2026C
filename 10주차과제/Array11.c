#include <stdio.h>

int main(void) {
    int score[3][4] = {0};
    int sum[4] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &score[i][j]);

            score[i][3] += score[i][j];
            sum[j] += score[i][j];
        }

        sum[3] += score[i][3];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}