/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : mariana Rafaela dos Santos Vasconcelos
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 18/06/2026
Objetivo    : determine o menor número que assegure que Wellington possa continuar funcionando
Aprendizado : logica matematica
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <iostream>

using namespace std;

int T[101][1001];

int sobrevivente(int n, int k){
    if(T[n][k] == -1){
        T[n][k] = (sobrevivente(n - 1, k) + k) % n;
    }
    return T[n][k];
}

int main(){
    int N, m;

    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 1001; ++j){
            T[i][j] = 0;
        }
    }
    for(int i = 2; i < 101; ++i){
        for(int j = 0; j < 1001; ++j){
            T[i][j] = -1;
        }
    }

    while(cin >> N){
        if (!N) break;

        m = 1;
        while((sobrevivente(N - 1, m) + 1) % N != 12){
            ++m;
        }

        cout << m << endl;
    }

    return 0;
}
