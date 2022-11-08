#include "../include/aluno.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Aluno
{
    char nome[100];
    int matricula;
};

Aluno *AlunoCria(const char *nome, int matricula)
{
    Aluno *aluno = new Aluno;
    AlunoSetNome(aluno, nome);
    aluno->matricula = matricula;
    return aluno;
}

void AlunoSetNome(Aluno *aluno, const char *nome)
{
    int i = 0;
    while (nome[i] != '\0')
    {
        aluno->nome[i] = nome[i];
        i++;
    }
    aluno->nome[i] = '\0';
}

void AlunoSetMatricula(Aluno *aluno, int matricula)
{
    aluno->matricula = matricula;
}

char *AlunoGetNome(Aluno *aluno)
{
    return aluno->nome;
}

int AlunoGetMatricula(Aluno *aluno)
{
    return aluno->matricula;
}

void AlunoLibera(Aluno *aluno)
{
    delete aluno;
}

Aluno **AlunoCriaVetor(int tamanho)
{
    Aluno **alunos = new Aluno *[tamanho];
    return alunos;
}

void AlunoLiberaVetor(Aluno **alunos, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        AlunoLibera(alunos[i]);
    }
    delete[] alunos;
}

void AlunoOrdenaPorNome(Aluno **alunos, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho - 1; j++)
        {
            if (strcmp(AlunoGetNome(alunos[j]), AlunoGetNome(alunos[j + 1])) > 0)
            {
                Aluno *aux = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = aux;
            }
        }
    }
}

void AlunoOrdenaPorMatricula(Aluno **alunos, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho - 1; j++)
        {
            if (AlunoGetMatricula(alunos[j]) > AlunoGetMatricula(alunos[j + 1]))
            {
                Aluno *aux = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = aux;
            }
        }
    }
}

Aluno **AlunoCopiaVetor(Aluno **alunos, int tamanho)
{
    Aluno **copia = AlunoCriaVetor(tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        copia[i] = AlunoCria(AlunoGetNome(alunos[i]), AlunoGetMatricula(alunos[i]));
    }
    return copia;
}

void AlunoImprimeVetor(Aluno **alunos, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << AlunoGetNome(alunos[i]) << " " << AlunoGetMatricula(alunos[i]) << endl;
    }
}

void AlunoDesordenaVetor(Aluno **alunos, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        int j = rand() % tamanho;
        Aluno *aux = alunos[i];
        alunos[i] = alunos[j];
        alunos[j] = aux;
    }
}