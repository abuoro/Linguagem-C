/* 
autor: abuoro


Exercicio 5:Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui. ˜

Data: 16/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const maximo = 10;
int vetor[10],i,par;


int main (){
	
	for(i=0;i<maximo;i++){
		printf("Digite o valor %d do vetor: \n",(i+1));
		scanf("%d", &vetor[i]);
			if(vetor[i] % 2 == 0)
				par = par+1;
	}

	printf("O vetor acima digitado possui %d numeros pares. \n",par);

} 