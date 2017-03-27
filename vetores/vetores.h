#define ARRAY_SIZE 20

int rand_val(int limite) {
  return rand() % (limite);
}

void preencher(int a[]) {
  int i;
  for(i = 0; i<ARRAY_SIZE; i++)
    a[i] = rand_val(ARRAY_SIZE);
}

void preencher_valor(int *a, int val) {
  int i;
  for(i = 0; i<ARRAY_SIZE; i++)
    a[i] = val;
}

void esparso(int *a, float fator) {
  int quantos = ARRAY_SIZE * fator;
  int i;
  
  for (i = 0; i <= quantos; i++) {
    a[rand_val(ARRAY_SIZE)] = rand_val(ARRAY_SIZE);
  }
}

void print_vetor(int *a) {
  int i;
  for(i = 0; i<ARRAY_SIZE; i++)
    printf("%d \t ", a[i]);
  printf("\n\n");
}

void print_matriz(int a[][ARRAY_SIZE]) {
  int i, j;
  for (i = 0; i < ARRAY_SIZE; i++) {
    for (j = 0; j < ARRAY_SIZE; j++) {
      printf("%d \t ", a[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
}

void compactar(int *a) {
  int i, j;
  int ultimo = 0;
  
  for(i = 0; i<ARRAY_SIZE; i++) {
    if(a[i] == -1) { // vazio
      for(j = i+1; j<ARRAY_SIZE; j++) {
        if(a[j] > -1) {
          a[i] = a[j];
          a[j] = -1;
          break;
        } //if
      } //for
    } //if
  } //for
} //compactar

void cria_triangular_inferior(int a[][ARRAY_SIZE]) {
  int i, j;
  for (i = 0; i < ARRAY_SIZE; i++) {
    for (j = 0; j < ARRAY_SIZE; j++) {
      if(i<=j) {
        a[i][j] = 0;
      } else {
        a[i][j] = rand_val(ARRAY_SIZE);
      }
    }
  }
}
