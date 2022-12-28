#ifndef COMMUNITY_H
#define COMMUNITY_H

#include <iostream>
#include "UserList.h"
using namespace std;
class Community
{
private:
    std::string name;    // Nome da comunidade
    int numberOfMembers; // Numero de membros
    int id;              // Identificador da comunidade
    UserList members;    // Lista de membros da comunidade

public:
    Community();                         // Construtor padrao
    Community(std::string name, int id); // Construtor
    ~Community();                        // Destrutor
    void add_member(User user);          // Adiciona um membro
    void remove_member(User user);       // Remove um membro
    void printMembers();                 // Imprime os membros da comunidade
    void print();                        // Imprime os dados da comunidade
    int get_id();                        // Retorna o id da comunidade
    bool contains_user(User user);       // Verifica se o usuario esta na comunidade
    std::string get_name();              // Retorna o nome da comunidade
    int get_numberOfMembers();           // Retorna o numero de membros da comunidade
    UserList get_members();              // Retorna a lista de membros da comunidade
    User get_member(std::string name);   // Retorna o usuário pelo nome
};

#endif