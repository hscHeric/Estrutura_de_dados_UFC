## Lista de Ordenação

### 1. Uma amigo lhe disse que é capaz de ordenar qualquer conjunto de três números com no máximo 2 comparações. O seu amigo está falando a verdade ou mentindo? Justifique sua resposta.
  Está mentindo. Para justificar essa afirmação, suponha o seguinte vetor de tamanho três [3, 1, 2], afim de exemplificação usaremos como base o algoritimo de ordenação por flutuação (Bubble sort): 

```
void BubbleSort(int *A, int n)
{
    bool trocou = true;
    for (int i = 0; i < n - 1 && trocou; i++)
    {
        trocou = false;
        for (int j = 0; j < i; j--)
        {
            if (A[j] < A[j - 1])
            {
                int aux = A[j-1];
                A[j-1] = A[j];
                A[j] = aux;
                trocou = true;
            }
        }
    } 
}
```
Analisando como o algoritimo funcionaria:

-Primeiro ele ira verificar se o elemento J, onde J é o índice do ultimo elemento do vetor, é menor que J-1. No caso apresentado o algoritimo vai fazer a seguinte verificação: 2 < 1, o resultado dessa verificação logicamente será falso, logo o algoritimo decrementa o j é faz a verificação 1 < 3, o resultado é verdadeiro é acontece a troca entre os elementos de índices 0 e 1 do nosso vetor. Agora podemos observar que obtemos o vetor [1, 3, 2]. a variavel i será incrementada e nossa verificação agora será 2 < 3, sua resultante é verdadeira e oa elementos de índices 1 e 2 do vetor são trocados. A partir dessa lógica pode se observar que existe um vetor K de tamanho N, onde N = 3, onde é impossivel ordenar o vetor com menos de N comparações. A mesma lógica de analise pode ser aplicada aos demais algoritimos de ordenação.  
