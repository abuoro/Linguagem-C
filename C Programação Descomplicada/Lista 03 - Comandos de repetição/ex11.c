/* 
autor: abuoro

Exercicio 11: Faça um programa que leia um numero inteiro positivo N e imprima todos os numeros 
naturais de 0 ate N em ordem crescente.


Data: 06/06/2019
 
 */
#include <stdio.h>
#include <stdlib.h>

int i,n=0;


int main (){
	
	
	printf("Digite um numero inteiro positivo N: ");
	scanf("%d",&n);
	
	printf("Feito com FOR,aperte ENTER para continuar\n");
	system("pause");

	for(i=0;i<=n;i++)
		printf("%d\n",i);
	i++;

	
	printf("Feito com WHILE,aperte ENTER para continuar\n");
	system("pause");
	
	i=0;
	
	while(i<=n){
		printf("%d\n",i);
		i++;
	}
}






