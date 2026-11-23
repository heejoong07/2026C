#include <stdio.h>
#include <string.h>

struct Score {
    char name[20];
    int kor;
    int eng;
};

struct Score plus(struct Score a, struct Score b){
    struct Score r;
    strcpy(r.name, "Total");
    r.kor = a.kor + b.kor;
    r.eng = a.eng + b.eng;
    return r;
}