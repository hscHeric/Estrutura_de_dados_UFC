#include <iostream>
#include <string>
#include "SeqList.h"

// Construtor: recebe como argumento a capacidade n
// Se n <= 0, o construtor seta o valor default 10
SeqList::SeqList(int n)
{
    if (n <= 0)
    {
        n = 10;
    }
    this->capacity_vec = n;
    this->size_vec = 0;
    this->vec = new int[n];
}

// Construtor de cópia
SeqList::SeqList(const SeqList &list)
{
    this->capacity_vec = list.capacity_vec;
    this->size_vec = list.size_vec;
    this->vec = new int[list.capacity_vec];
    for (int i = 0; i < list.size_vec; i++)
    {
        this->vec[i] = list.vec[i];
    }
}

// Destrutor: libera memoria alocada
SeqList::~SeqList()
{
    if (vec != nullptr)
    {
        delete[] vec;
    }
    std::cout << "Lista removida" << std::endl;
}

// Recebe um inteiro x como argumento e o adiciona
// logo apos o ultimo elemento da lista.
// Retorna 'true' se for bem sucedido, ou 'false'
// caso contrario. Nenhum elemento deve ser adicionado
// se a lista estiver cheia.
bool SeqList::add(int x)
{
    if (this->size_vec < this->capacity_vec)
    {
        this->vec[this->size_vec] = x;
        this->size_vec++;
        return true;
    }
    return false;
}

// Remove o primeiro valor x que estiver na lista
// Se nenhum valor for removido, retorna false;
// caso contrario retorna true
bool SeqList::remove(int x)
{
    for (int i = 0; i < this->size_vec; i++)
    {
        if (this->vec[i] == x)
        {
            for (int j = i; j < this->size_vec - 1; j++)
            {
                this->vec[j] = this->vec[j + 1];
            }
            this->size_vec--;
            return true;
        }
    }
    return false;
}

// Busca um elemento x e retorna seu indice se
// ele existir; ou -1 caso contrario
int SeqList::search(int x)
{
    for (int i = 0; i < this->size_vec; i++)
    {
        if (this->vec[i] == x)
        {
            return i;
        }
    }
    return -1;
}

// Retorna uma referência para o elemento no indice k.
// Se o índice k for inválido, lança uma exceção
int &SeqList::at(int k)
{
    if (k < 0 || k >= this->size_vec)
    {
        throw std::out_of_range("Indice invalido");
    }
    return this->vec[k];
}

// Retorna o numero de elementos na lista
int SeqList::size()
{
    return this->size_vec;
}

// Retorna 'true' se lista estiver cheia;
// ou 'false' caso contrario
bool SeqList::isFull()
{
    return this->size_vec == this->capacity_vec;
}

// Retorna 'true' se lista estiver vazia;
// ou 'false' caso contrario
bool SeqList::isEmpty()
{
    return this->size_vec == 0;
}

// Deixa a lista vazia, com size() == 0
void SeqList::clear()
{
    this->size_vec = 0;
}

// Retorna a lista como uma std::string
// Ex.: se a lista tiver elementos 2,5,7,8 entao a
// string "[2,5,7,8]" eh retornada. Se a lista
// estiver vazia, deve ser retornada a string "[]"
std::string SeqList::toString()
{
    std::string str = "[";
    for (int i = 0; i < this->size_vec; i++)
    {
        str += std::to_string(this->vec[i]);
        if (i < this->size_vec - 1)
        {
            str += ",";
        }
    }
    str += "]";
    return str;
}

// Retorna uma sublista da lista original
// contendo os elementos no intervalo de
// índices [from,...,to].
// Se os índices forem inválidos, lança uma exceção.
SeqList SeqList::sublist(int from, int to)
{ 
    if (from < 0 || from >= this->size_vec || to < 0 || to > this->size_vec)
    {
        throw std::out_of_range("Indice invalido");
    }
    SeqList list(to - from + 1);
    for (int i = from; i < to; i++)
    {
        list.add(this->vec[i]);
    }
    return list;
}

void SeqList::removeAll(int x)
{
    for (int i = 0; i < this->size_vec; i++)
    {
        if (this->vec[i] == x)
        {
            for (int j = i; j < this->size_vec - 1; j++)
            {
                this->vec[j] = this->vec[j + 1];
            }
            this->size_vec--;
            i--;
        }
    }
}

bool SeqList::insertAt(int x, int k)
{
    if (k < 0 || k >= this->size_vec)
    {
        throw std::out_of_range("Indice invalido");
    }
    if (this->size_vec == this->capacity_vec)
    {
        return false;
    }
    for (int i = this->size_vec; i > k; i--)
    {
        this->vec[i] = this->vec[i - 1];
    }
    this->vec[k] = x;
    this->size_vec++;
    return true;
}

bool SeqList::removeAt(int k)
{
    if (k < 0 || k >= this->size_vec)
    {
        return false;
    }
    for (int i = k; i < this->size_vec - 1; i++)
    {
        this->vec[i] = this->vec[i + 1];
    }
    this->size_vec--;
    return true;
}

bool SeqList::replaceAt(int x, int k)
{
    if (k < 0 || k >= this->size_vec)
    {
        return false;
    }
    this->vec[k] = x;
    return true;
}
