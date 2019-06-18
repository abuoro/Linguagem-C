/* 
autor: abuoro

Exercicio 05:  Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles, 
assim como a diferenca existente entre ambos.

Data: 13/05/2019
 
*/

#include <stdio.h>

int x,y;

int main()

{
printf("Digite um numero\n");
scanf("%d",&x);
printf("Digite outro numero\n");
scanf("%d",&y);

		if (x > y) 
			printf("O primeiro numero (%d) eh maior que o segundo(%d) e sua diferenca eh (%d)\n", x,y, (x-y));
		else
			printf("O segundo numero (%d) eh maior que o primeiro(%d) e sua diferenca eh (%d)\n",y,x,(y-x));				
}
