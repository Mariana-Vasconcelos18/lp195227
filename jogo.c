#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void exibirTabuleiro(int tabuleiro[9][9]) {
    printf("\n     1 2 3   4 5 6   7 8 9\n\n");
    for (int i = 0; i < 9; ++i) {
       
        if (i > 0 && i % 3 == 0) {
            printf("\n");
        }
        
        printf(" %d   ", i + 1);
        for (int j = 0; j < 9; ++j) {
            
            if (j > 0 && j % 3 == 0) {
                printf("  ");
            }
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


bool jogoConcluido(int tabuleiro[9][9]) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (tabuleiro[i][j] == 0) return false;
        }
    }
    return true;
}

int main() {
    int tabuleiro[9][9];
    bool posicoesModificaveis[9][9] = {false};

    
    FILE *arquivo = fopen("input2.txt", "r");
    if (arquivo == NULL) {
        fprintf(stderr, "Erro: Nao foi possivel abrir o arquivo 'input2.txt'!\n");
        fprintf(stderr, "Certifique-se de que o arquivo esta na mesma pasta do executavel.\n");
        return 1;
    }

    
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (fscanf(arquivo, "%d", &tabuleiro[i][j]) != 1) {
                fprintf(stderr, "Erro ao ler os dados do arquivo!\n");
                fclose(arquivo);
                return 1;
            }
            
            if (tabuleiro[i][j] == 0) {
                posicoesModificaveis[i][j] = true;
            }
        }
    }
    fclose(arquivo);
    printf("Instrucoes: Digite a Linha, Coluna e o Valor separados por espaco.\n");

    while (true) {
        exibirTabuleiro(tabuleiro);

        if (jogoConcluido(tabuleiro)) {
            printf("\nParabens! Voce ganhou o jogo\n");
            break;
        }

        int linha, coluna, valor;
        printf("Sua jogada (Linha Coluna Valor): ");
        
        
        if (scanf("%d %d %d", &linha, &coluna, &valor) != 3) {
            printf("Entrada invalida!\n");
            
            while (getchar() != '\n');
            continue;
        }

        
        if (linha == 0 && coluna == 0 && valor == 0) {
            printf("Jogo encerrado\n");
            break;
        }

        
        int r = linha - 1;
        int c = coluna - 1;

        
        if (r < 0 || r >= 9 || c < 0 || c >= 9) {
            printf("Erro:Linha e Coluna devem ser de 1 a 9!\n\n");
            continue;
        }
        if (valor < 1 || valor > 9) {
            printf("Erro: valor deve ser de 1 a 9!\n\n");
            continue;
        }
        if (!posicoesModificaveis[r][c]) {
            printf("Erro: Voce nao pode alterar os numeros originais do tabuleiro!\n\n");
            continue;
        }

        
        tabuleiro[r][c] = valor;
        printf("Jogada realizada com sucesso!\n\n");
    }

    return 0;
}