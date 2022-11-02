# Lista de Ordenação

## 1. Uma amigo lhe disse que é capaz de ordenar qualquer conjunto de três números com no máximo 2 comparações. O seu amigo está falando a verdade ou mentindo? Justifique sua resposta.
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

  Primeiro ele ira verificar se o elemento J, onde J é o índice do ultimo elemento do vetor, é menor que J-1. No caso apresentado o algoritimo vai fazer a seguinte verificação: 2 < 1, o resultado dessa verificação logicamente será falso, logo o algoritimo decrementa o j é faz a verificação 1 < 3, o resultado é verdadeiro é acontece a troca entre os elementos de índices 0 e 1 do nosso vetor. Agora podemos observar que obtemos o vetor [1, 3, 2]. a variavel i será incrementada e nossa verificação agora será 2 < 3, sua resultante é verdadeira e oa elementos de índices 1 e 2 do vetor são trocados. A partir dessa lógica pode se observar que existe um vetor K de tamanho N, onde N = 3, onde é impossivel ordenar o vetor com menos de N comparações. A mesma lógica de analise pode ser aplicada aos demais algoritimos de ordenação.  

## 2. Uma amiga lhe disse que é capaz de ordenar qualquer conjunto de quatro números com no máximo 5 comparações. O seu amigo está falando a verdade ou mentindo? Justifique sua resposta
  Possivel, observando a complexidade relativa a N = 4 podemos fazer a escolha dos algoritimos baseadas em quando qual algoritimo é melhor executado, por exemplo para um vetor desordenado poderia-se usar o quicksort, mas no caso de um vetor ordenada uma boa alternativa seria o mergeSort, pois não importando qual o tipo ou a ordenação do conjunto de dados se a escolha for feita em meio de um dos algoritimos de ordenação apresentados existe como ordenar qualquer vetor de quatro elementos com 5 operações. Obviamente tal método não funcionaria se a questão explissitasse qual algoritimo usar.
  
## 3. Um vetor v[p..r] está “arrumado” se existe j ∈ [p, r] tal que v[p..j − a] ≤ v[j] < v[j + 1..r]. Escreva um algoritmo que decida se v[p..r] está arrumado. Em caso afirmativo, seu algoritmo deve devolver o valor de j.
A descrição a cima caracteriza a função separa, usada na implementação do QuickSort

```
int separa (int *vetor, int p, int r)
{
    int c = vetor[r];
    int j = p;
    for (int k = p; k < r; k++)
    {
        if (vetor[k] <= c)
        {
            int aux = vetor[k];
            vetor[k] = vetor[j];
            vetor[j] = aux;
            j++;
        }
    }
    vetor[r] = vetor[j];
    vetor[j] = c;
    return j;
}
```

## 4. Discuta como a escolha do pivô pode influenciar no desempenho do método quicksort. Proponha estratégias para a escolha do pivô, visando melhorar seu desempenho.
Primeiro afim de basear a explicação vamos analizar as complexidades de melhor caso, caso médio e pior caso do quicksort de maneira assintótica.

* Melhor caso: O(n lg n)
* Caso médio: O(n lg n) 
* Pior caso: O(n²)
* Mémoria: O(n)

Agora vamos analisar o que aumenta significativamente a complexidade do pior caso, para isso necessita-se ter em mente que o pior caso trata-se de um vetor já ordenado. Suponho um vetor já ordenado de tamanho n = 5 cujo os elementos são [1, 2, 3, 4, 5]. Escolhendo o primeiro ou o ultimo elemento do vetor como o pivô do particionamento, pode se observar que o particionamento a esquerda ou a direita (Dependendo do pivô escolhido) sempre será ∅ e sua complexidade será $c\sum_{j=1} j = c\frac{n(n+1)}{2} = O(n^2)$

A escolhado pior afeta de forma significativa a execução do algoritimo, uma das maneiras de contornar o fato de que uma das partições seja ∅ seria escolher um valor mais central ao vetor como pivô e fazer uma troca de tal valor com o valor inicial ou com o final, tal etapa retiraria pelo menos uma das pilhas de execução cujo um dos vetores da separação seja nulo.
