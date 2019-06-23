/* 
Angelo Buoro

Exercicio 08: Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao ACIMA da diagonal principal.


Data: 19/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const linhas = 3;
const colunas = 3;
int matriz[3][3];
int i,j,soma;


int main (){
	
//Popular matriz
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		printf("Digite o numero da posicao [%d][%d] da matriz: \n",i+1,j+1);
		scanf("%d",&matriz[i][j]);
		}
	}

//Somar os itens acima da diagonal principal
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			if(i < j)
				soma = soma + matriz[i][j];
		}
	}
//Exibir os resultados
	printf("A soma dos itens ACIMA da diagonal principal vai ser %d \n",soma);
} 