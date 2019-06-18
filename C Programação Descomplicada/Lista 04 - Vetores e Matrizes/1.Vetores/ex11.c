/* 
autor: abuoro

Exercicio 11: Faca um programa que preencha um vetor com 10 numeros reais, calcule e mostre a 
quantidade de numeros negativos e a soma dos numeros positivos desse vetor.

Data: 16/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const maximo = 10;
int i,soma,qtd_neg,vetor[10];


int main (){
	
	//Popular o vetor e calcular soma e quantidade de numeros negativos;
	for(i=0;i<maximo;i++) {
		printf("Digite o numero %d do vetor: \n",i+1);
		scanf("%d",&vetor[i]);
			if(vetor[i] < 0)  
				qtd_neg++;
			else
				soma = soma+vetor[i];
			
	}
	
	//Exibir o resultado
	printf("A quantidade de numero negativos vai ser %d e a soma dos positivos vai ser %d\n",qtd_neg,soma);

} 