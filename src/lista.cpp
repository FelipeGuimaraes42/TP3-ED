#include "include/lista.h"
//Construtor do TAD ListaEncadeada
ListaEncadeada::ListaEncadeada(){
    _inicio= new No();
    _fim= _inicio;
    _inicio->_prox= nullptr;
}

//Destrutor padrão
ListaEncadeada::~ListaEncadeada(){}

bool ListaEncadeada::is_vazia(){
    if(_fim==_inicio)
        return true;
    else
        return false;
}

int ListaEncadeada::pesquisa(std::string palavra){
    No *cursor= this->_inicio->_prox;
    while(cursor!= nullptr){
        if(cursor->_word== palavra){
            cursor->_count++;
            return cursor->_count;
        }
        cursor= cursor->_prox;
    }
    return 0;
}

void ListaEncadeada::incluir_elemento(std::string palavra){
    if(pesquisa(palavra)){
        return;
    }else{
        _fim->_prox= new No;
        _fim= _fim->_prox;
        _fim->_word= palavra;
        _fim->_count++;
        _fim->_prox = nullptr;
    }
}