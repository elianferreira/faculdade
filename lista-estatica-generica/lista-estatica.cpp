#include "lista-estatica.h"

template <class T>
void inicializar_lista_estatica(ListaEstatica<T> &l){
    l.quantidade = 0;
};

template <class T>
void inserir_fim_lista_estatica(ListaEstatica<T> &l, T dado){
    inserir_pocicao_lista_estatica(l,dado,l.quantidade);
};

template <class T>
void inserir_inicio_lista_estatica(ListaEstatica<T> &l, T dado){
    inserir_pocicao_lista_estatica(l,dado,0);
};

template <class T>
void inserir_pocicao_lista_estatica(ListaEstatica<T> &l, T dado, int pocicao){

    if(l.quantidade>= MAX){
        throw "LIST OVERFLOW";
    }

    if(pocicao < 0 || pocicao > l.quantidade){
        throw "invalid index";
    }

    for(int i = l.quantidade; i > pocicao; i--){
        l.elementos[i] = l.elementos[i-1];
    };

    l.elementos[pocicao].dado = dado;
    l.quantidade++;
};

template <class T>
void remover_fim_lista_estatica(ListaEstatica<T> &l){
    if(l.quantidade == 0){
        throw "List UNDERFLOW";
    }
    l.quantidade--;
};

template <class T>
void imprimir_lista_estatica(ListaEstatica<T> l){

    std::cout << "Imprimindo lista especifica de nomes" << std::endl;

    for(int i = 0; i < l.quantidade; i++){
        std::cout << "Lista[" << i << "]: " << l.elementos[i].dado << std::endl;
    };

};








