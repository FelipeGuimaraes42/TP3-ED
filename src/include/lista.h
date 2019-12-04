#ifndef LISTA_ED_H
#define LISTA_ED_H

#define MAX 64

#include <string>

struct No{
    std::string _word;
    int _count= -1;
    char _code[3];
    No *_prox;
};

struct ListaEncadeada{
    No *_inicio, *_fim;

    ListaEncadeada();
    ~ListaEncadeada();
    
    bool is_vazia();
    int pesquisa(std::string);
    void incluir_elemento(std::string);
};

#endif