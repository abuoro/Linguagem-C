/* 
autor: abuoro

Exercicio 23: Faca um algoritmo que leia um numero positivo e imprima seus divisores


Data: 10/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>


int divisor=1; //Variavel inicial da divisão e divisor de todos os numeros
int x;

int main (void){
	
    printf("Digite um numero: \n");
	scanf("%d",&x);
	
	while(x >= divisor) { 
			if(x%divisor == 0)  
				printf("%d \n",divisor);
		
		divisor++;	
	} 

} 