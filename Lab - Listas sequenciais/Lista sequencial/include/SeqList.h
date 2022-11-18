#ifndef SEQLIST_H
#define SEQLIST_H

class SeqList {
private:
    int *vec;         // ponteiro para o array de inteiros
    int size_vec;     // número de elementos na lista
    int capacity_vec; // capacidade total da lista

public:
    // Construtor: recebe como argumento a capacidade n
    // Se n <= 0, o construtor seta o valor default 10
    SeqList(int n);  

    // Construtor de cópia
    SeqList(const SeqList& list);
    
    // Destrutor: libera memoria alocada
    ~SeqList();  
    
    // Recebe um inteiro x como argumento e o adiciona
    // logo apos o ultimo elemento da lista. 
    // Retorna 'true' se for bem sucedido, ou 'false' 
    // caso contrario. Nenhum elemento deve ser adicionado 
    // se a lista estiver cheia.
    bool add(int x); 
    
    // Remove o primeiro valor x que estiver na lista
    // Se nenhum valor for removido, retorna false;
    // caso contrario retorna true
    bool remove(int x); 
    
    // Busca um elemento x e retorna seu indice se
    // ele existir; ou -1 caso contrario
    int search(int x); 
    
    // Retorna uma referência para o elemento no indice k.
    // Se o índice k for inválido, lança uma exceção
    int& at(int k);
    
    // Retorna o numero de elementos na lista
    int size(); 
    
    // Retorna 'true' se lista estiver cheia;
    // ou 'false' caso contrario
    bool isFull(); 

    // Retorna 'true' se lista estiver vazia;
    // ou 'false' caso contrario
    bool isEmpty();
    
    // Deixa a lista vazia, com size() == 0
    void clear(); 
    
    // Retorna a lista como uma std::string
    // Ex.: se a lista tiver elementos 2,5,7,8 entao a 
    // string "[2,5,7,8]" eh retornada. Se a lista 
    // estiver vazia, deve ser retornada a string "[]"
    std::string toString();  

    // Retorna uma sublista da lista original
    // contendo os elementos no intervalo de 
    // índices [from,...,to]. 
    // Se os índices forem inválidos, lança uma exceção.
    SeqList sublist(int from, int to);

    void removeAll(int x);
    bool insertAt(int x, int k);
    bool removeAt(int k);
    bool replaceAt(int x, int k);

};

#endif