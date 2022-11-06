#ifndef ALUNO_H
#define ALUNO_H

struct Aluno;

Aluno* AlunoCria(char* nome, int matricula);

void AlunoLibera(Aluno* aluno);

//Retorna o nome do aluno
char* AlunoGetNome(Aluno* aluno);

int AlunoGetMatricula(Aluno* aluno);

void AlunoSetNome(Aluno* aluno, char* nome);

void AlunoSetMatricula(Aluno* aluno, int matricula);

void AlunoOrdenaPorNome(Aluno** alunos, int tamanho);

void AlunoOrdenaPorMatricula(Aluno** alunos, int tamanho);

void ImprimirAlunos(Aluno** alunos, int tamanho);

void DesordenarAlunos(Aluno** alunos, int tamanho);

void CopiarAlunos(Aluno** alunos, Aluno** alunosCopia, int tamanho);

void AlunoLiberaVetor(Aluno** alunos, int tamanho);

#endif