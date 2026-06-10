 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    :  fazer uma tabuada 
Aprendizado : uso de for 
-------------------------------------------------------------------------- 

#include <stdio.h>

int main(){
    int i , N ,resultado;
    
    scanf("%d",&N);
    
    for (i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",i,N,N*i);
    }
return 0;
}


