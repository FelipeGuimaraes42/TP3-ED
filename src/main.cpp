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
      int ind= word[0]- 'a';
      printf("%d\n", tabela._tabela[ind].pesquisa(word));
    }
    else if(op== 'c'){
      printf("Nao fiz...\n");
    }
  }
  return 0;
}


  /*//char word[n][64];//Aloca n posições para strings com, no máximo, 64 caracteres cada.
  char **word= new char*[n];
  for(int i=0; i<MAX; i++){
    word[i]= new char[MAX];
  }*/