/* 
autor: abuoro

Exercicio 10:Faça um programa que calcule e mostre a soma dos 50 primeiros numeros pares
Feitos com FOR e WHILE.

Data: 06/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const max=100;

int i,total=0;

int main (){
		
	//Feito com FOR:
	
	for(i=0;i<=max;i++)
		if(i%2==0)
			total=total+i;
		i++;
		printf("A soma dos 50 primeiros numeros pares vai ser %d\n",total);
	
	
	//Feito com WHILE:
	/* while(i<=max){
		if(i%2==0)
			total=total+i;
		i++;
	}
	printf("A soma dos 50 primeiros numeros pares vai ser %d\n",total); 
	*/
			
} 


	
	