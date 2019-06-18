/* 
autor: abuoro

Exercicio 25:Faca um programa que some todos os numeros naturais abaixo de 1000 que sao multiplos ´
de 3 ou 5.

Data: 10/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const limite=1000;
int   divisor=15;
int   i;

int main (){
	
	for(i=0;i<=limite;i++)
		if(i%divisor==0)
			printf("%d ",i);
		i++;

} 