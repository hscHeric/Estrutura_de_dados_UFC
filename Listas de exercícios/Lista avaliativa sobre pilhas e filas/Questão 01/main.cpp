#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{

    // Explicações:
    /**
     * A pilha 1 e a pilha 2 armazenam os valores de 0 a 39 e de 40 a 79 respectivamente.
     * ambas tem um construtor que recebe o tamanho da pilha e o endereço de memória do vetor.
     * O vetor é alocado dinamicamente e tem tamanho 80.
     *
     * A pilha 1 e a pilha 2 compartilham partes diferentes de um mesmo vetor que é enviado como parâmetro no construtor.
     *
     *
     * OBS: Tal implementação também pode ser feita de modo que a classe Stack contenha operação para a pilha 1 e a pilha 2.
     *
     * por exemplo:
     * pop1() -> remove o elemento do topo da pilha 1
     * pop2() -> remove o elemento do topo da pilha 2
     *
     * push1() -> insere um elemento no topo da pilha 1
     * push2() -> insere um elemento no topo da pilha 2
     *
     * Bastava apenas criar um construtor que recebesse o tamanho da pilha 1 e o tamanho da pilha 2.
     * e armazenar os valores de topo1 e topo2 para realizar as operações.
     *
     * Na implementação apresentada abaixo, as duas pilhas embora compartilhem o mesmo vetor, funcionam de forma independente.
     *
     */

    int *vetor = new int[80];

    Stack pilha1(40, vetor);

    Stack pilha2(40, vetor + 40);

    for (int i = 0; i < 40; i++)
    {
        pilha1.push(i);
        pilha2.push(i + 40);
    }

    cout << "Pilha 1: ";

    pilha1.print();

    cout << "Pilha 2: ";

    pilha2.print();

    // Removendo os elementos das pilhas
    pilha1.pop();

    pilha2.pop();

    cout << "Pilha 1: ";

    pilha1.print();

    cout << "Pilha 2: ";

    pilha2.print();

    cout << endl;

    delete[] vetor;

    return 0;
}