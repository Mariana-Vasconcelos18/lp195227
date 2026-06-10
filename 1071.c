 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C
Problema    :https://judge.beecrowd.com/pt/problems/view/1071
Data        : 28/04/2026
Objetivo    : fazer a soma dos números ímpares consecutivos 
Aprendizado : uso do IF, laços For, manipulação de soma  
-------------------------------------------------------------------------- 

#include <stdio.h>
 
int main() {
 
    int X, Y, maior, menor, i;
    int soma = 0;
    
    scanf ("%d %d\n", &X, &Y);
    
    if (X<Y){
        menor = X;
        maior = Y;
    }
     else {
         menor = Y;
         maior = X;
     }
     
     for (i = menor + 1; i < maior; i++) {
         if (i % 2 != 0){
             soma += i;
         }
     }
    
   printf ("%d\n", soma);
 
    return 0;
}




