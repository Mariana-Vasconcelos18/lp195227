 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C99
Problema    https://judge.beecrowd.com/pt/problems/view/1179
Data        : 26/05/2026
Objetivo    :  preencher os vetores 
Aprendizado : aprendizado de logica, uso de vetores
-------------------------------------------------------------------------- 

#include <stdio.h>

int main(){
	int num,i; 
	double num1, num2, num3, ponderada;
	
	scanf("%d", &num);
	
	for (i=0; i<num; i++){
		scanf("%lf %lf %lf", &num1, &num2, &num3);
		ponderada = (num1*2 + num2*3 + num3*5)/10;
		printf("%.1lf\n", ponderada);
	}
    
return 0;
}




