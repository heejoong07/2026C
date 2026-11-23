#include <stdio.h>

struct Info {
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void) {
    struct Info d;

    scanf("%s %s %s", d.name, d.tel, d.addr);

    printf("name : %s\n", d.name);
    printf("tel : %s\n", d.tel);
    printf("addr : %s\n", d.addr);

    return 0;
}