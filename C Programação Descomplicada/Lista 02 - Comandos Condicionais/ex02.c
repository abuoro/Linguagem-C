/* 
autor: abuoro

Exercicio 02:  Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz 
quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o 
numero e invalido

Data: 13/05/2019
 
*/
#include <stdio.h>
#include <math.h>

int x;

int main()
{
printf("Digita um numero\n");
scanf("%d",&x);
	
		if ( x > 0) {
			printf("O numero eh positivo e sua raiz quadrada eh %f\n", sqrt(x));
			}
		else 
			printf("O numero eh invalido");
	
	

}
