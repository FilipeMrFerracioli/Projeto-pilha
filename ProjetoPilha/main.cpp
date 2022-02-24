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

        //* 1  teste se a pilha esta cheia - resposta nao
        std::cout << "\n";
        std::cout << "Cheia: " << pilha.estaCheia();
        //* 2  teste se a pila esta vazia - resposta sim
        std::cout << "\n";
        std::cout << "Vazia: " << pilha.estaVazia();
        //* 3  teste quantidade de elementos - resposta 0
        std::cout << "\n";
        std::cout << "Qtd elem: " << pilha.quantidadeElementos();
        //* 4  inserir 2 elementos
        std::cout << "\n";
        std::cout << "inserir 2 elementos: (15, 20)";
        pilha.inserir(15);
        pilha.inserir(20);
        //* 5  teste se a pilha esta cheia - resposta nao
        std::cout << "\n";
        std::cout << "Cheia: " << pilha.estaCheia();
        //* 6  teste se a pila esta vazia - resposta nao
        std::cout << "\n";
        std::cout << "Vazia: ";
        std::cout << "Vazia: " << pilha.estaVazia();
        //* 7  teste quantidade de elementos - resposta 2
        std::cout << "\n";
        std::cout << "Qtd elem: " << pilha.quantidadeElementos();

        //* 8  inserir 2 elementos
        std::cout << "\n";
        std::cout << "Inserir 2 elem (16, 21): ";
        pilha.inserir(16);
        pilha.inserir(21);
        //* 9  teste se a pilha esta cheia - resposta sim
        std::cout << "\n";
        std::cout << "Cheia: " << pilha.estaCheia();
        //* 10 teste se a pila esta vazia - resposta nao
        std::cout << "\n";
        std::cout << "Vazia: " << pilha.estaVazia();
        //* 11 teste quantidade de elementos - resposta
        std::cout << "\n";
        std::cout << "Qtd elem: " << pilha.quantidadeElementos();
        //*** 12 inserir 1 elemento - resposta mensagem de erro
        std::cout << "\n";
        //std::cout << "erro: ";
        //pilha.inserir(33);
        //* 13 colocar como comentario o teste 13
        //* 14 acessar o elemento da pilha - resposta valor do último elemento inserido
        std::cout << "\n";
        std::cout << "Ultimo valor inserido: " << pilha.acessar();

        //* 15 retirar o elemento da pilha
        std::cout << "\n";
        std::cout << "Retirar ";
        pilha.retirar();
        //* 16 acessar o elemento da pilha - valor do penultimo elemento inserido
        std::cout << "\n";
        std::cout << "Penultimo valor inserido: "<<        pilha.acessar();
        //*** 17 retirar 4 elementos - mensagem de erro
        std::cout << "\nRetirar 4";
        pilha.retirar();
        pilha.retirar();
        pilha.retirar();
        //pilha.retirar();
        //* 18 modificar a retirada para 3 elementos
        //* 19 acessar a pilha - resposta erro a pilha esta vazia
        std::cout << "\n";
        std::cout << "Acessar pilha "<<        pilha.acessar();

    }  catch (QString &erro) {
        std::cout << "\nErro: falha na pilha" << erro.toStdString() << "\n";
    }

    std::cout << "\n";
    return a.exec();
}
