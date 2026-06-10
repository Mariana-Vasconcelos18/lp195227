 --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mariana Rafaela Dos Santos Vasconcelos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 12/05/2026
Objetivo    :  Leia um valor inteiro N que deve ser impressa conforme o modelo.
Aprendizado : manipulação do uso de matrizes
-------------------------------------------------------------------------- 

#include <stdio.h>

int main ()
{

	unsigned short int tamanho, linha, coluna;

	while (scanf("%hd", &tamanho) != EOF)
	{
		short matriz[tamanho][tamanho];

		for (linha = 0; linha < tamanho; linha++)
			for (coluna = 0; coluna < tamanho; coluna++)
			{
				if (linha == coluna)
					matriz[linha][coluna] = 1;
				if (linha == tamanho - coluna - 1)
					matriz[linha][coluna] = 2;
				if (linha != coluna && linha != tamanho - coluna - 1)
					matriz[linha][coluna] = 3;
			}

		for (linha = 0; linha < tamanho; linha++)
		{
			for (coluna = 0; coluna < tamanho; coluna++)
				printf("%d", matriz[linha][coluna]);

			printf("\n");
		}
	}
}



