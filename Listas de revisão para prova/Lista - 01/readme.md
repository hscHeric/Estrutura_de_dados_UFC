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

## 5. Dada a sequência de números: [13, 7, 11, 2, 5, 17, 7, 13, 4, 6, 7, 3, 7, 10, 54, 13], ordene-a em ordem crescente segundo cado um dos algoritmo estudados em sala. Para cada algoritmo, mostre o número de comparações e trocas que realizam na ordenação de sequências.

Obs: Afim de facilitar a resolução dessa questão vou utilizar uma função para fazer a troca (swap):
```
void swap(int *a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
```
,farei tambem algumas modificações nos algoritimos para que os mesmos retornem um tipo estruturado com o número de comparações e o número de trocas:
```
typedef struct
{
    int comparacoes = 0;
    int trocas = 0;
} trocasComparacoes;
```
e usarei a seguinte função main() para testar os algoritimos:
```
int main(void)
{
    int vetor[] = {13, 7, 11, 2, 5, 17, 7, 13, 4, 6, 7, 3, 7, 10, 54, 13};
    int tamanho = 16;
    trocasComparacoes valueToPrint = ColoqueAquiONomeDoAlgoritimoImplementado(ValoresDeEntrada);

    cout << "Trocas:" << valueToPrint.trocas << endl;
    cout << "Comparações" << valueToPrint.comparacoes << endl;
    for (int valor : vetor)
    {
        cout << valor << " ";
    }
}
```
* <h3 aling="right">BubbleSort:</h3>

```
trocasComparacoes BubbleSort(int *vetor, int tamanho)
{
    trocasComparacoes valueToReturn;
    bool trocou = true;
    for (int i = 0; i < tamanho - 1 && trocou; i++)
    {
        trocou = false;
        for (int j = tamanho - 1; j > i; j--)
        {
            valueToReturn.comparacoes++;
            if (vetor[j] < vetor[j-1])
            {
                swap(vetor[j], vetor[j-1]);
                trocou = true;
                valueToReturn.trocas++;
            }
        }
    }
    return valueToReturn;
}
```
Trocas: 49</br>
Comparações: 114

* <h3 aling="right">InsertionSort:</h3>
No caso do InsertionSort vou considerar apenas trocas as operações que são dentro do laço de repetição while. Pois como acontecem diversar "trocas" no InsertionSort por conta do uso da variável chave, vai ficar a seu cargo decidir o que vai considerar uma troca.

```
trocasComparacoes InsertionSort(int *vetor, int tamanho)
{
    trocasComparacoes valueToReturn;
    int i, key;
    for (int j = 1; j < tamanho; j++)
    {
        key = vetor[j];
        i = j - 1;
        valueToReturn.comparacoes++;
        while (i >= 0 && vetor[i] > key)
        {
            vetor[i+1] = vetor[i];
            i--;
            valueToReturn.trocas++;
        }
        vetor[i+1] = key;
    }
    return valueToReturn;
}
```
Trocas: 49</br>
Comparações: 15

* <h3 aling="right">SelectionSort:</h3>

```
trocasComparacoes SelectionSort(int vetor[], int tamanho)
{
    trocasComparacoes valueToReturn;
    for (int i = 0; i < tamanho - 1; i++)
    {
        int indexMin = i;
        for (int j = i + 1; j < tamanho; j++)
        {
            valueToReturn.comparacoes++;
            if (vetor[j] < vetor[indexMin])
            {
                indexMin = j;
            }
        }
        swap(vetor[i], vetor[indexMin]);
        valueToReturn.trocas++;
    }
    return valueToReturn;
}
```
Trocas: 15</br>
Comparações: 120

* <h3 aling="right">MergeSort:</h3>

No caso do MergeSort será necessario explicitarmos algumas coisa, primeiro ele usa usa função auxiliar chamada intercala para intercalar dois subvetores, segundo ela não necessariamente faz trocas entre dois elementos, na verdade ela intercala dois subvetores menores, então afim de facilitar o entendimento vou usar o numero de vezes que intercala for chacado como o numero de trocas, e como número de comparações vou utilizar as comparações do intercala.

