#include "../include/Community.h"

// Construtor
Community::Community()
{
    this->name = "";
    this->id = 0;
    this->numberOfMembers = 0;
}

// Construtor
Community::Community(std::string name, int id)
{
    this->name = name;
    this->id = id;
    this->numberOfMembers = 0;
}

// Destrutor
Community::~Community()
{
}

// Adiciona um membro
void Community::add_member(User user)
{
    this->members.add(user);
    this->numberOfMembers++;
}

// Remove um membro
void Community::remove_member(User user)
{
    this->members.removeByName(user.get_name());
    this->numberOfMembers--;
}

// Imprime os dados da comunidade
void Community::print()
{
    std::cout << "Nome da comunidade: " << this->name << std::endl;
    std::cout << "Numero de membros: " << this->numberOfMembers << std::endl;
    std::cout << "Membros: " << std::endl;
    this->members.print();
}

// Retorna o id da comunidade
int Community::get_id()
{
    return this->id;
}

// Verifica se o usuario esta na comunidade
bool Community::contains_user(User user)
{
    return this->members.containsByName(user.get_name());
}

// Retorna o nome da comunidade
std::string Community::get_name()
{
    return this->name;
}

// Retorna o numero de membros da comunidade
int Community::get_numberOfMembers()
{
    return this->numberOfMembers;
}

// Retorna a lista de membros da comunidade
UserList Community::get_members()
{
    return this->members;
}

User Community::get_member(std::string name)
{
    return this->members.getByName(name);
}

void Community::printMembers()
{
    this->members.print();
}