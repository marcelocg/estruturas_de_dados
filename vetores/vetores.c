#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

void init() {
  srand( (unsigned int) time(NULL));   // should only be called once
}

int main() {
  clock_t t1, t2;
  t1 = clock();   

  int vetor[ARRAY_SIZE];
  int vetor_esparso[ARRAY_SIZE];
  int matriz[ARRAY_SIZE][ARRAY_SIZE];
  
  init();

  preencher(vetor);
  preencher_valor(vetor_esparso, -1);

  esparso(vetor_esparso, 0.5f);
  print_vetor(vetor_esparso);

  compactar(vetor_esparso);
  print_vetor(vetor_esparso);
  
  cria_triangular_inferior(matriz);
  print_matriz(matriz);
  
  t2 = clock();
  float diff = ((float)(t2 - t1) / CLOCKS_PER_SEC) * 1000;
  printf("\nExecutado em %3.3f ms\n",diff);   
  
}
