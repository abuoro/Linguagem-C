/* 
Autor: abuoro

Exercicio 07: Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos sao da forma: 
A[i][j] = 2i + 7j − 2 se i < j;
A[i][j] = 3i^2 − 1 se i = j;
A[i][j] = 4i^3 − 5j2 + 1 se i > j:


Data: xx/xx/20xx
 
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const linhas = 10;
const colunas = 10;
int matriz[10][10];
int i,j;


int main (){
/*	
Popular matriz com as condições do problema

NOTA: Foi somado a cada indide (i,j) o valor de +1 pela diferença
como a linguagem C trata vetores. Sua contagem começa de 0
e sabemos que matematicamente esta errado uma matriz possuir indice
A[0][0].
*/
	for(i=0;i < linhas;i++) {
		for(j=0;j < colunas;j++){
			if (i < j) 
				matriz[i][j] = ((2*(i+1)) + (7*(j+1)) - 2);
			else 
				if ( i == j)
					matriz[i][j] =  (3*(pow((i+1),2)) - 1);
				else  
					matriz[i][j] = ( (4*pow((i+1),3)) - (5*pow((j+1),2)) + 1);
			
			}
		}
//Imprimir a matriz
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			printf("[%d] ",matriz[i][j]);
		}
	printf("\n");
	}


} 
