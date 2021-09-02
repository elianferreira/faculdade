#include <iostream>
#include <time.h>
#include <random>
#include <dirent.h>

using namespace std;

const int MAXTAM = 1000;

struct Tlista{
    int Frente;
    int Tras;
    int Lista[MAXTAM];
};

struct Arquivo {
    string nome_arquivo;
    string diretorio;
    float tamanho;
    int data_criacao;
    int data_transferencia;
};

struct Dispositivo {
    string nome;
    string codigo_fabrica;
    int frente;
    int tras;
};


void Lista_Construtor(Tlista &tl){
    tl.Frente=0;
    tl.Tras=-1;
}

bool Lista_Vazia(Tlista &tl){
    if(tl.Tras==-1)
        return true;
    else
        return false;
}



bool Lista_Cheia(Tlista &tl){
    if(tl.Tras==MAXTAM-1)
        return true;
    else
        return false;
}


int Lista_Tamanho(Tlista &tl){
    return tl.Tras+1;
}

bool Lista_Inserir_Inicio(Tlista &tl, int valor){
    if(tl.Tras==MAXTAM-1){
        return false;
    }else{
        for(int i=tl.Tras+1;i>tl.Frente;i--)
            tl.Lista[i]=tl.Lista[i-1];

        tl.Lista[tl.Frente]=valor;
        tl.Tras++;
        return true;
    }
}


bool Lista_Inserir_Fim(Tlista &tl, int valor){
    if(tl.Tras==MAXTAM-1){
        return false;
    }else{
        tl.Tras++;
        tl.Lista[tl.Tras]=valor;
        return true;
    }
}


bool Lista_Inserir(Tlista &tl, int valor, int Posicao){
    if(tl.Tras==MAXTAM-1){
        return false;
    }else{
        if(Posicao>=tl.Frente && Posicao<=tl.Tras){
            for(int i=tl.Tras+1;i>Posicao;i--)
                tl.Lista[i]=tl.Lista[i-1];

            tl.Lista[Posicao]=valor;
            tl.Tras++;
            return true;
        }else{
            return false;
        }
    }
}


bool Lista_Remover_Inicio(Tlista &tl, int &valor){
    if(tl.Tras==-1){
        return false;
    }else{
        valor=tl.Lista[tl.Frente];

        for(int i=tl.Frente;i<tl.Tras;i++)
            tl.Lista[i]=tl.Lista[i+1];

        tl.Tras--;
        return true;
    }
}


bool Lista_Remover_Fim(Tlista &tl, int &valor){
    if(tl.Tras==-1){
        return false;
    }else{
        valor=tl.Lista[tl.Tras];
        tl.Tras--;
        return true;
    }
}


bool Lista_Remover(Tlista &tl, int &valor, int Posicao){
    if(tl.Tras==-1){
        return false;
    }else{
        if(Posicao>tl.Frente && Posicao<tl.Tras){

            valor=tl.Lista[Posicao];

            for(int i=Posicao;i<tl.Tras;i++)
                tl.Lista[i]=tl.Lista[i+1];

            tl.Tras--;
            return true;

        }else{
            return false;
        }
    }
}

bool Lista_Get_Inicio(Tlista &tl,int &valor){
    if(tl.Tras==-1){
        return false;
    }else{
        valor=tl.Lista[tl.Frente];
        return true;
    }
}



bool Lista_Get_Fim(Tlista &tl,int &valor){
    if(tl.Tras==-1){
        return false;
    }else{
        valor=tl.Lista[tl.Tras];
        return true;
    }
}


bool Lista_Busca_Valor(Tlista &tl,int valor, int &Posicao){
    int i;
    if(tl.Tras==-1){
        return false;
    }else{

        for(i=tl.Frente;i<tl.Tras;i++){
            if(tl.Lista[i]==valor){
                break;
            }
        }
        if(i==tl.Tras){
            return false;
        }else{
            Posicao=i;
            return true;
        }

        valor=tl.Lista[Posicao];
        return true;
    }
}


bool Lista_Busca_Posicao(Tlista &tl, int &valor, int Posicao){
    if(tl.Tras==-1){
        return false;
    }else{
        if(Posicao>tl.Frente && Posicao<tl.Tras){
            valor=tl.Lista[Posicao];
            return true;

        }else{
            return false;
        }

        return true;
    }
}


//Dir generateDir() {
  ///  std::random_device rd;
    //std::mt19937 gen(rd());
    //shuffle(directories.begin(), directories.end(), gen);

    ///Dir d;
    //d.directoryorigin = "C:/" + directories[0];
    //d.directoryactual = "C:/" + directories[1];

    //return d;
//}


int numbersdisp(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(10, 100);
    int disp = distrib(gen);

    cout << disp;

    return disp;
}



int main(){


    //time_t current_time;
    //time(&current_time);
    //cout << ("Current time = %s", ctime(&current_time));


    int valor;

    Tlista tl;

    Lista_Construtor(tl);

    Lista_Inserir_Fim(tl,5);

    Lista_Inserir_Inicio(tl,10);

    Lista_Inserir_Fim(tl,7);

    Lista_Inserir(tl,20,1);

    Lista_Busca_Posicao(tl, 20, 4);

    //10,20,5,7

    while( Lista_Remover_Inicio(tl,valor) ){
        cout << "\nValor:" << valor;
    }

    return 0;
}
