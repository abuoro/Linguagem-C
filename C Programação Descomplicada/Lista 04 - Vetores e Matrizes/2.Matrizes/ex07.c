/* 
autor: abuoro

Exercicio 7: Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima 
o vetor, o maior elemento e a posicao que ele se encontra.


Data: 16/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const maximo = 10;
int i,maior,pos,vetor[10];

int main (){
	
	//Popular o vetor
	for(i=0;i<maximo;i++) {
		printf("Digite o numero %d do vetor: \n",i+1);
		scanf("%d",&vetor[i]);
	}

	//Descobrir o maior e posição
	maior = vetor[0];
	for(i=0;i<maximo;i++) {
		if(vetor[i] > maior) {
			maior = vetor[i];
			pos = i;
		}
	}
	
	//Exibir os resultados
	printf("O maior valor encontrado foi %d e ele estava na posicao %d do vetor \n",maior,(pos+1));
} 