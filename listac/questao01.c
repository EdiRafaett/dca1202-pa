#include <stdio.h>

int main() {
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    // Expressão 1: p == &i;
    printf("p == &i: %d\n", p == &i);

    // Expressão 2: *p - *q;
    printf("*p - *q: %d\n", *p - *q);

    // Expressão 3: **&p;
    printf("**&p: %d\n", **&p);

    // Expressão 4: 3 - *p/(*q) + 7;
    printf("3 - *p/(*q) + 7: %d\n", 3 - *p/(*q) + 7);

    return 0;
}
