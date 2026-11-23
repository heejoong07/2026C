#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main(void) {
    struct Person p[3];
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%s %d", p[i].name, &p[i].height);
    }

    for (i = 0; i < 3; i++) {
        printf("%s : %dcm\n", p[i].name, p[i].height);
    }

    return 0;
}