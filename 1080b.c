 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C
Problema    :https://judge.beecrowd.com/pt/problems/view/1080
Data        : 28/04/2026
Objetivo    : encontrar o menor numero e a posição de 100 valores
Aprendizado : uso do IF, laços For, uso de vetor   
-------------------------------------------------------------------------- 

#include <stdio.h>
#include <limits.h>
 
int main() {
  
    int i, maior, posicao;
    int V[100];
    
    
    for (i = 0; i < 100; i++){
       scanf("%d", &V[i]);
    }
    maior = V[0];
    posicao = 1;
    
    for (i = 1; i <= 100; ++i){
        if (V[i] > maior){
            maior = V[i];
            posicao = i +1;
        }
    }
    
    printf("%d\n%d\n", maior, posicao);
    return 0;
}





