#include <stdio.h>

int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;

    // 두 번째 원소부터 시작
    for (int i = 1; i < n; i++) {

        // 현재 정렬할 값을 저장
        int key = arr[i];

        // 현재 값의 앞쪽 원소를 확인하기 위한 변수
        int j = i - 1;

        // 앞의 값이 key보다 크면 한 칸 뒤로 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 빈 자리에 key를 삽입
        arr[j + 1] = key;
    }

    // 정렬 결과 출력
    printf("삽입 정렬 결과: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}