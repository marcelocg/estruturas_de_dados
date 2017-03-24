typedef struct cadastro {
  int valor;
  struct cadastro *proximo;
} noh;


noh * novo_noh(int num) {
  // criacao de um noh novo
  noh *ponteiro = (noh*) malloc(sizeof(noh));
  ponteiro -> valor = num;
  ponteiro -> proximo = NULL;
  return ponteiro;
}

void imprimir(noh * lista) {
  // imprime todos os elementos da lista
  noh*atual=lista;
  while (atual != NULL) {
    printf("%d\n",atual -> valor);
    atual=atual->proximo;
    }
  }

noh * inserir_no_inicio(noh * lista, int num) {
  // insere um noh como primeiro elemento da lista
  noh* novo = novo_noh(num);
  novo->proximo = lista;
  return novo;
}

noh * inserir_no_fim(noh * lista, int num) {
  // insere um noh como ultimo elemento da lista
  noh * atual = lista;
  noh * novo = novo_noh(num);
  
  while (atual->proximo != NULL) {
    atual=atual->proximo;
  }
  atual->proximo = novo;
  return lista;
}

noh * inserir_na_posicao(noh * lista, int pos, int num) {
  // inserir um noh na posicao indicada por 'pos'
  // considerar: - lista vazia
  //             - um unico elemento na lista
  //             - pos >>> tamanho da lista
  //             - pos == 0
  int i;
  noh * atual = lista;
  noh * novo = novo_noh(num);

  if(lista == NULL) // lista vazia
    return novo;
  
  for(i=0; i<pos-1 && atual->proximo != NULL; i++) {
    atual = atual->proximo;
  }
  if(i == 0 && pos == 0) { // um unico elemento na lista
    novo->proximo = atual;
    return novo;
  } else {
    novo->proximo = atual->proximo;
    atual->proximo = novo;
  }
  return lista;
}
