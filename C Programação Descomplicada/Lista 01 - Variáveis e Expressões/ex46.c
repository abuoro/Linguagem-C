/* 
autor: abuoro

Exercicio 46: Faca um programa que leia um numero inteiro positivo de tres digitos (de 100 a 999).
Gere outro numero formado pelos digitos invertidos do numero lido. 


NOTA: Utilizar a divisão normal e o MOD (resto da divisão) para obter os numeros separados.
No futuro, refazer com vetor.

Data: 08/04/2019
 
*/

#include <stdio.h>




int main ()

{
	int x,cent,deze,unid;
	printf("Digite um numero entre 100 e 999\n");
	scanf("%d",&x);
	cent=x/100;	x=x%100; deze=x/10; unid=x%10;
	printf("O numero ao contrário fica %d%d%d", unid,deze,cent);
	
} 
