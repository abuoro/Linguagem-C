/* 
autor: abuoro

Exercício 6: Faça um programa que leia 10 inteiros e imprima sua media.


Data: 04/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>


//Definição de constantes
const inicial = 1; //Define o numero inicial da soma
const max = 10; //Define o máximo de numeros a serem somados

//Definição de variaveis
int i,total,x; //Variavel de controle, resultado e auxiliar


int main (){
	
	printf("Programa que vai ler %d numeros inteiros e dizes sua media\n",max);
	for (i=inicial;i<=max;i++){
		printf("Digita o numero %d da media\n",i);
		scanf("%d",&x);
		total=total+x;
	}
	printf("O resultado da soma de %d numeros inteiros vai ser %d e sua media vai ser %d.\n",max,total,(total/max));
} 