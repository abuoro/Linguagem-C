/* 
autor: abuoro

Exercicio 09:  Faça um programa que leia um numero inteiro  N e depois imprima os N primeiros
numeros naturais ımpares.


Data: 06/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

int i,n;


int main (){
	
	printf("Quantos numeros naturais a partir de 0?: ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
			if(i%2!=0) //Teste se o numero que a iteração está é impar ,i.e, módulo da divisão por 2 diferente de zero
				printf("%d\n",i);
			i++;				
} 