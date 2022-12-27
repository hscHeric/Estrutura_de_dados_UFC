#ifndef USERLIST_H
#define USERLIST_H

#include <iostream>
#include "User.h"

using namespace std;

struct NodeUser
{
    User data;
    NodeUser *next;

    NodeUser(const User data, NodeUser *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

class UserList
{
private:
    NodeUser *head; // Primeiro elemento da lista
    NodeUser *tail; // Ultimo elemento da lista
    int Listsize;   // Tamanho da lista

public:
    UserList();                              // Construtor
    ~UserList();                             // Destrutor
    void add(User &data);                    // Adiciona um elemento ordenado por nome
    void removeByName(std::string name);     // Remove um elemento da lista (por nome)
    void removeByEmail(std::string email);   // Remove um elemento da lista (por email)
    void print();                            // Imprime os elementos da lista
    bool containsByName(std::string name);   // Verifica se um elemento esta na lista (por nome)
    bool containsByEmail(std::string email); // Verifica se um elemento esta na lista (por email)
    User getByName(std::string name);        // Retorna um elemento da lista (por nome)
    User getByEmail(std::string email);      // Retorna um elemento da lista (por email)
    int get_size();                          // Retorna o tamanho da listao
};

#endif