 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 19/05/1016
Objetivo    :  ler 4 valores e calcular a distância entre eles
Aprendizado : uso da variavel de raiz e aprendizado de logica
-------------------------------------------------------------------------- 

#include <stdio.h>
 
int main() {
 
  double x1, x2, y1, y2, distancia;
  
  scanf ("%lf %lf\n%lf %lf", &x1, &y1, &x2, &y2);
  
  distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
  
  printf ("%.4lf\n", distancia);
 
    return 0;
}



