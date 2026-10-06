#include <stdio.h>

int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;

    // 배열의 처음부터 하나씩 정렬
    for (int i = 0; i < n - 1; i++) {

        // 현재 위치를 가장 작은 값의 위치라고 가정
        int min = i;

        // i 다음 위치부터 가장 작은 값을 찾음
        for (int j = i + 1; j < n; j++) {

            // 더 작은 값을 찾으면 위치를 저장
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // 가장 작은 값과 현재 위치의 값을 교환
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // 정렬 결과 출력
    printf("선택 정렬 결과: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}