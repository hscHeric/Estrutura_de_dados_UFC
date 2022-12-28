#include <iostream>
#include "../Include/PilhaFila.h"

using namespace std;

// Explicações:
/**
 * 
 * 1. Nessa questão como o objetivo é simplesmente criar a função que inverte a fila
 * foi usada a implementação de fila que já estava pronta, então não foi necessário	
 * criar uma nova classe.
 * 
*/

int main()
{
    //Coloca elementos de 1 a 10 na fila
    Fila fila01;

    for (int i = 1; i <= 10; i++)
    {
        fila01.enqueue(i);
    }

    //Imprime a fila

    fila01.print();

    //Inverte a fila

    fila01.inverteFila();

    //Imprime a fila invertida

    fila01.print();
}