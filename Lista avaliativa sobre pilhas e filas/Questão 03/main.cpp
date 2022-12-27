#include <iostream>
#include "./Include/Stack.h"

using namespace std;

// Explicações:
/**
 * A função stackIsEqual recebe duas pilhas e verifica se elas são iguais.
 * Para isso ela faz sucessivas comparações entre os elementos das pilhas.
 * usando as funções pop e peek.
 * Caso encontre um elemento diferente, a função retorna 0.
 * e para retornar 1, a função deve percorrer toda a pilha e não encontrar
*/

int main()
{
    Stack *stack1 = new Stack();
    for (int i = 1; i <= 5; i++)
    {
        stack1->push(i);
    }

    Stack *stack2 = new Stack();
    for (int i = 1; i <= 5; i++)
    {
        stack2->push(i);
    }

    Stack *stack3 = new Stack();
    for (int i = 5; i >= 1; i--)
    {
        stack3->push(i);
    }

    cout << "Pilha 1 e Pilha 2 são iguais? " << stackIsEqual(*stack1, *stack2) << endl;
    cout << "Pilha 1 e Pilha 3 são iguais? " << stackIsEqual(*stack1, *stack3) << endl;

    return 0;
}