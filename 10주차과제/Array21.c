#include <stdio.h>

int main(void) {
    int arr[4][2];
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        int rowSum = 0;

        for (int j = 0; j < 2; j++) {
            rowSum += arr[i][j];
        }

        printf("%d ", rowSum / 2);
    }
    printf("\n");

    for (int j = 0; j < 2; j++) {
        int colSum = 0;

        for (int i = 0; i < 4; i++) {
            colSum += arr[i][j];
        }

        printf("%d ", colSum / 4);
    }
    printf("\n");

    printf("%d\n", sum / 8);

    return 0;
}