/* 
autor: abuoro

Exercicio 8: Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa


Data: 16/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const maximo = 6;
int i,vetor[6];

int main (){
	
	//Popular o vetor
	for(i=0;i<maximo;i++) {
		printf("Digite o numero %d do vetor: \n",i+1);
		scanf("%d",&vetor[i]);
	}

	//Imprimir o valor
	i = 0;
	while(i<6) {
		printf("[ %d ] ",vetor[5-i]);
		i++;
	}
} 