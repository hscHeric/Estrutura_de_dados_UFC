#include <iostream>
#include "../include/aluno.h"

using namespace std;

int main(void)
{
Aluno* alunos[38];
alunos[0] = AlunoCria("ALEXANDRE PINTO MARQUES TINOCO", 508072);
alunos[1] = AlunoCria("ALYSSON RABELO PEREIRA", 428725);
alunos[2] = AlunoCria("ANA KARINE NOBRE BEZERRA", 499100);
alunos[3] = AlunoCria("ANA LIVIA DA SILVEIRA LOPES", 514380);
alunos[4] = AlunoCria("ANTHONY STEFFANO MOREIRA MARTINS", 380037);
alunos[5] = AlunoCria("BRUNO VINICIUS TITO FERREIRA", 514170);
alunos[6] = AlunoCria("CALEBE SUCUPIRA DE OLIVEIRA", 540209);
alunos[7] = AlunoCria("CARLOS EDUARDO GURGEL DE ALMEIDA DE CARVALHO LIMA", 430024);
alunos[8] = AlunoCria("CECILIA MOURAO CARVALHEDO MESQUITA", 535595);
alunos[9] = AlunoCria("DAVI ALVES MEDEIROS", 496391);
alunos[10] = AlunoCria("DAVID SILVA FERNANDES DE OLIVEIRA", 539402);
alunos[11] = AlunoCria("FELIPE KAUAN DOS SANTOS SILVA", 510175);
alunos[12] = AlunoCria("FRANCISCO GUSTAVO MARTINS DE SOUSA", 511779);
alunos[13] = AlunoCria("FRANCISCO JARDEL SILVA MAGALHAES", 500619);
alunos[14] = AlunoCria("GABRIEL ALVES PESSOA", 512131);
alunos[15] = AlunoCria("GABRIEL BRAGA MARTINS", 493659);
alunos[16] = AlunoCria("GISLENO RODRIGUES DE ALENCAR SILVA JUNIOR", 511938);
alunos[17] = AlunoCria("GUILHERME PORDEUS FREIRE SAMPAIO", 475069);
alunos[18] = AlunoCria("HERIC DA SILVA CRUZ", 537999);
alunos[19] = AlunoCria("ISMAEL ARAUJO DE OLIVEIRA", 510909);
alunos[20] = AlunoCria("JOAO PEDRO CORDEIRO GUIMARAES", 493703);
alunos[21] = AlunoCria("JONES VIEIRA CABRAL", 392279);
alunos[22] = AlunoCria("JOSE AURI JOTER MARTINS FILHO", 421978);
alunos[23] = AlunoCria("JOSE ELIAS FARIAS ROCHA", 496543);
alunos[24] = AlunoCria("JOSUE SUCUPIRA DE OLIVEIRA", 540630);
alunos[25] = AlunoCria("LARISSA KELLEN DA SILVA SARAIVA", 496243);
alunos[26] = AlunoCria("LUAN LEYSSON DE ARAUJO MAIA", 431421);
alunos[27] = AlunoCria("LUCAS ANDRE PACHECO DE OLIVEIRA", 475597);
alunos[28] = AlunoCria("LUIZ FELIPE MUNIZ DE ALBUQUERQUE", 508354);
alunos[29] = AlunoCria("MAELY VITORIA GOMES LIRA", 541487);
alunos[30] = AlunoCria("MARCOS MENDES CARNEIRO FURTADO BEZERRA", 510326);
alunos[31] = AlunoCria("MARIA EDUARDA SANTANA MARQUES", 538264);
alunos[32] = AlunoCria("MATHEUS NARCIZIO CAVALCANTE DE MACEDO", 494693);
alunos[33] = AlunoCria("MATHEUS SILVA DE SOUSA", 516447);
alunos[34] = AlunoCria("MONALISA SILVA BEZERRA", 535614);
alunos[35] = AlunoCria("PEDRO RIVALDO TABOSA SILVA", 511881);
alunos[36] = AlunoCria("TALES MACIEL MIRANDA", 495243);
alunos[37] = AlunoCria("WILLIAM MARREIRO BRITO", 538468);

//Desordenar os alunos
DesordenarAlunos(alunos, 38);

cout << "Alunos da turma QXD0010 - ESTRUTURA DE DADOS (2022.2 - T06) - Desordenados" << endl;
ImprimirAlunos(alunos, 38);

//Ordenar os alunos por nome
cout << "Alunos da turma QXD0010 - ESTRUTURA DE DADOS (2022.2 - T06) - Ordenados por nome" << endl;
Aluno** alunosNome = new Aluno*[38];
CopiarAlunos(alunos, alunosNome, 38);
AlunoOrdenaPorNome(alunosNome, 38);
ImprimirAlunos(alunosNome, 38);
AlunoLiberaVetor(alunosNome, 38);

//Ordenar os alunos por matrícula
cout << "Alunos da turma QXD0010 - ESTRUTURA DE DADOS (2022.2 - T06) - Ordenados por matrícula" << endl;
Aluno** alunosMatricula = new Aluno*[38];
CopiarAlunos(alunos, alunosMatricula, 38);
AlunoOrdenaPorMatricula(alunosMatricula, 38);
ImprimirAlunos(alunosMatricula, 38);
AlunoLiberaVetor(alunosMatricula, 38);

AlunoLiberaVetor(alunos, 38);
}