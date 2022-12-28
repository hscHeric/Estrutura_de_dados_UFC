#include <iostream>
#include "../include/aluno.h"

using namespace std;

int main(void)
{

Aluno** alunos = AlunoCriaVetor(15);
alunos[0] = AlunoCria("ALEXANDRE PINTO MARQUES TINOCO", 508072);
alunos[1] = AlunoCria("BRUNO VINICIUS TITO FERREIRA", 514170);
alunos[2] = AlunoCria("CECILIA MOURAO CARVALHEDO MESQUITA", 535595);
alunos[3] = AlunoCria("DAVID SILVA FERNANDES DE OLIVEIRA", 539402);
alunos[4] = AlunoCria("FELIPE KAUAN DOS SANTOS SILVA", 510175);
alunos[5] = AlunoCria("GUILHERME PORDEUS FREIRE SAMPAIO", 475069);
alunos[6] = AlunoCria("HERIC DA SILVA CRUZ", 537999);
alunos[7] = AlunoCria("ISMAEL ARAUJO DE OLIVEIRA", 510909);
alunos[8] = AlunoCria("JOAO PEDRO CORDEIRO GUIMARAES", 493703);
alunos[9] = AlunoCria("LARISSA KELLEN DA SILVA SARAIVA", 496243);
alunos[10] = AlunoCria("MAELY VITORIA GOMES LIRA", 541487);
alunos[11] = AlunoCria("MONALISA SILVA BEZERRA", 535614);
alunos[12] = AlunoCria("PEDRO RIVALDO TABOSA SILVA", 511881);
alunos[13] = AlunoCria("TALES MACIEL MIRANDA", 495243);
alunos[14] = AlunoCria("WILLIAM MARREIRO BRITO", 538468);

AlunoDesordenaVetor(alunos, 15);

cout << "Alunos da turma QXD0010 - ESTRUTURA DE DADOS (2022.2 - T06) - Desordenados" << endl;
AlunoImprimeVetor(alunos, 15);
cout << "------------------------------------------------------------------------" << endl;

cout << "Alunos da turma QXD0010 - ESTRUTURA DE DADOS (2022.2 - T06) - Ordenados por nome" << endl;
Aluno** alunosOrdenadosPorNome = AlunoCopiaVetor(alunos, 15);
AlunoOrdenaPorNome(alunosOrdenadosPorNome, 15);
AlunoImprimeVetor(alunosOrdenadosPorNome, 15);
AlunoLiberaVetor(alunosOrdenadosPorNome, 15);
cout << "------------------------------------------------------------------------" << endl;

cout << "Alunos da turma QXD0010 - ESTRUTURA DE DADOS (2022.2 - T06) - Ordenados por matricula" << endl;
Aluno** alunosOrdenadosPorMatricula = AlunoCopiaVetor(alunos, 15);
AlunoOrdenaPorMatricula(alunosOrdenadosPorMatricula, 15);
AlunoImprimeVetor(alunosOrdenadosPorMatricula, 15);
AlunoLiberaVetor(alunosOrdenadosPorMatricula, 15);
cout << "------------------------------------------------------------------------" << endl;

AlunoLiberaVetor(alunos, 15);
}