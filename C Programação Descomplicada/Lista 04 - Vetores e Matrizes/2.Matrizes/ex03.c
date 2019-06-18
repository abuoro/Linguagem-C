/* 
autor: abuoro

Exercicio 3: Faca um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
coluna de cada elemento. Em seguida, imprima na tela a matriz.


Data: 18/06/2018
 
 */
#include <stdio.h>
#include <stdlib.h>

const linhas = 4;
const colunas = 4;
int matriz[4][4];
int i,j;


int main (){
	
//Popular matriz
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		matriz[i][j] = (i+1)*(j+1);
		}
	}

	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			if(j != 5)
				printf("[%d]  ",matriz[i][j]);
			else
				printf("[%d] ",matriz[i][j]);
		}
		printf("\n");
	}

} 