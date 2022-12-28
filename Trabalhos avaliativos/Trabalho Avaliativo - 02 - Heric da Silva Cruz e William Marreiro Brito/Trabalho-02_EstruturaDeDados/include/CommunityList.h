#ifndef COMMUNITYLIST_H
#define COMMUNITYLIST_H

#include <iostream>
#include "Community.h"

using namespace std;

struct NodeCommunity
{
    Community data;
    NodeCommunity *next;

    NodeCommunity(const Community data, NodeCommunity *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

class CommunityList
{
private:
    NodeCommunity *head; // Primeiro elemento da lista
    NodeCommunity *tail; // Ultimo elemento da lista
    int size;            // Tamanho da lista

public:
    CommunityList();                                            // Construtor
    ~CommunityList();                                           // Destrutor
    void add(Community &data);                                  // Adiciona um elemento no final da lista ordenado por nome
    void remove(std::string name);                              // Remove um elemento da lista e todos os seus membros
    void printMembers(std::string name);                        // Imprime os membros de uma comunidade
    void printCommunitiesByUser(User &user);                    // Imprime as comunidades que um usuario participa
    void removeMember(User &user);                              // Remove um usuario de todas as comunidades que ele participa
    void print();                                               // Imprime os elementos da lista
    void includeInCommunity(User &user, Community &community);  // Adiciona um usuario em uma comunidade
    void removeFromCommunity(User &user, Community &community); // Remove um usuario de uma comunidade
    bool contains(std::string name);                            // Verifica se um elemento esta na lista
    Community get(std::string name);                            // Retorna um elemento da lista
    User getUserByName(std::string name);                       // Retorna um usuário da lista de membros de uma comunidade
    int get_size();                                             // Retorna o tamanho da lista
    void PrintCommunitiesAndMembers();                          // Imprime as comunidades e seus membros
};
#endif