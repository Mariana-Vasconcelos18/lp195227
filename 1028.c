 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C99
Problema : https://judge.beecrowd.com/pt/problems/view/1028
Data        :21 /05/2026
Objetivo    :  dividir as coleções em pilhas de tamanho igual e que tenham o mesmo número de figurinhas entre qualquer pilha  
Aprendizado : aprendizado de logica matematica
-------------------------------------------------------------------------- 


#include <stdio.h>

int MDC(int a, int b)
{
    return (b == 0) ? a : MDC(b, a % b);
}

int main()
{
    int N, F1, F2;

    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
    {
        scanf("%d %d", &F1, &F2);
        printf("%d\n", MDC(F1, F2));
    }

    return 0;
}







