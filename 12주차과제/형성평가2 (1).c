#include <stdio.h>
#include <string.h>

struct Info {
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void) {
    struct Info d[3];
    int i, first = 0;

    for (i = 0; i < 3; i++) {
        scanf("%s %s %s", d[i].name, d[i].tel, d[i].addr);
    }

    for (i = 1; i < 3; i++) {
        if (strcmp(d[i].name, d[first].name) < 0) {
            first = i;
        }
    }

    printf("name : %s\n", d[first].name);
    printf("tel : %s\n", d[first].tel);
    printf("addr : %s\n", d[first].addr);

    return 0;
}