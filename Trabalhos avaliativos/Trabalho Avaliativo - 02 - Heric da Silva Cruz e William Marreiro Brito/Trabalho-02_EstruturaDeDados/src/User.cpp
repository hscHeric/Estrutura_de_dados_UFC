#include "../include/User.h"

// Construtor
User::User()
{
    this->name = "";
    this->email = "";
    this->id = 0;
}

// Construtor
User::User(std::string name, std::string email, int id)
{
    this->name = name;
    this->email = email;
    this->id = id;
}

// Destrutor
User::~User()
{
}

// Imprime os dados do usuario
void User::print()
{
    std::cout << "Nome: " << this->name << std::endl;
    std::cout << "Email: " << this->email << std::endl;
    std::cout << "ID: " << this->id << std::endl;
}

// Retorna o id do usuario
int User::get_id()
{
    return this->id;
}

// Retorna o nome do usuario
std::string User::get_name()
{
    return this->name;
}

// Retorna o email do usuario
std::string User::get_email()
{
    return this->email;
}
