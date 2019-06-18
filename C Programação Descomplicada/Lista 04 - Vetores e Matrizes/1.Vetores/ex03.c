/* 
autor: abuoro


Exercicio 3: Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem 10 elementos cada. Imprimir todos os conjuntos.

Data: 16/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const limite=10;
int vet1[10],vet2[10],i=0;


int main (){

	for(i=0;i<limite;i++){
	printf("Digite o valor %d do vetor base: \n",i+1);
	scanf("%d",&vet1[i]);
	vet2[i] = pow(vet1[i],2);
	}
	
	printf("O PRIMEIRO conjunto de numero digitados foi: \n");
	for(i=0;i<limite;i++)
		printf("[ %d ] ",vet1[i]);

	printf("\n");
	printf("O SEGUNDO conjunto de numero digitados foi: \n");
	for(i=0;i<limite;i++)
		printf("[ %d ] ",vet2[i]);

}