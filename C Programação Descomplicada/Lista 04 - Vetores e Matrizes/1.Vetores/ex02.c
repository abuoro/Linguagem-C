/* 
autor: abuoro

Exercicio 2: Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos


Data: 16/06/2019
 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const valores=6;

int vetor[6],i=0;


int main (){

	
	for (i=0;i<valores;i++) {
		printf("Digite o valor %d do vetor :\n",(i+1));
		scanf("%d",&vetor[i]);
	}
	
	for (i=0;i<valores;i++) 
	printf("O valor numero %d do vetor vai ser %d \n",(i+1),vetor[i]);


}		
