#include "../include/CommunityList.h"
long int identity = -1;
using namespace std;

// Construtor
CommunityList::CommunityList()
{
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

// Destrutor
CommunityList::~CommunityList()
{
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        NodeCommunity *aux2 = aux;
        aux = aux->next;
        delete aux2;
    }
}

void CommunityList::add(Community &data)
{
    NodeCommunity *new_node = new NodeCommunity(data);

    // Se a lista estiver vazia
    if (this->head == nullptr)
    {
        this->head = new_node;
        this->tail = new_node;
    }

    // Se nao hover uma comunidade com este nome
    else if (!(this->contains(data.get_name())))
    {
        // Se o username do novo usuário for menor que o username do primeiro usuário da lista
        if (new_node->data.get_name().compare(this->head->data.get_name()) < 1)
        {
            new_node->next = this->head;
            this->head = new_node;
        }
        else
        {
            // Se o username do novo usuário for maior que o username de algum usuário da lista
            NodeCommunity *aux = this->head;
            NodeCommunity *prev = nullptr;
            while (aux != nullptr && new_node->data.get_name().compare(this->head->data.get_name()) > 0)
            {
                prev = aux;
                aux = aux->next;
            }
            prev->next = new_node;
            new_node->next = aux;
        }
    }

    this->size++;
    cout << "COMUNIDADE ADICIONADA\n";
}

// Remove um elemento da lista e todos os seus membros
void CommunityList::remove(std::string name)
{
    // Verifica se a lista esta vazia
    if (this->head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }

    // Verifica se o elemento esta na lista
    if (!this->contains(name))
    {
        cout << "Comunidade nao existe" << endl;
        return;
    }

    // Remove o elemento da lista
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        cout << "COMUNIDADE REMOVIDA\n";
        // Verifica se o elemento esta no inicio da lista
        if (aux == this->head && aux->data.get_name() == name)
        {
            this->head = aux->next;
            delete aux;
            this->size--;
            return;
        }
        // Verifica se o elemento esta no meio da lista
        else if (aux->next != nullptr && aux->next->data.get_name() == name)
        {
            NodeCommunity *aux2 = aux->next;
            aux->next = aux->next->next;
            delete aux2;
            this->size--;
            return;
        }
        // Verifica se o elemento esta no final da lista
        else if (aux->next == nullptr && aux->data.get_name() == name)
        {
            NodeCommunity *aux2 = this->head;
            while (aux2->next != aux)
            {
                aux2 = aux2->next;
            }
            aux2->next = nullptr;
            delete aux;
            this->size--;
            return;
        }
        aux = aux->next;
    }
}

// Imprime os membros de uma comunidade
void CommunityList::printMembers(std::string name)
{
    // Verifica se a lista esta vazia
    if (this->head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }

    // Verifica se o elemento esta na lista
    if (!this->contains(name))
    {
        cout << "Comunidade nao existe" << endl;
        return;
    }

    // Imprime os membros da comunidade
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        if (aux->data.get_name().compare(name) == 0)
        {
            aux->data.printMembers();
            return;
        }
        aux = aux->next;
    }
}

// Imprime as comunidades que um usuario participa
void CommunityList::printCommunitiesByUser(User &user)
{
    // Verifica se a lista esta vazia
    if (this->head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }

    // Imprime as comunidades que o usuario participa
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        if (aux->data.contains_user(user))
        {
            cout << aux->data.get_name() << endl;
        }
        aux = aux->next;
    }
}

// Remove um usuario de todas as comunidades que ele participa
void CommunityList::removeMember(User &user)
{
    // Verifica se a lista esta vazia
    if (this->head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }

    // Remove o usuario de todas as comunidades que ele participa
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        if (aux->data.contains_user(user))
        {
            aux->data.remove_member(user);

            // Se a comunidade ficar vazia, é deletada
            if (aux->data.get_numberOfMembers() <= 0)
            {
                this->remove(aux->data.get_name());
            }
        }
        aux = aux->next;
    }
}

// Lista as comunidades
void CommunityList::print()
{
    // Verifica se a lista esta vazia
    if (this->head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }

    // Imprime a lista
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        cout << aux->data.get_name() << endl;
        aux = aux->next;
    }
}

// Adiciona um usuario a uma comunidade, caso a comunidade nao exista, cria uma nova
void CommunityList::includeInCommunity(User &user, Community &community)
{
    // Adiciona a comunidade, se já existir, nada acontece
    this->add(community);
    
    NodeCommunity *aux = this->head;
    while (aux->next != nullptr && !(aux->data.get_name().compare(community.get_name()) == 0))
    {
        aux = aux->next;
    }
    aux->data.add_member(user);
}

// Remove um usuario de uma comunidade
void CommunityList::removeFromCommunity(User &user, Community &community)
{
    // Verifica se a lista esta vazia
    if (this->head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }

    // Verifica se a comunidade existe
    if (!this->contains(community.get_name()))
    {
        cout << "Comunidade nao existe" << endl;
        return;
    }

    // Remove o usuario da comunidade
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        if (aux->data.get_name() == community.get_name())
        {
            aux->data.remove_member(user);

            if (aux->data.get_numberOfMembers() <= 0)
            {
                this->remove(aux->data.get_name());
            }
            return;
        }
        aux = aux->next;
    }
}

// Verifica se um elemento esta na lista
bool CommunityList::contains(std::string name)
{
    // Verifica se a lista esta vazia
    if (this->head == nullptr)
    {
        return false;
    }

    // Verifica se o elemento esta na lista
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        if (aux->data.get_name() == name)
        {
            return true;
        }
        aux = aux->next;
    }
    return false;
}

// Retorna uma comunidade da lista cujo nome seja igual ao passado como parametro
Community CommunityList::get(std::string name)
{
    // Verifica se a lista esta vazia
    if (this->head == nullptr)
    {
        Community auxiliar = Community(name, identity--);
        add(auxiliar);
        return auxiliar;
    }

    // Verifica se o elemento esta na lista
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        if (aux->data.get_name().compare(name) == 0)
        {
            return aux->data;
        }
        aux = aux->next;
    }
    return Community();
}

User CommunityList::getUserByName(std::string name)
{
    // Verifica se a lista esta vazia
    if (this->head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return User();
    }

    // Procura em cada comunidade o usuario
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        User usuario = User(name, "", -1);
        if (aux->data.contains_user(usuario))
        {
            return aux->data.get_member(name);
        }
        aux = aux->next;
    }

    return User();
}

// Retorna o tamanho da lista
int CommunityList::get_size()
{
    return this->size;
}

void CommunityList::PrintCommunitiesAndMembers()
{
    // Verifica se a lista esta vazia
    if (this->head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }

    // Imprime as comunidades e os usuarios que participam de cada uma
    NodeCommunity *aux = this->head;
    while (aux != nullptr)
    {
        cout << aux->data.get_name() << endl;
        aux->data.printMembers();
        cout << endl;
        aux = aux->next;
    }
}