#include <stdio.h>
#include <math.h>

struct Body {
    int height;
    double weight;
};

struct Body makeStudent(struct Body f, struct Body m)
{
    struct Body s;
    s.height = (f.height + m.height) / 2 + 5;
    s.weight = round(((f.weight + m.weight) / 2 - 4.5) * 10) / 10;
    return s;
}