#include "../include/UserList.h"
#include <cstring>
using namespace std;

// Construtor
UserList::UserList()
{
    head = nullptr;
    tail = nullptr;
    Listsize = 0;
}

// Destrutor
UserList::~UserList()
{
    NodeUser *aux = head;
    while (aux != nullptr)
    {
        NodeUser *aux2 = aux;
        aux = aux->next;
        delete aux2;
    }
}

// Adiciona um elemento ordenado por nome
void UserList::add(User &data)
{
    NodeUser *new_node = new NodeUser(data);

    // Se for vazio
    if (this->head == nullptr)
    {
        this->head = new_node;
        this->tail = new_node;
    }
    else
    {
        // Se o username do novo usuário for menor que o username do primeiro usuário da lista
        if (new_node->data.get_name() < this->head->data.get_name())
        {
            new_node->next = this->head;
            this->head = new_node;
        }
        else
        {
            // Se o username do novo usuário for maior que o username de algum usuário da lista
            NodeUser *aux = this->head;
            while (aux != nullptr)
            {
                if (new_node->data.get_name().compare(this->head->data.get_name()) < 0)
                {
                    aux = aux->next;
                }
                else
                {
                    new_node->next = aux->next;
                    aux->next = new_node;
                    break;
                }
            }
        }
    }
    cout << "USUARIO ADICIONADO\n";
}

// Remove um elemento da lista (por nome)
void UserList::removeByName(std::string name)
{
    // Verifica se a lista esta vazia
    if (head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }

    // Verifica se o elemento esta na lista
    if (!containsByName(name))
    {
        cout << "Usuario nao esta na lista" << endl;
        return;
    }

    // Remove o elemento
    NodeUser *aux = head;
    NodeUser *prev = nullptr;
    while (aux != nullptr && aux->data.get_name() != name)
    {
        prev = aux;
        aux = aux->next;
    }
    if (prev == nullptr)
    {
        head = aux->next;
    }
    else
    {
        prev->next = aux->next;
    }
    delete aux;
    Listsize--;

    cout << "USUARIO REMOVIDO\n";
}

// Remove um elemento da lista (por email)
void UserList::removeByEmail(std::string email)
{
    // Verifica se a lista esta vazia
    if (head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }

    // Verifica se o elemento esta na lista
    if (!containsByEmail(email))
    {
        cout << "Usuario nao esta na lista" << endl;
        return;
    }

    // Remove o elemento
    NodeUser *aux = head;
    NodeUser *prev = nullptr;
    while (aux != nullptr && aux->data.get_email() != email)
    {
        prev = aux;
        aux = aux->next;
    }
    if (prev == nullptr)
    {
        head = aux->next;
    }
    else
    {
        prev->next = aux->next;
    }
    delete aux;
    Listsize--;
    cout << "USUARIO REMOVIDO\n";
}

// Imprime os elementos da lista
void UserList::print()
{
    // Verifica se a lista esta vazia
    if (head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }

    // Imprime os elementos
    NodeUser *aux = head;
    while (aux != nullptr)
    {
        cout << aux->data.get_id() << " - " << aux->data.get_name() << " - " << aux->data.get_email() << endl;
        aux = aux->next;
    }
}

// Verifica se um elemento esta na lista (por nome)
bool UserList::containsByName(std::string name)
{
    // Verifica se a lista esta vazia
    if (head == nullptr)
    {
        return false;
    }

    // Verifica se o elemento esta na lista
    NodeUser *aux = head;
    while (aux != nullptr && aux->data.get_name() != name)
    {
        aux = aux->next;
    }
    if (aux == nullptr)
    {
        return false;
    }
    return true;
}

// Verifica se um elemento esta na lista (por email)
bool UserList::containsByEmail(std::string email)
{
    // Verifica se a lista esta vazia
    if (head == nullptr)
    {
        return false;
    }

    // Verifica se o elemento esta na lista
    NodeUser *aux = head;
    while (aux != nullptr && aux->data.get_email() != email)
    {
        aux = aux->next;
    }
    if (aux == nullptr)
    {
        return false;
    }
    return true;
}

// Retorna um elemento da lista (por nome)
User UserList::getByName(std::string name)
{
    // Verifica se a lista esta vazia
    if (head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return User();
    }

    // Verifica se o elemento esta na lista
    NodeUser *aux = head;
    while (aux != nullptr && aux->data.get_name() != name)
    {
        aux = aux->next;
    }
    if (aux == nullptr)
    {
        cout << "Usuario nao esta na lista" << endl;
        return User();
    }
    return aux->data;
}

// Retorna um elemento da lista (por email)
User UserList::getByEmail(std::string email)
{
    // Verifica se a lista esta vazia
    if (head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return User();
    }

    // Verifica se o elemento esta na lista
    NodeUser *aux = head;
    while (aux != nullptr && aux->data.get_email() != email)
    {
        aux = aux->next;
    }
    if (aux == nullptr)
    {
        cout << "Usuario nao esta na lista" << endl;
        return User();
    }
    return aux->data;
}

// Retorna o tamanho da lista
int UserList::get_size()
{
    return Listsize;
}