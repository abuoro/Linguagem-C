/* 
autor: abuoro

Exercicio 05:  Faça um programa que receba um numero inteiro e verifique se este numero  e par ou 
ımpar.

Data: 13/05/2019
 
*/
#include <stdio.h>

int x;

int main()


{

printf("Digite um numero\n");
scanf("%d",&x);

if ( x % 2 != 0) 
		printf("O numero digitado eh impar\n");
		else
		printf("O numero digitado eh par\n");


}
