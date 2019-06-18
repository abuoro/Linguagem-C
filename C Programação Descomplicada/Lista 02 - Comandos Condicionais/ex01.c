/* 
autor: abuoro

Exercicio 01:  Faça um programa que receba dois numeros e mostre qual deles e o maior.


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

		if (x > y) 
				printf("O primeiro numero (%d) eh maior que o segundo (%d)\n",x,y);
		else
				printf("O segundo numero (%d) eh maior que o primeiro (%d)\n",y,x);
				

}



