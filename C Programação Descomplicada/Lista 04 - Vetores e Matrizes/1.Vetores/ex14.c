/* 
autor: abuoro

Exercicio 14: Faca um programa que leia um vetor de 10 posicoes e verifique se existem valores iguais 
e os escreva na tela.

TODO: Melhorar o algoritimo de mostrar quais numeros são repetidos e em quais posições.


Data: 16/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const maximo = 10;
int vetor[10],i,j,temp;


int main (){
	
	//Popular o vetor
	for(i=0;i<maximo;i++) {
		printf("Digite o numero %d do vetor: \n",i+1);
		scanf("%d",&vetor[i]);
	}

	//Verificar a presença de numeros iguais
	for(i=0;i<maximo;i++) {
		temp = vetor[i];
			for(j=(i+1);j<maximo;j++) {
				if( temp == vetor[j] )
					printf(" %d aparece repetido em %d e %d \n", vetor[j],i+1,j+1);
			}
	}
} 