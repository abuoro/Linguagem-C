/* 
autor: abuoro

Exercicio 21: Faça um programa que receba dois numeros. Calcule e mostre:
• a soma dos numeros pares desse intervalo de numeros, incluindo os numeros digitados;
• a multiplicacao dos numeros ımpares desse intervalo, incluindo os digitados;


Data: 08/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

int x,y,i,soma = 0;
unsigned int long mult = 1;

int main (){
	
	
    printf("Digite o primeiro numero: ");
    scanf("%d",&x);
    printf("Digite o segundo numero: ");
    scanf("%d",&y);
	printf("\n\n\n\n");
	for(i=x;i<=y;i++) { 
        soma = soma + i;
        mult = mult * i;
	}	
	printf("A soma dos numeros resulta em %d \n",soma);
    printf("A multiplicacao dos numeros resulta em %u \n\n\n\n",mult); //mudar o %d
}  

