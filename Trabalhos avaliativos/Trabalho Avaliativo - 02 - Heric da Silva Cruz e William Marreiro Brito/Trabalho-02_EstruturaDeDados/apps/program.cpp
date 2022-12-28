using namespace std;
#include "../include/CommunityList.h"
#include <iostream>
#include <string>

unsigned long int User_id_counter = 0;
unsigned long int Community_id_counter = 0;

int main()
{
    CommunityList listaComunidades;

    char control = ' ';
    while (control != '0')
    {
        char read;
        system("clear");
        // Inicio do programa
        cout << " _____     _____ _____ _____ " << endl;
        cout << "|  _  |_ _|     |     |     |" << endl;
        cout << "|     | | |   --|  |  | | | |" << endl;
        cout << "|__|__|__/|_____|_____|_|_|_|" << endl;
        cout << endl;

        // Imprimindo menu
        cout << "1 - CREDITOS" << endl;
        cout << "2 - Inserir usuario na comunidade" << endl;
        cout << "3 - Listar comunidades" << endl;
        cout << "4 - Listar usuários" << endl;
        cout << "5 - Listar comunidades de um usuário" << endl;
        cout << "6 - Listar usuários de uma comunidade" << endl;
        cout << "7 - Deletar comunidade" << endl;
        cout << "8 - Deletar usuário" << endl;
        cout << "9 - Deletar usuário de uma comunidade" << endl;
        cout << endl;
        cout << "0 - Sair" << endl;
        cout << endl;

        cout << "Digite a opção desejada: ";
        cin >> control;

        switch (control)
        {
        case '1':
        {
            // Imprime os cŕeditos
            system("clear");   
            cout << "------------------------------" << endl;
            cout << "||         CREDITOS         ||" << endl;
            cout << "||                          ||" << endl;
            cout << "||   Heric da Silva Cruz    ||" << endl;
            cout << "||  William Marreiro Brito  ||" << endl;
            cout << "||                          ||" << endl;
            cout << "||   Prof.: Roberto Cabral  ||" << endl;
            cout << "||                          ||" << endl;
            cout << "------------------------------" << endl;
            cout << "\nDigite 0 para sair. ";
            cin >> read;
            break;
        }

        case '2':
        {
            // Criar usuário
            system("clear");   
            cout << "INSERIR USUÁRIO NA COMUNIDADE\n" << endl;
            string name;
            cout << "Digite o nome do usuário: ";
            cin >> name;

            string email;
            cout << "Digite o email do usuário: ";
            cin >> email;

            User user = User(name, email, User_id_counter++);

            string nameCom;
            cout << "Digite o nome da comunidade: ";
            cin >> nameCom;

            Community community = Community(nameCom, Community_id_counter++);

            cout << endl;

            listaComunidades.includeInCommunity(user, community);

            cout << "\nDigite 0 para sair. ";
            cin >> read;

            break;
        }

        case '3':
        {
            // Listar comunidades
            system("clear");   
            cout << "LISTAGEM DAS COMUNIDADES\n" << endl;
            listaComunidades.print();
            cout << "\nDigite 0 para sair. ";
            cin >> read;
            break;
        }

        case '4':
        {
            // Listar usuários
            system("clear");   
            cout << "LISTAGEM DE USUARIOS\nID - Nome - Email\n" << endl;
            listaComunidades.PrintCommunitiesAndMembers();
            cout << "\nDigite 0 para sair. ";
            cin >> read;
            break;
        }

        case '5':
        {
            // Listar comunidades de um usuário
            system("clear");   
            cout << "LISTAGEM DAS COMUNIDADES DE UM USUARIO\n" << endl;
            cout << "LISTAGEM DE USUARIOS\nID - Nome - Email" << endl;
            listaComunidades.PrintCommunitiesAndMembers();
            string name;
            cout << endl;
            cout << "Digite o nome do usuário: ";
            cin >> name;
            User user = listaComunidades.getUserByName(name);
            cout << "\nComunidades que '" << name << "' participa:" << endl;
            listaComunidades.printCommunitiesByUser(user);
            cout << "\nDigite 0 para sair. ";
            cin >> read;
            break;
        }

        case '6':
        {
            // Listar usuários de uma comunidade
            system("clear");   
            cout << "LISTAGEM DOS USUARIOS DE UMA COMUNIDADE\n\nComunidades existentes:" << endl;
            listaComunidades.print();
            cout << endl;
            string name;
            cout << "Digite o nome da comunidade: ";
            cin >> name;
            cout << "\nUsuarios que participam de '" << name << "': (ID - Nome - Email) " << endl;
            listaComunidades.printMembers(name);
            cout << "\nDigite 0 para sair. ";
            cin >> read;
            break;
        }

        case '7':
        {
            // Deletar comunidade
            system("clear");   
            cout << "DELETAR COMUNIDADE\n\nComunidades existentes:" << endl;
            listaComunidades.print();
            cout << endl;
            string name;
            cout << "Digite o nome da comunidade: ";
            cin >> name;
            listaComunidades.remove(name);
            cout << "\nDigite 0 para sair. ";
            cin >> read;
            break;
        }

        case '8':
        {
            // Deletar usuário
            system("clear");  
            cout << "DELETAR USUARIO\n" << endl;
            cout << "LISTAGEM DE USUARIOS\nID - Nome - Email\n" << endl;
            listaComunidades.PrintCommunitiesAndMembers();
            string name;
            cout << "Digite o nome do usuário: ";
            cin >> name;
            User user = listaComunidades.getUserByName(name);
            listaComunidades.removeMember(user);
            cout << "\nDigite 0 para sair. ";
            cin >> read;
            break;
        }

        case '9':
        {
            // Deletar usuário de uma comunidade
            system("clear");   
            cout << "DELETAR USUARIO DE UMA COMUNIDADE\n" << endl;
            cout << "LISTAGEM DE USUARIOS\nID - Nome - Email" << endl;
            listaComunidades.PrintCommunitiesAndMembers();
            string userName;
            cout << "Digite o nome do usuário: ";
            cin >> userName;
            string communityName;
            cout << "Digite o nome da comunidade: ";
            cin >> communityName;
            User user = listaComunidades.getUserByName(userName);
            Community comunidade = listaComunidades.get(communityName);
            listaComunidades.removeFromCommunity(user, comunidade);
            cout << "\nDigite 0 para sair. ";
            cin >> read;
            break;
        }

        case '0':
        {
            // Sair
            system("clear");
            cout << "Obrigado por usar o AvCOM :)\n" << endl;
            cout << " _____     _____ _____ _____ " << endl;
            cout << "|  _  |_ _|     |     |     |" << endl;
            cout << "|     | | |   --|  |  | | | |" << endl;
            cout << "|__|__|__/|_____|_____|_|_|_|" << endl;
            break;
        }

        default:
        {
            system("clear");   
            cout << "Opção inválida" << endl;
            break;
        }
        }

        cout << endl;
        cout << endl;
    }
    return 0;
}