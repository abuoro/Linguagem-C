/* 
autor: abuoro

Exercicio 08:Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor ´
lido.


Data: 04/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

const inicio = 0;
const max=10;
int maior,menor,i,x=0;


int main ()
{
	printf("Digite um numero"); // A primeira iteração é feita para popular as variáveis MAIOR e MENOR
	scanf("%d",&x);				// visto que se iniciarmos com 0 e realizar o teste sempre para verificar
	maior=menor=x;				// que o numero digitado é menor que menor atual, nunca vai sair a menos que seja
								// digitado um numero negativo (menor que o valor iniciado de MENOR = 0)

	for(i=inicio;i<=max-2;i++)  //Aqui decrementa-se o final pois já fizemos uma leitura de numeros.
		{
		printf("Digite um numero");
		scanf("%d",&x);
		if (x>maior)
			maior=x;
				else
					{ 
					if(x<menor)
					menor=x;
					} 
		}
printf("O maior numero digitado foi %d e o menor foi %d\n",maior,menor); 
}