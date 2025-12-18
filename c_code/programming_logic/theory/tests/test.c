#include <stdio.h>
#include <stdlib.h>

void main(){ 
  int tam, i; 
  int *vetor, *outro; 
   
  do{ 
      printf("\nDigite o tamanho do vetor a ser criado: "); 
      scanf("%d", &tam); 
      if (tam <=0) printf("\nERRO: tamanho de vetor inválido."); 
  } 
  while (tam<=0); 
   
  vetor = (int *) malloc(sizeof(int) * tam); 
   
  for (i=0; i<tam; i++){ 
    printf("\nValor: "); 
    scanf("%d", &vetor[i]); 
  } 
 
  printf("\n Valores lidos: "); 
   
  for (i=0; i<tam; i++){ 
    printf("%d - ", vetor[i]); 
  } 

printf("\nPonteiro antes da liberacao de memoria: %p", vetor); 
printf("\nConteudo da memoria antes da liberacao: %d", *vetor); 
free(vetor); 
printf("\nPonteiro apos liberacao de memoria: %p", vetor); 
printf("\nConteudo da memoria liberada: %d", *vetor); 
outro = (int *) malloc(sizeof(int) * tam * 2); 
printf("\nNovo ponteiro alocado: %p", outro); 
printf("\n"); 
} 