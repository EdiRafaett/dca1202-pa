/* qsort example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

int values[] = { 40, 10, 100, 90, 20, 25 }; //array de valores a serem ordenados 

int compare (const void * a, const void * b) //const é uma garantia de que o daod so será lido e não alterado, dois ponteiros genéricos.
{
  return ( *(int*)a - *(int*)b ); // a-b >0 troca; a-b=0 mantém(iguais); a-b<0mantém 
}

int main ()
{
  int n;
  qsort (values, 6, sizeof(int), compare); // quantidade de elementos, tipo de dado a ser ordenado, e
  for (n=0; n<6; n++)
     printf ("%d ",values[n]);
  return 0;
}

/*A função qsort ordena os valores de um array. Basicamente a função faz uma série de comparação
e diante de tais comparações verifica e reordena, se necessário os valores /*