#**Equação do Segundo grau**

Implemente uma função que calcule as raízes de uma equação do segundo grau, do tipo $(ax^2 + bx + c)$, Essa função deve obedecer ao protótipo:

int raizes(float a, float b, float c, float* x1, float*x2);

Essa função deve ter como valor de retorno o número de raízes reais e distintas da equação; se não existir raízes reais deve-se retornar -1 e imprimir "Não possui raizes reais!". Se existirem raízes reais, seus valores devem ser armazenados nas variáveis apontadas por \texttt{x1} e \texttt{x2}.

Exemplo:

>>
1

2

-15
<<
2

x1 = 3

x2 = -5

>>
2

4

2
<<

1

x1 = -1
