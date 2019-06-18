/* 
autor: abuoro

Exercicio 1: Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.


Data: 18/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const linhas = 4;
const colunas = 4;
int matriz[4][4];
int i,j,qtd;


int main (){
	
//Popular matriz
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		printf("Digite o numero da posicao [%d][%d] da matriz: \n",i+1,j+1);
		scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			if(matriz[i][j] >= 10)
				qtd++;
		}
	}		
	
	printf("A matriz digitada possui %d valores maiores que 10 \n",qtd);

} 