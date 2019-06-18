/* 
autor: abuoro

Exercicio 4: Faca um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb  em dois valores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa devera escrever a soma dos valores encontrados nas respectivas posicoes  X e Y .


Data: 16/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const posicoes=8;

int vetor[8],i,soma,x,y;


int main (){
	
	for(i=0;i<posicoes;i++){
		printf("Digite o numero %d do vetor: \n",i+1);
		scanf("%d",&vetor[i]);
	}
	
	printf("Qual o valor de X? :\n");
	scanf("%d",&x);
	
	printf("Qual o valor de Y? :\n");
	scanf("%d",&y);
	
	soma = vetor[x] + vetor[y];
	
	printf("Posicao X vai ser %d, Posicao Y vai ser %d e o resultado da soma vai ser %d \n",(x+1),(y+1),soma);
	
	
} 