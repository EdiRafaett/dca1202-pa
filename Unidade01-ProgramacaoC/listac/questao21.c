int f(char *data){
    void *s;
    s = malloc(50);
    int size = strlen(data);
    if (size > 50)
    return(-1);
    free(s);
    return 0;
}
/* Nessa alternativa ocorre o vazamento. Dependendo da quantidade de caracteres para o qual data aponta, 
caso seja maior que 50, o if terá condição verdadeira, ao acessar o if a função retona -1 e o free(s) não é executado.
ness caso haverá um vazamento de memória onde s não terá o espaço de memória alocado liberado*/
