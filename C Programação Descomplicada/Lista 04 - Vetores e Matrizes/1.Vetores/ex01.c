/* 
autor: abuoro

Exercicio 01: 

Faca um programa que possua um vetor denominado A que armazene 6 numeros inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posicoes
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posicao o valor 100. 
(d) Mostre na tela cada valor do vetor A, um em cada linha.


Data: 12/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

int vetor[6]={1,0,5,-2,-5,7};
int soma,i;


int main (){
		
	soma=vetor[0]+vetor[1]+vetor[5];
	printf("A soma dos itens 0, 1 e 5 da matriz vai ser %d\n",soma);
	vetor[4]=100;
	printf("%d\n",vetor[4]);
	
	for (i = 0; i < 6; i++) {
		printf("[%d]",vetor[i]);
	}
	
	
} 