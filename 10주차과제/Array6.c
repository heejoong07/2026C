#include <stdio.h>

int main(void) {
    int num;
    int arr[100];

    scanf("%d", &num);

    arr[0] = 100;
    arr[1] = num;

    printf("%d %d ", arr[0], arr[1]);

    for (int i = 2; i < 100; i++) {
        arr[i] = arr[i - 2] - arr[i - 1];

        printf("%d ", arr[i]);

        if (arr[i] < 0) {
            break;
        }
    }

    return 0;
}