#ifndef PILHA_H
#define PILHA_H

namespace mamaefalei {
class Pilha
{
private:
    int topo;
    int tamanho;
    int *vetor;
public:
    Pilha(int tamanho);
    void inserir(int elemento);
    int acessar() const;
    void retirar();
    bool estaCheia() const;
    bool estaVazia() const;
    int quantidadeElementos() const;
};
}

#endif // PILHA_H
