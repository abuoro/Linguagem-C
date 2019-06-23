/* 
Autor: abuoro

Exercicio 12: Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.

NOTA: Matriz transposta tem as linhas transformadas em colunas.

Data: 23/06/2019
 
 */

#include <stdio.h>
#include <stdlib.h>

const int linhas=3;
const int colunas=3;



int matriz[3][3];
int tranposta[3][3];
int i,j;


int main (){
	
//Popular matriz
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		printf("Digite o numero da posicao [%d][%d] da matriz: \n",i+1,j+1);
		scanf("%d",&matriz[i][j]);
		}
	}


printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("Matriz Lida: \n");

//imprimir matriz lida
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			printf("[%d] ",matriz[i][j]);
		}
		printf("\n");
	}

printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("Matriz Transposta: \n");



//imprimir matriz transposta
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			printf("[%d] ",matriz[j][i]);
		}
		printf("\n");
	}

} 
