#include <QCoreApplication>

#include <pilha.h>
#include <iostream>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "\n";
    int tamanho = 4;
    try {
        lambancinha::Pilha pilha(tamanho);

        // 1 - pilha cheia = não
        std::cout << "\nCheia: " << pilha.estaCheia();


        // 2 - pilha vazia = sim
        std::cout << "\nVazia: " << pilha.estaVazia();

        // 3 - Quantidade de elementos = 0
        std::cout << "\nQtd elementos: " << pilha.quantidadeElementos();

        // 4 - Inserir 2 elementos
        std::cout << "\nInserir 2 elementos: (15, 20)";
        pilha.inserir(15);
        pilha.inserir(20);
        std::cout << "\nElementos inseridos: " << pilha.acessar();

        // 5 - pilha cheia = não
        std::cout << "\nCheia: " << pilha.estaCheia();

        // 6 - pilha vazia = não
        std::cout << "\nVazia: " << pilha.estaVazia();

        // 7 - Quantidade de elementos = 2
        std::cout << "\nQtd elementos: " << pilha.quantidadeElementos();

        // 8 - Inserir 2 elementos = 4
        std::cout << "\nInserir 2 elementos: (16, 21)";
        pilha.inserir(16);
        pilha.inserir(21);
        std::cout << "\nElementos inseridos: " << pilha.acessar();

        // 9 - pilha cheia = sim
        std::cout << "\nCheia: " << pilha.estaCheia();

        // 10 - pilha vazia = não
        std::cout << "\nVazia: " << pilha.estaVazia();

        // 11 - Quantidade de elementos = 4
        std::cout << "\nQtd elementos: " << pilha.quantidadeElementos();

        // 12 - Inserir 1 elementos = erro
        /*std::cout << "\nInserir 2 elementos: (33)";
        pilha.inserir(33);*/

        // 13 - Colocar como comentário o item 12

        // 14 - Acessar a pilha = último elemento inserido = 21
        std::cout << "\nUltimo valor inserido: " << pilha.acessar();

        // 15 - retirar elemento da pilha
        std::cout << "\nRetirar";
        pilha.retirar();

        // 16 - Acessar a pilha = último elemento inserido = 16
        std::cout << "\nPenultimo valor inserido: " << pilha.acessar();

        // 17 - Retirar quatro elementos = erro
        std::cout << "\nRetirar 4";
        pilha.retirar();
        pilha.retirar();
        pilha.retirar();
        //pilha.retirar();

        // 18 - Modificar a retirada para 3 elementos (item 17)

        // 19 - Acessar a pila = erro-pilha vazia
        std::cout << "\nAcessar pilha";
        pilha.acessar();

    }  catch (QString &erro) {
        std::cout << "\nErro: falha na pilha" << erro.toStdString() << "\n";
    }

    std::cout << "\n";
    return a.exec();
}
