#include "../include/aluno.h"
#include <iostream>
#include <string.h>

using namespace std;

struct Aluno
{
    char* nome;
    int matricula;
};

Aluno* AlunoCria(char* nome, int matricula)
{
    //Cria aluno
    Aluno* aluno = new Aluno;
}

void AlunoLibera(Aluno* aluno)
{
    if (aluno != nullptr)
    {
        delete aluno;
    }
}

//Retorna o nome do aluno
char* AlunoGetNome(Aluno* aluno)
{
    return aluno->nome;
}

int AlunoGetMatricula(Aluno* aluno)
{
    return aluno->matricula;
}

void AlunoSetNome(Aluno* aluno, char* nome)
{
    aluno->nome = nome;
}

void AlunoSetMatricula(Aluno* aluno, int matricula)
{
    aluno->matricula = matricula;
}

void AlunoOrdenaPorNome(Aluno** alunos, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i + 1; j < tamanho; j++)
        {
            if (strcmp(AlunoGetNome(alunos[i]), AlunoGetNome(alunos[j])) > 0)
            {
                Aluno* aux = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }
}

void AlunoOrdenaPorMatricula(Aluno** alunos, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i + 1; j < tamanho; j++)
        {
            if (AlunoGetMatricula(alunos[i]) > AlunoGetMatricula(alunos[j]))
            {
                Aluno* aux = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }
}

void ImprimirAlunos(Aluno** alunos, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << "   ";
        cout << "Nome: " << AlunoGetNome(alunos[i]) << endl;
        cout << "   ";
        cout << "Matricula: " << AlunoGetMatricula(alunos[i]) << endl;
    }
}

void DesordenarAlunos(Aluno** alunos, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        int j = rand() % tamanho;
        Aluno* aux = alunos[i];
        alunos[i] = alunos[j];
        alunos[j] = aux;
    }
}

void CopiarAlunos(Aluno** alunos, Aluno** alunosCopia, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        alunosCopia[i] = AlunoCria(AlunoGetNome(alunos[i]), AlunoGetMatricula(alunos[i]));
    }
}

void AlunoLiberaVetor(Aluno** alunos, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        AlunoLibera(alunos[i]);
    }
    delete[] alunos;
}