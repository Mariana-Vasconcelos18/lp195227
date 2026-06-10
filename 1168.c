 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C99
Problema  https://judge.beecrowd.com/pt/problems/view/1168
Data        :21 /05/2026
Objetivo    :  descobrir a quantidade de leds
Aprendizado : aprendizado de logica matematica 
-------------------------------------------------------------------------- 

#include <string.h>
#include <stdio.h>

int main(){
    char V[101];
    int N, resposta;
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d\n", &N);

    for(int i = 0; i < N; ++i){
        scanf("%s", &V);

        resposta = 0;
        for(int j = 0; j < strlen(V); ++j){
            resposta += leds[V[j] - '0'];
        }

        printf("%d leds\n", resposta);
    }

    return 0;
}









