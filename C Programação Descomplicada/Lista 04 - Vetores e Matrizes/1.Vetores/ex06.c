/* 
autor: abuoro

Exercicio 6: Faca um programa que receba do usuario um vetor com 10 posicoes. Em seguida devera´
ser impresso o maior e o menor elemento do vetor.

Data: 16/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const limite = 10;
int   vetor[10],maior,i,menor;


int main (){
	
	for(i=0;i<limite;i++) { 
		printf("Digite o valor %d do vetor: \n",(i+1));
		scanf("%d", &vetor[i]); 
	}
	
	//laço para o menor 	
	menor = vetor[0];
	for(i=0;i<limite;i++)
		if(vetor [i] < menor ){
			menor = vetor[i];
		}
	//laço para o maior
	maior = vetor[0];
	for(i=0;i<limite;i++)
		if(vetor [i] > maior ) {
			maior = vetor[i];
		}
	
	printf("O maior valor digitado foi %d e o menor foi %d \n", maior, menor);	
} 