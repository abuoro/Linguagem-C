/* 
Angelo Buoro

Exercicio 10: Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao NA DIAGONAL SECUNDARIA.


Data: 19/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const linhas = 3;
const colunas = 3;
int matriz[3][3];
int i,j,soma,temp1;

int main (){
	
//Popular matriz
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		printf("Digite o numero da posicao [%d][%d] da matriz: \n",i+1,j+1);
		scanf("%d",&matriz[i][j]);
		}
	}

//Somar os itens acima da diagonal principal

/*
Apesar de matematicamente a matriz secundária
ser definida como i+j = n + 1, onde n = numero de colunas,
pela forma como os vetores são implementados em C, a formula de testa
se torna i+j = colunas-1
*/

	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			if ( (i+j) == colunas-1 ) // Formula modificada de matriz secundaria.
				soma = soma + matriz[i][j];
		}
	}
//Exibir os resultados
	printf("\n\n\n\nA soma dos itens da diagonal secundaria vai ser %d \n",soma);
} 