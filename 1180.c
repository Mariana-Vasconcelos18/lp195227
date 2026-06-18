 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C++
Problema    :https://judge.beecrowd.com/pt/problems/view/1180
Data        :18/06/2026
Objetivo    : encontrar o menor elemento do vetor e a sua posição dentro do vetor
Aprendizado : manipulaçao de vetores
-------------------------------------------------------------------------- 
#include<stdio.h>
#define n 1000
int main(){
	int x[n], i;
	int menor, indicemenor, num ;
	
	scanf("%d", &num);
	
	
	for(i=0; i<num; i++){
		scanf("%d", &x[i]);
	}
	
	menor = x[0];
	for(i=0; i<num; i++){
		if(x[i]< menor){
			menor= x[i];
			indicemenor = i;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", indicemenor);
	
	return 0;
}
