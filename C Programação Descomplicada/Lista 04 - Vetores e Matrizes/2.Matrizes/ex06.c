/* 
Angelo Buoro

Exercicio 06: Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posicao das matrizes lidas.


Data: 19/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const linhas = 4;
const colunas = 4;
int matriz1[4][4];
int matriz2[4][4];
int matriz3[4][4];
int i,j;


int main (){
	
//Popular matriz 1
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		printf("Digite o numero da posicao [%d][%d] da MATRIZ 1: \n",i+1,j+1);
		scanf("%d",&matriz1[i][j]);
		}
	}
//Popular matriz 2	
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		printf("Digite o numero da posicao [%d][%d] da MATRIZ 2: \n",i+1,j+1);
		scanf("%d",&matriz2[i][j]);
		}
	}
	
//Testar qual é maior e preencher a matriz 3
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			if(matriz1[i][j] > matriz2[i][j])
				matriz3[i][j] = matriz1[i][j];
			else
				matriz3[i][j] = matriz2[i][j];
		}		
	}		
			
//Imprimir a matriz 3	
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){		
			printf("[%d] ",matriz3[i][j]);
		}
		printf("\n");
	}
} 