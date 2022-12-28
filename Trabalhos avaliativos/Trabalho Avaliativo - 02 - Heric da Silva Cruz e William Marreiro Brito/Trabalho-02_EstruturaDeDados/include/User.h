#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User
{
private:
    std::string name;  // Nome do usuario
    std::string email; // Email do usuario
    int id;            // Identificador do usuario

public:
    User();                                            // Construtor padrao
    User(std::string name, std::string email, int id); // Construtor
    ~User();                                           // Destrutor
    void print();                                      // Imprime os dados do usuario
    int get_id();                                      // Retorna o id do usuario
    std::string get_name();                            // Retorna o nome do usuario
    std::string get_email();                           // Retorna o email do usuario
};
#endif