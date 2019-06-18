/* 
autor: abuoro

Exercicio 5: Faça um programa que peça ao usuario para digitar 10 valores e some-os


Data: 04/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const inicio = 1;
const max = 10;
int i,x,y=0;

int main (){
	
		for (i=inicio;i<=max;i++){ 
					printf("Digite o numero %d da soma\n",i);
					scanf("%d",&y);
					x=x+y;
		}
	printf("O resultado da soma dos %d numeros vai ser %d\n",max,x);


} 