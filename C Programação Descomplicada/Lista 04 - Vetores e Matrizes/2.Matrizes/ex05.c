/* 
autor: abuoro

Exercicio 05: Leia uma matriz 5 x 5. Leia tambem um valor  X. O programa devera fazer uma busca 
desse valor na matriz e, ao final, escrever a localizac¸ao (linha e coluna) ou uma mensagem de “nao encontrado”.


Data: 18/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const linhas = 5;
const colunas = 5;
int matriz[5][5];
int i,j,x,temp;


int main (){
	
//Popular matriz
	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
		printf("Digite o numero da posicao [%d][%d] da matriz: \n",i+1,j+1);
		scanf("%d",&matriz[i][j]);
		}
	}

	printf("Qual numero deseja pesquisar? \n");
	scanf("%d",&x);

	for(i=0;i<linhas;i++) {
		for(j=0;j<colunas;j++){
			if(matriz[i][j] == x) 
			printf("O numero digitado %d foi encontrado na posicao M[%d],[%d] \n",x,(i+1),(j+1));
			else{
				temp++; //contador. Se temp = linhas*colunas, não há nenhuma ocorrencia de x na matriz.
				
			}
		}
	}

	//O comando a seguir só será executado se não foram encontradas ocorrencias de x na matriz.
	if(temp == (linhas*colunas))
		printf("O numero digitado %d nao foi encontrado na matriz \n",x);
		
}