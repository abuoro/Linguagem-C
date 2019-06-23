/* 
Autor: abuoro

Exercicio 13: Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.


Data: 23/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const linhas = 4;
const colunas = 4;
int matriz[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int matriz_trans[4][4];
int i,j;


int main (){
	
//Transformar matriz:
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		if( i >= j)
			matriz_trans[i][j] = matriz[i][j];
		else
			matriz_trans[i][j] = 0;
		}
	}

//Exibir o resultado:
	
	//Matriz base
	printf("Matriz base\n");
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			printf("[%d] ",matriz[i][j]);
		} 
	printf("\n");
	}
	
	//Matriz transformada em triangular inferior
	printf("Matriz base\n");
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			printf("[%d] ",matriz_trans[i][j]);
		} 
	printf("\n");
	}
	



} 
