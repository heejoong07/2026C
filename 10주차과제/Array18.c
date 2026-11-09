#include <stdio.h>

int main(void) {
    int n;
    int score[20];
    int temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (score[i] < score[j]) {
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d \n", score[i]);
    }

    return 0;
}