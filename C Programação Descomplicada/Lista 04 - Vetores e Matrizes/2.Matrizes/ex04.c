/* 
autor: abuoro

Exercicio 04: Leia uma matriz 4 x 4, imprima a matriz e retorne a localizacao (linha e a coluna) do maior valor.


Data: 18/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const linhas = 4;
const colunas = 4;
int matriz[4][4];
int i,j,x,y,maior;


int main (){
	
//Popular matriz
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		printf("Digite o numero da posicao [%d][%d] da matriz: \n",i+1,j+1);
		scanf("%d",&matriz[i][j]);
		}
	}
	maior = matriz[0][0];
//Resto do Código
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			if(matriz[i][j] > maior) {
				maior = matriz[i][j]; 	//atribuindo o maior valor para maior
				x = i+1; //salvando a posição i que foi encontrado maior
				y = j+1; //salvando a posição j que foi encontrado maior
				//Lembrando que esse +1 é pq a contagem da matriz começa com 0. 
				//se pegarmos esse valor direto , encontremos o valor em uma posição a menos.
			}
		}
	}	
	
	printf("O maior valor da matriz foi %d encontrado em M[%d],[%d] \n",maior,x,y);
	
} 