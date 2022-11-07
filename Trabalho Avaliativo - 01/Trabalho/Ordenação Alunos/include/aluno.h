#ifndef ALUNO_H
#define ALUNO_H

struct Aluno;

//Cria struct aluno alocado dinamicamente
Aluno* AlunoCria(char* nome, int matricula);

//Seta o nome do aluno
void AlunoSetNome(Aluno* aluno, char* nome);

//Set a matricula do aluno
void AlunoSetMatricula(Aluno* aluno, int matricula);

//Get o nome do aluno
char* AlunoGetNome(Aluno* aluno);

//Get a matricula do aluno
int AlunoGetMatricula(Aluno* aluno);

//Libera a memoria alocada para o aluno
void AlunoLibera(Aluno* aluno);

//Cria vetor de alunos alocado dinamicamente
Aluno** AlunoCriaVetor(int tamanho);

//Libera a memoria alocada para o vetor de alunos
void AlunoLiberaVetor(Aluno** alunos, int tamanho);

//Ordena o vetor de alunos por nome
void AlunoOrdenaPorNome(Aluno** alunos, int tamanho);

//Ordena o vetor de alunos por matricula
void AlunoOrdenaPorMatricula(Aluno** alunos, int tamanho);

//Copia o vetor de alunos
Aluno** AlunoCopiaVetor(Aluno** alunos, int tamanho);

//Imprime o vetor de alunos
void AlunoImprimeVetor(Aluno** alunos, int tamanho);

//Desordena o vetor de alunos
void AlunoDesordenaVetor(Aluno** alunos, int tamanho);
#endif