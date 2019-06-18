/* 
autor: abuoro

Exercicio 02: Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.


Data: 18/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const linhas = 5;
const colunas = 5;
int matriz[5][5];
int i,j;


int main (){
	
//Popular matriz
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			if( i == j)
				matriz[i][j] = 1;
			else
				matriz[i][j] = 0;
		}
	}
	
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			if(j != 5)
			printf("[%d] ",matriz[i][j]);
			else
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");  // Esse printf só é executado no momento que termina uma linha (j=colunas)
	}
} 