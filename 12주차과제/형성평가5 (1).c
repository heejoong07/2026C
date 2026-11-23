#include <stdio.h>

struct Student {
    char name[20];
    int score[3];
    int total;
};

void input(struct Student arr[], int n){
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%s", arr[i].name);
        arr[i].total = 0;
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i].score[j]);
            arr[i].total += arr[i].score[j];
        }
    }
}

void sort(struct Student arr[], int n){
    int i, j;
    struct Student tmp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j].total < arr[j + 1].total) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void output(struct Student arr[], int n){
    int i;
    for (i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", arr[i].name, arr[i].score[0], arr[i].score[1], arr[i].score[2], arr[i].total);
    }
}