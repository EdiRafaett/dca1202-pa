
#include <stdio.h>
#include <stdlib.h>
//Array de valores a ser ordenados:
int values[] = { 40, 10, 100, 90, 20, 25 };
//Função que compara dois valores e troca de endereço se necessário for:
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
  int n;
  qsort (values, 6, sizeof(int), compare); /*chamada da função qsort: values é o array que desejo ordenar
  6, a quantidade de valores que desejo ordenar, o tamanho de cada elemente, e a função que irá comparar*/
  for (n=0; n<6; n++)
     printf ("%d ",values[n]);
  return 0;
}