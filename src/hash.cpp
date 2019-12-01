#include <iostream>

#include "include/hash.h"

#define MAX_LISTA 26

Hash::Hash(){
    _tabela= new ListaEncadeada[MAX_LISTA];
}

Hash::~Hash(){}

int Hash::indice(std::string palavra){
    return palavra[0]- 'a';
}

void Hash::inserir_hash(std::string palavra){
    int chave= indice(palavra);
    _tabela[chave].incluir_elemento(palavra);
}