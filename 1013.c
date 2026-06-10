 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C
Problema    :https://judge.beecrowd.com/pt/problems/view/1013
Data        : 28/04/2026
Objetivo    : encontrar o maior entre 3 números
Aprendizado : uso de lógica matemática ao invés de IF
-------------------------------------------------------------------------- 

#include <stdio.h>
#include <stdlib.h>

int maior(int A , int B){
    return (A + B + abs(A - B))/2;
}

int main(){
    int A, B, C, resposta;

    scanf("%d %d %d", &A, &B, &C);
    
    resposta = maior(A, maior(B, C));

    printf("%d eh o maior\n", resposta);

    return 0;
}

