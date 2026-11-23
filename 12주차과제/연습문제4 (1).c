#include <stdio.h>

struct Student {
    char name[101];
    int score;
};

int main(void) {
    struct Student s[5];
    int i, max = 0;

    for (i = 0; i < 5; i++) {
        scanf("%s %d", s[i].name, &s[i].score);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].score > s[max].score) {
            max = i;
        }
    }

    printf("%s %d\n", s[max].name, s[max].score);

    return 0;
}