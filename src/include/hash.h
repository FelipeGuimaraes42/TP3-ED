#ifndef HASH_ED_H
#define HASH_ED_H

#include "lista.h"


struct Hash{
    ListaEncadeada *_tabela;

    Hash();
    ~Hash();

    int indice(std::string);
    void inserir_hash(std::string);
};

#endif