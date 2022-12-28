#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Aluno
{
    int numMatricula;
    string nome;
    float nota1;
    float nota2;
    float nota3;
};


float calcularMedia(Aluno a) 
{
    return (a.nota1 + a.nota2 + a.nota3) / 3;
}

void imprimirAlunoInfo(Aluno maior) 
{
    cout << "Nome: " << maior.nome << endl;
    cout << "Nota01 " << maior.nota1 << endl;
    cout << "Nota02 " << maior.nota2 << endl;
    cout << "Nota03 " << maior.nota3 << endl;
}

int main() {

    Aluno alunos[5];
    float mediaAlunos[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> alunos[i].nome >> alunos[i].numMatricula >> alunos[i].nota1 >> alunos[i].nota2 >> alunos[i].nota3;
        mediaAlunos[i] = calcularMedia(alunos[i]);
    }
    int indiceMaiorMedia = 0;
    for (int i = 0; i < 5; i++)
    {
        if (mediaAlunos[i] >= mediaAlunos[indiceMaiorMedia])
        {
            indiceMaiorMedia = i;
        }
    }
    imprimirAlunoInfo(alunos[indiceMaiorMedia]);

    return 0;
}