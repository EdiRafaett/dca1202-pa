#include <stdio.h>

int main() {
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    // Expressão 1: p == &i;
    printf("p == &i: %d\n", p == &i); // O resultado será 1 (verdadeiro) porque p contém o endereço de i (&i).

    // Expressão 2: *p - *q;
    printf("*p - *q: %d\n", *p - *q); // O resultado será -2, pois *p é o valor de i (3) e *q é o valor de j (5).

    // Expressão 3: **&p;
    printf("**&p: %d\n", **&p); // O resultado será 3, pois *&p é o mesmo que p, e **p é o valor apontado por p, que é o valor de i.

    // Expressão 4: 3 - *p/(*q) + 7;
    printf("3 - *p/(*q) + 7: %d\n", 3 - *p/(*q) + 7);// O resultado será 10. Aqui, primeiro é feita a divisão (*p/(*q) = 3/5 = 0, pois a divisão inteira truncada é 0),
    // então a expressão se torna 3 - 0 + 7, que é igual a 10.

    return 0;
}
