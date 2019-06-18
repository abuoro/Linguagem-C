/* 
autor: abuoro

Exercicio 7: Faça um programa que leia 10 inteiros positivos, ignorando numeros não positivos
e imprima sua média


Data: 04/05/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

//Definição de constantes
const inicial = 1; //Define o numero inicial da soma
const max = 10; //Define o máximo de numeros a serem somados

//Definição de variaveis
int i,total,x; //Variavel de controle, resultado e auxiliar


int main (){
	
	printf("Programa que vai ler %d numeros inteiros POSITIVOS e dizer sua media\n",max);
		for (i=inicial;i<=max;i++){
			printf("Digita um numero positivo para a media\n",i);
			scanf("%d",&x);
			if (x>=0)
				total=total+x;
			else{ 
				printf("Numero negativo não vai ser somado na media\n");
				i--; //O laço sempre incrementa o i. Como um numero negativo não conta, precisamos
				     //decrementar o laço para retornar à mesma interação e conseguir somar os
					 //10 primeiros numeros positivos.
			}
		}
		
	printf("O resultado da soma de %d numeros inteiros vai ser %d e sua media vai ser %d.\n",max,total,(total/max));
} 