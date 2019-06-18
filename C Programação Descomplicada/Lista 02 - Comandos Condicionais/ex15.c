/* 
autor: abuoro

Exercicio 15: Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este numero. Isto e, domingo se ´ 1, segunda-feira se 2, e assim por diante.

Data: 18/05/2019
 
*/

#include <stdio.h>
#include<stdlib.h>

int controle; 

int main()


{
printf("Digite um numero\n");
fflush(stdin); //Usado para limpar o buffer de entrada de modo que o scanf não leia o caracter de pular linha \n
scanf("%d",&controle); 
	switch (controle)
	{ 
		case 1:
			printf("\nDomingo\n");
		break;
		
		case 2:
			printf("\nSegunda-feira\n");
		break;
		
		case 3:
			printf("\nTerca-feira\n");
		break;
		
		case 4:
			printf("\nQuarta-Feira\n");
		break;
		
		case 5:
			printf("\nQuinta-Feira\n");
		break;
		
		case 6:
			printf("\nSexta-Feira\n");
		break;
		
		case 7:
			printf("\nSabado\n");
		break;
		default:
			printf("\nDia invalido\n");
	}
}




