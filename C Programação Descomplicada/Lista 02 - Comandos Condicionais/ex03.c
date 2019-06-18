/* 
autor: abuoro

Exercicio 03:  Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contrario, 
imprima o numero ao quadrado

Data: 13/05/2019
 
*/
#include <stdio.h>
#include <math.h>

int x;

int main ()

{
printf("Digite um numero\n");
scanf("%d",&x);

		if (x > 0) {
			printf("O numero eh positivo e sua raiz quadrada eh %.2f\n", sqrt(x));
			}	 
		else
			printf("O numero eh negativo (ou zero ) e seu valor ao quadrado eh %.2f\n", pow(x,2));
		 
	


}
