#include <iostream>

#include "lista-estatica.cpp"

using namespace std;

int main()
{

    ListaEstatica<string> nomes1;

    inicializar_lista_estatica(nomes1);
    inserir_fim_lista_estatica(nomes1, string("Elian"));
    inserir_fim_lista_estatica(nomes1, string("Ferreira") );
    imprimir_lista_estatica(nomes1);


    ListaEstatica<int> numeros;
    inicializar_lista_estatica(numeros);
    inserir_fim_lista_estatica(numeros, 1);
    inserir_fim_lista_estatica(numeros, 2);
    imprimir_lista_estatica(numeros);

    return 0;
}
