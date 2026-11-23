#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main(void) {
    struct Person p[5];
    int i, min = 0;

    for (i = 0; i < 5; i++) {
        scanf("%s %d", p[i].name, &p[i].height);
    }

    for (i = 1; i < 5; i++) {
        if (p[i].height < p[min].height) {
            min = i;
        }
    }

    printf("%s %d\n", p[min].name, p[min].height);

    return 0;
}