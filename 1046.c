 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C99
Problema    :https://judge.beecrowd.com/pt/problems/view/1046
Data        : 21/05/2026
Objetivo    :  calcular a duração de um jogo
Aprendizado : aprendizado de logica
-------------------------------------------------------------------------- 

#include<stdio.h>
#include <math.h>

int main(){
      int i,j,x;
      
      scanf("%d%d",&i,&j);
      x = 24-i+j;
      if(x > 24)	
	      x = abs(24 - (24-i+j));
	      printf("O JOGO DUROU %d HORA(S)\n",x);
	return 0;
}




