#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void main() {
  noh * lista = novo_noh(10);
  lista = inserir_no_inicio(lista, 7);
  lista = inserir_no_fim(lista, 5);
  lista = inserir_no_fim(lista, 1);
  lista = inserir_na_posicao(lista, 5, 50);
  lista = inserir_na_posicao(lista, 2, 3);
  lista = inserir_na_posicao(lista, 10, 27);
  imprimir(lista);
}
