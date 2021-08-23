#ifndef LISTA-ESTATICA_H_INCLUDED
#define LISTA-ESTATICA_H_INCLUDED

#include <string>
#include <iostream>

const int MAX = 6;

template <class TIPO>
struct Telemento {
    TIPO dado;
};

template <class TIPO>
struct ListaEstatica {
    Telemento<TIPO> elementos[MAX];
    int quantidade;
};

template <class TIPO>
void inicializar_lista_estatica(ListaEstatica<TIPO> &l);

template <class TIPO>
void inserir_inicio_lista_estatica(ListaEstatica<TIPO> &l, TIPO dado);

template <class TIPO>
void inserir_fim_lista_estatica(ListaEstatica<TIPO> &l, TIPO dado);

template <class TIPO>
void inserir_pocicao_lista_estatica(ListaEstatica<TIPO> &l, TIPO dado, int pocicao);

template <class TIPO>
void remover_fim_lista_estatica(ListaEstatica<TIPO> &l);

template <class TIPO>
void imprimir_lista_estatica(ListaEstatica<TIPO> le);



#endif // LISTA-ESTATICA_H_INCLUDED
