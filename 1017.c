 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 19/05/2026
Objetivo    :  Calcular a distância percorrida pelo carro 
Aprendizado : aprendizado de logica
-------------------------------------------------------------------------- 

#include <stdio.h>

int main(){
    int tempo, velocidade, distancia;
    double litros;

    scanf("%d\n%d", &tempo, &velocidade);

    distancia = velocidade * tempo;
    litros = distancia/12.0;

    printf("%.3lf\n", litros);

    return 0;
}




