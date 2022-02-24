#include "pilha.h"

namespace lambancinha {

Pilha::Pilha(int tamanho):
    topo(-1),
    tamanho(0),
    vetor(0)
{
    if(tamanho <= 0) throw QString("Erro: Tamanho <= 0.");
    try {
        vetor = new int[tamanho];
        this->tamanho = tamanho;
    }  catch (std::bad_alloc) {
        throw QString("Erro: alocação de memória.");
    }
}

Pilha::~Pilha(){
    if(vetor) delete[] vetor;
}

void Pilha::inserir(int elemento){

}

int Pilha::acessar() const{

}

void Pilha::retirar(){

}

bool Pilha::estaCheia() const{

}

bool Pilha::estaVazia() const{

}

int Pilha::quantidadeElementos() const{

}

}