* Função Intercala:
```
trocasComparacoes intercala(int *v, int inicio, int meio, int fim)
{
    trocasComparacoes valueToReturn;
    int i, j, k;
    int *w = new int[fim - inicio + 1];
    i = inicio;
    j = meio + 1;
    k = 0;
    while (i <= meio && j <= fim)
    {
        valueToReturn.comparacoes++;
        if (v[i] <= v[j])
        {
            w[k] = v[i];
            i++;
        }
        else
        {
            w[k] = v[j];
            j++;
        }
        k++;
        valueToReturn.trocas++;
    }
    while (i <= meio)
    {
        w[k] = v[i];
        i++;
        k++;
        valueToReturn.trocas++;
    }
    while (j <= fim)
    {
        w[k] = v[j];
        j++;
        k++;
        valueToReturn.trocas++;
    }
    for (k = inicio; k <= fim; k++)
    {
        v[k] = w[k - inicio];
    }
    delete[] w;
    return valueToReturn;
}
```

* Função principal do MergeSort:

```
trocasComparacoes mergeSort(int *v, int inicio, int fim)
{
    trocasComparacoes valueToReturn;
    if (inicio < fim)
    {
        int meio = (inicio + fim) / 2;
        valueToReturn = mergeSort(v, inicio, meio);
        valueToReturn = mergeSort(v, meio + 1, fim);
        valueToReturn = intercala(v, inicio, meio, fim);
    }
    return valueToReturn;
}
```

Trocas: 16</br>
Comparações: 15

* <h3 aling="right">QuickSort:</h3>

Para a implementação do meu método de contagem no caso do QuickSort, foi necessario uma mudaça em relação ao tipo estruturado trocasComparacoes, para que o mesmo pudesse conter um pivô em seus valores:
```
typedef struct
{
    int comparacoes = 0;
    int trocas = 0;
    int pivo = 0;
} trocasComparacoes;
```
Fora isso, a função QuickSort como a MergeSort, tambem faz o uso de uma função auxiliar na sua execução, nesse caso a função separa:

* Função separa
```
trocasComparacoes Separa(int *vetor, int inicio, int fim)
{
    trocasComparacoes valueToReturn;
    int pivo = vetor[inicio];
    int i = inicio + 1;
    int f = fim;
    while (i <= f)
    {
        if (vetor[i] <= pivo)
        {
            i++;
        }
        else if (pivo < vetor[f])
        {
            f--;
        }
        else
        {
            swap(vetor[i], vetor[f]);
            i++;
            f--;
            valueToReturn.trocas++;
        }
        valueToReturn.comparacoes++;
    }
    swap(vetor[inicio], vetor[f]);
    valueToReturn.trocas++;
    valueToReturn.pivo = f;
    return valueToReturn;
}
```
* Função principal do QuickSort

```
trocasComparacoes quickSort(int *vetor, int inicio, int fim)
{
    trocasComparacoes valueToReturn;
    if (inicio < fim)
    {
        trocasComparacoes valueToReturnAux = separa(vetor, inicio, fim);
        valueToReturn.comparacoes += valueToReturnAux.comparacoes;
        valueToReturn.trocas += valueToReturnAux.trocas;
        valueToReturn.pivo = valueToReturnAux.pivo;
        trocasComparacoes valueToReturnAux2 = quickSort(vetor, inicio, valueToReturnAux.pivo - 1);
        valueToReturn.comparacoes += valueToReturnAux2.comparacoes;
        valueToReturn.trocas += valueToReturnAux2.trocas;
        trocasComparacoes valueToReturnAux3 = quickSort(vetor, valueToReturnAux.pivo + 1, fim);
        valueToReturn.comparacoes += valueToReturnAux3.comparacoes;
        valueToReturn.trocas += valueToReturnAux3.trocas;
    }
    return valueToReturn;
}
```
Trocas: 18</br>
Comparações: 45
