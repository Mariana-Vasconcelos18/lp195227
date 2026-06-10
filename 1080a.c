 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C
Problema    :https://judge.beecrowd.com/pt/problems/view/1080
Data        : 28/04/2026
Objetivo    : encontrar o menor numero e a posição de 100 valores
Aprendizado : uso do IF, laços For,  
-------------------------------------------------------------------------- 

#include <stdio.h>
#include <limits.h>
 
int main() {
  
    int N, i, maior, posicao;
    
    maior = INT_MIN;
    for (i = 1; i <= 100; ++i)
    {
        scanf("%d", &N);
        if (N > maior)
        {
            maior = N;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao);
    return 0;
}




