/* 
autor: abuoro

Exercicio 07:  Faça um programa que receba dois numeros e mostre o maior. Se por acaso, os dois numeros forem iguais, imprima a mensagem Numeros iguais.

Data: 13/05/2019
 
*/
#include <stdio.h>

int x,y;

int main()


{
printf("Digite o primeiro numero\n");
scanf("%d",&x);
printf("Digite o segundo numero\n");
scanf("%d",&y);

		if ( x == y) 
			{ 
			printf("Numeros iguais\n");
			}
		else	 
				if ( x > y ) 
					{
		 			printf("O primeiro numero (%d) eh maior que o segundo (%d)\n", x,y);
					}
				else
					printf("O segundo numero (%d) eh maior que o primeiro (%d)\n", y,x);
}
