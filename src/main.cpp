#include <cstdio>
#include "include/hash.h"
#include "include/lista.h"

int main() {
  int n;
  scanf("%d", &n);
  char word[MAX];
  Hash tabela;
  for (int i = 0; i < n; ++i) {
    scanf("%s", word);
    tabela.inserir_hash(word); 
  }
  char op;
  while (scanf(" %c %s", &op, word) != EOF) {
    if (op == 'q'){
      //int ind= word[0]- 'a';
      int ind= tabela.indice(word);
      printf("%d\n", tabela._tabela[ind].pesquisa(word));
    }
    else if(op== 'c'){
      printf("Nao deu tempo\n");
    }
  }
  return 0;
}